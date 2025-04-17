
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include "opcua_ur_rtde/open62541.h"
#include "opcua_ur_rtde/robottype.h"


static volatile UA_Boolean running = true;
UA_Server *server = NULL;
UA_NodeId robotId;

void stopHandler(int sign) {
    running = false;
}

// Define all your modeling functions (defineJointType, defineJointsType, etc.) here...

void *server_thread(void *arg) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config); // important: call *before* changing endpoint

    // Optional: set custom endpoint URL
    UA_String endpointUrl = UA_STRING("opc.tcp://localhost:4840/freeopcua/server/");
    config->endpoints[0].endpointUrl = endpointUrl;

    // === Build the OPC UA Model ===

    // Step 1: Define all types and objects
    const char *jointNames[] = {"base", "shoulder", "elbow", "wrist1", "wrist2", "wrist3"};
    UA_NodeId jointTypeId, jointsTypeId, tcpTypeId, robotTypeId;

    defineJointType(server, &jointTypeId);
    defineJointsType(server, jointTypeId, jointNames, 6, &jointsTypeId);
    defineTCPType(server, &tcpTypeId);
    defineRobotType(server, jointsTypeId, tcpTypeId, &robotTypeId);
    instantiateRobot(server, robotTypeId, jointsTypeId, tcpTypeId, &robotId);
    // === Run the server ===
    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);
    return NULL;
}

// Starts the OPC UA server in a background thread
void start_opcua_server() {
    pthread_t thread;
    pthread_create(&thread, NULL, server_thread, NULL);
    pthread_detach(thread);
}

// The following functions are defined for updating the robot's data in run time

void update_variable(UA_Server *server, UA_NodeId parent, const char *childName, UA_Double value) {
    // printf("Updating variable %s under parent ns=%d, id=%d\n", childName, parent.namespaceIndex, parent.identifier.numeric);

    UA_BrowsePath path;
    UA_BrowsePath_init(&path);
    path.startingNode = parent;
    path.relativePath.elementsSize = 1;
    path.relativePath.elements = UA_Array_new(1, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    if (!path.relativePath.elements) {
        printf("Error: Failed to allocate memory for relativePath elements\n");
        return;
    }
    UA_RelativePathElement_init(&path.relativePath.elements[0]);
    path.relativePath.elements[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    path.relativePath.elements[0].isInverse = false;
    path.relativePath.elements[0].includeSubtypes = false;

    // path.relativePath.elements[0].targetName = UA_QUALIFIEDNAME(1, childName);

    UA_QualifiedName qn = UA_QUALIFIEDNAME(1, childName);
    UA_QualifiedName_copy(&qn, &path.relativePath.elements[0].targetName);

    UA_BrowsePathResult result = UA_Server_translateBrowsePathToNodeIds(server, &path);
    if (result.statusCode == UA_STATUSCODE_GOOD && result.targetsSize > 0) {
        UA_NodeId nodeId = result.targets[0].targetId.nodeId;
        UA_Variant variant;
        UA_Variant_setScalar(&variant, &value, &UA_TYPES[UA_TYPES_DOUBLE]);
        if (UA_NodeId_isNull(&nodeId)) {
            printf("Warning: nodeId is null, skipping write to %s\n", childName);
            return;
        }
        UA_Server_writeValue(server, nodeId, variant);
    }
    UA_QualifiedName_clear(&path.relativePath.elements[0].targetName);
    UA_BrowsePath_clear(&path);
    UA_BrowsePathResult_clear(&result);
    // printf("Updating var\n");
}



void update_tcp_array(UA_Server *server, UA_NodeId tcpNode, const char *varName, const double value[6]) {
    UA_BrowsePath path;
    UA_BrowsePath_init(&path);
    path.startingNode = tcpNode;
    path.relativePath.elementsSize = 1;
    path.relativePath.elements = UA_Array_new(1, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    if (!path.relativePath.elements) {
        printf("Error: Failed to allocate memory for relativePath elements\n");
        return;
    }
    UA_RelativePathElement_init(&path.relativePath.elements[0]);

    path.relativePath.elements[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    path.relativePath.elements[0].isInverse = false;
    path.relativePath.elements[0].includeSubtypes = false;

    UA_QualifiedName qn = UA_QUALIFIEDNAME(1, varName);
    UA_QualifiedName_copy(&qn, &path.relativePath.elements[0].targetName);

    UA_BrowsePathResult result = UA_Server_translateBrowsePathToNodeIds(server, &path);
    if (result.statusCode == UA_STATUSCODE_GOOD && result.targetsSize > 0) {
        UA_NodeId nodeId = result.targets[0].targetId.nodeId;
        if (!UA_NodeId_isNull(&nodeId)) {
            UA_Variant variant;
            UA_Variant_init(&variant);
            UA_StatusCode retval = UA_Variant_setArrayCopy(&variant, value, 6, &UA_TYPES[UA_TYPES_DOUBLE]);
            if (retval == UA_STATUSCODE_GOOD) {
                UA_Server_writeValue(server, nodeId, variant);
            } else {
                printf("Error: UA_Variant_setArrayCopy failed with status 0x%08x\n", retval);
            }
            UA_Variant_clear(&variant);
        } else {
            printf("Warning: nodeId is null, skipping write to %s\n", varName);
        }
    } else {
        printf("Error: Could not find variable '%s' (status: 0x%08x, targetsSize: %lu)\n",
               varName, result.statusCode, (unsigned long)result.targetsSize);
    }

    UA_QualifiedName_clear(&path.relativePath.elements[0].targetName);
    UA_BrowsePathResult_clear(&result);
    UA_BrowsePath_clear(&path);
}


void update_ur5e_state(
    const double joint_positions[6],
    const double joint_speeds[6],
    const double joint_currents[6],
    const double joint_temperatures[6],
    const double tcp_pose[6],
    const double tcp_speed[6],
    const double tcp_force[6]
) {
    if (!server) {
        printf("Error: OPC UA server is not initialized!\n");
        return;
    }
    
    if (robotId.identifierType == UA_NODEIDTYPE_NUMERIC && robotId.identifier.numeric == 0) {
        printf("Error: robotId is not valid!\n");
        return;
    }
    const char *jointNames[6] = {"base", "shoulder", "elbow", "wrist1", "wrist2", "wrist3"};

    // Step 1: Find "Joints" node
    UA_NodeId jointsNode;
    UA_BrowsePath jointsPath;
    UA_BrowsePath_init(&jointsPath);
    jointsPath.startingNode = robotId;
    jointsPath.relativePath.elementsSize = 1;
    jointsPath.relativePath.elements = UA_Array_new(1, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    if (!jointsPath.relativePath.elements) {
        printf("Error: Failed to allocate memory for relativePath elements\n");
        return;
    }
    UA_RelativePathElement_init(&jointsPath.relativePath.elements[0]);
    jointsPath.relativePath.elements[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    jointsPath.relativePath.elements[0].isInverse = false;
    jointsPath.relativePath.elements[0].includeSubtypes = false;
    jointsPath.relativePath.elements[0].targetName = UA_QUALIFIEDNAME(1, "Joints");

    UA_BrowsePathResult jointsResult = UA_Server_translateBrowsePathToNodeIds(server, &jointsPath);
    if (jointsResult.statusCode != UA_STATUSCODE_GOOD || jointsResult.targetsSize == 0)
        return;

    jointsNode = jointsResult.targets[0].targetId.nodeId;

    // Step 2: Update all joint variables
    for (size_t i = 0; i < 6; ++i) {
        // Get joint node
        UA_NodeId jointNode;
        UA_BrowsePath jointPath;
        UA_BrowsePath_init(&jointPath);
        jointPath.startingNode = jointsNode;
        jointPath.relativePath.elementsSize = 1;
        jointPath.relativePath.elements = UA_Array_new(1, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        if (!jointPath.relativePath.elements) {
            printf("Error: Failed to allocate memory for relativePath elements\n");
            return;
        }
        UA_RelativePathElement_init(&jointPath.relativePath.elements[0]);
        jointPath.relativePath.elements[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
        jointPath.relativePath.elements[0].isInverse = false;
        jointPath.relativePath.elements[0].includeSubtypes = false;
        // printf("Updating state for joint: %s\n", jointNames[i]);

        UA_QualifiedName qn = UA_QUALIFIEDNAME(1, jointNames[i]);
        UA_QualifiedName_copy(&qn, &jointPath.relativePath.elements[0].targetName); 
        UA_BrowsePathResult jointResult = UA_Server_translateBrowsePathToNodeIds(server, &jointPath);
        if (jointResult.statusCode == UA_STATUSCODE_GOOD && jointResult.targetsSize > 0) {
            jointNode = jointResult.targets[0].targetId.nodeId;

            update_variable(server, jointNode, "Position", joint_positions[i]);
            update_variable(server, jointNode, "Velocity", joint_speeds[i]);
            update_variable(server, jointNode, "Current", joint_currents[i]);
            update_variable(server, jointNode, "Temperature", joint_temperatures[i]);
            // printf("Error:before\n");

        }

        UA_QualifiedName_clear(&jointPath.relativePath.elements[0].targetName);
        UA_BrowsePath_clear(&jointPath);
        UA_BrowsePathResult_clear(&jointResult);
        // printf("Error:before3\n");

    }

    // printf("Error:before4\n");

    // UA_BrowsePath_clear(&jointsPath);
    // printf("Error:before6\n");

    UA_BrowsePathResult_clear(&jointsResult);
    // printf("Error:before5\n");

    // Step 3: Find "TCP" node
    UA_NodeId tcpNode;
    UA_BrowsePath tcpPath;
    UA_BrowsePath_init(&tcpPath);
    tcpPath.startingNode = robotId;
    tcpPath.relativePath.elementsSize = 1;
    tcpPath.relativePath.elements = UA_Array_new(1, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    if (!tcpPath.relativePath.elements) {
        printf("Error: Failed to allocate memory for relativePath elements\n");
        return;
    }
    UA_RelativePathElement_init(&tcpPath.relativePath.elements[0]);
    tcpPath.relativePath.elements[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    tcpPath.relativePath.elements[0].isInverse = false;
    tcpPath.relativePath.elements[0].includeSubtypes = false;
    tcpPath.relativePath.elements[0].targetName = UA_QUALIFIEDNAME(1, "TCP");

    UA_BrowsePathResult tcpResult = UA_Server_translateBrowsePathToNodeIds(server, &tcpPath);

    if (tcpResult.statusCode != UA_STATUSCODE_GOOD || tcpResult.targetsSize == 0) {
        printf("Error: Could not find TCP node (status: 0x%08x, targetsSize: %lu)\n",
                tcpResult.statusCode, (unsigned long)tcpResult.targetsSize);
        UA_BrowsePathResult_clear(&tcpResult);
        UA_BrowsePath_clear(&tcpPath);
        return;
    }
    // printf("Error:before\n");

    tcpNode = tcpResult.targets[0].targetId.nodeId;

    // printf("Error:before\n");

    update_tcp_array(server, tcpNode, "Pose", tcp_pose);
    update_tcp_array(server, tcpNode, "Speed", tcp_speed);
    update_tcp_array(server, tcpNode, "Force", tcp_force);
    // printf("Error:after\n");

    // UA_BrowsePath_clear(&tcpPath);

    UA_BrowsePathResult_clear(&tcpResult);
}
