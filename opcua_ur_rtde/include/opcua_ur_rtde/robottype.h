#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

#include "opcua_ur_rtde/open62541.h"

UA_StatusCode defineRobotType(UA_Server *server, UA_NodeId jointsTypeId, UA_NodeId tcpTypeId, UA_NodeId *robotTypeId) {
    // Step 1: Create RobotType ObjectType
    UA_ObjectTypeAttributes robotAttr = UA_ObjectTypeAttributes_default;
    robotAttr.displayName = UA_LOCALIZEDTEXT("en-US", "RobotType");

    UA_StatusCode retval = UA_Server_addObjectTypeNode(
        server,
        UA_NODEID_NULL, // auto assign
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),  // parent = BaseObjectType
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(1, "RobotType"),
        robotAttr,
        NULL,
        robotTypeId
    );

    if (retval != UA_STATUSCODE_GOOD)
        return retval;

    // Step 2: Add Joints (Object of JointsType)
    UA_ObjectAttributes jointsAttr = UA_ObjectAttributes_default;
    jointsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Joints");

    UA_Server_addObjectNode(server,
        UA_NODEID_NULL,
        *robotTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Joints"),
        jointsTypeId, // <-- custom ObjectType for joints
        jointsAttr,
        NULL,
        NULL
    );

    // Step 3: Add TCP (Object of TCPType)
    UA_ObjectAttributes tcpAttr = UA_ObjectAttributes_default;
    tcpAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TCP");

    UA_Server_addObjectNode(server,
        UA_NODEID_NULL,
        *robotTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "TCP"),
        tcpTypeId, // <-- custom ObjectType for TCP pose
        tcpAttr,
        NULL,
        NULL
    );

    return UA_STATUSCODE_GOOD;
}

UA_StatusCode defineJointType(UA_Server *server, UA_NodeId *jointTypeId) {
    // Create the JointType ObjectType
    UA_ObjectTypeAttributes oAttr = UA_ObjectTypeAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "JointType");

    UA_StatusCode retval = UA_Server_addObjectTypeNode(
        server,
        UA_NODEID_NULL,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(1, "JointType"),
        oAttr,
        NULL,
        jointTypeId);
    if (retval != UA_STATUSCODE_GOOD)
        return retval;

    // Position (Double)
    UA_VariableAttributes posAttr = UA_VariableAttributes_default;
    UA_Double pos = 0.0;
    
    UA_Variant_setScalarCopy(&posAttr.value, &pos, &UA_TYPES[UA_TYPES_DOUBLE]);
    posAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    posAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Position");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, *jointTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Position"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        posAttr, NULL, NULL);

    // Velocity (Double)
    UA_VariableAttributes velAttr = UA_VariableAttributes_default;
    UA_Double vel = 0.0;
    UA_Variant_setScalarCopy(&velAttr.value, &vel, &UA_TYPES[UA_TYPES_DOUBLE]);
    velAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    velAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Velocity");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, *jointTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Velocity"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        velAttr, NULL, NULL);

    // Current (Double)
    UA_VariableAttributes curAttr = UA_VariableAttributes_default;
    UA_Double cur = 0.0;
    UA_Variant_setScalarCopy(&curAttr.value, &cur, &UA_TYPES[UA_TYPES_DOUBLE]);
    curAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    curAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Current");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, *jointTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Current"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        curAttr, NULL, NULL);

    // Temperature (Double)
    UA_VariableAttributes tempAttr = UA_VariableAttributes_default;
    UA_Double temp = 25.0;
    UA_Variant_setScalarCopy(&tempAttr.value, &temp, &UA_TYPES[UA_TYPES_DOUBLE]);
    tempAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    tempAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Temperature");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, *jointTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Temperature"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        tempAttr, NULL, NULL);

    // Mode (Int32)
    UA_VariableAttributes modeAttr = UA_VariableAttributes_default;
    UA_Int32 mode = 0;
    UA_Variant_setScalarCopy(&modeAttr.value, &mode, &UA_TYPES[UA_TYPES_INT32]);
    modeAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    modeAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Mode");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, *jointTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Mode"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        modeAttr, NULL, NULL);

    return UA_STATUSCODE_GOOD;
}

UA_StatusCode defineJointsType(
    UA_Server *server,
    UA_NodeId jointTypeId,
    const char **jointNames,
    UA_UInt32 jointCount,
    UA_NodeId *jointsTypeId
) {
    // Step 1: Create JointsType ObjectType
    UA_ObjectTypeAttributes jointsAttr = UA_ObjectTypeAttributes_default;
    jointsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "JointsType");

    UA_StatusCode retval = UA_Server_addObjectTypeNode(
        server,
        UA_NODEID_NULL,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(1, "JointsType"),
        jointsAttr,
        NULL,
        jointsTypeId
    );
    if (retval != UA_STATUSCODE_GOOD)
        return retval;

    // Step 2: Add a component for each joint name
    for (UA_UInt32 i = 0; i < jointCount; i++) {
        UA_ObjectAttributes jointAttr = UA_ObjectAttributes_default;
        jointAttr.displayName = UA_LOCALIZEDTEXT("en-US", jointNames[i]);

        retval = UA_Server_addObjectNode(server,
            UA_NODEID_NULL,                        // auto NodeId
            *jointsTypeId,                         // parent = JointsType
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(1, jointNames[i]),    // BrowseName = joint name
            jointTypeId,                           // type = JointType
            jointAttr,
            NULL,
            NULL);


        if (retval != UA_STATUSCODE_GOOD)
            return retval;
    }

    return UA_STATUSCODE_GOOD;
}


UA_StatusCode defineTCPType(UA_Server *server, UA_NodeId *tcpTypeId) {
    // Step 1: Create the TCPType ObjectType
    UA_ObjectTypeAttributes tcpAttr = UA_ObjectTypeAttributes_default;
    tcpAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TCPType");

    UA_StatusCode retval = UA_Server_addObjectTypeNode(
        server,
        UA_NODEID_NULL,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(1, "TCPType"),
        tcpAttr,
        NULL,
        tcpTypeId
    );
    if (retval != UA_STATUSCODE_GOOD)
        return retval;

    // Helper function to add a Double[6] array variable
    UA_Double defaultArray[6] = {0, 0, 0, 0, 0, 0};

    const char *names[] = {"Pose", "Speed", "Force"};
    for (size_t i = 0; i < 3; i++) {
        UA_VariableAttributes varAttr = UA_VariableAttributes_default;
        UA_Variant_setArrayCopy(&varAttr.value, defaultArray, 6, &UA_TYPES[UA_TYPES_DOUBLE]);
        varAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
        varAttr.valueRank = 1; // means it's an array
        varAttr.arrayDimensionsSize = 1;
        UA_UInt32 dims[1] = {6};
        varAttr.arrayDimensions = dims;
        varAttr.displayName = UA_LOCALIZEDTEXT("en-US", names[i]);

        retval = UA_Server_addVariableNode(server,
            UA_NODEID_NULL,
            *tcpTypeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(1, names[i]),
            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
            varAttr,
            NULL,
            NULL);

        if (retval != UA_STATUSCODE_GOOD)
            return retval;
    }

    return UA_STATUSCODE_GOOD;
}






UA_StatusCode instantiateRobot(UA_Server *server, UA_NodeId robotTypeId,
    UA_NodeId jointTypeId, UA_NodeId tcpTypeId,  UA_NodeId *robotId) {

    const char *jointNames[] = {"base", "shoulder", "elbow", "wrist1", "wrist2", "wrist3"};
    UA_StatusCode retval;

    // Step 1: Create the main Robot object
    UA_ObjectAttributes robotAttr = UA_ObjectAttributes_default;
    robotAttr.displayName = UA_LOCALIZEDTEXT("en-US", "UR5e");

    retval = UA_Server_addObjectNode(
        server,
        UA_NODEID_NULL,
        UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
        UA_QUALIFIEDNAME(1, "UR5e"),
        robotTypeId,
        robotAttr,
        NULL,
        robotId
    );
    if (retval != UA_STATUSCODE_GOOD) return retval;
    printf("RobotId namespace=%d, identifier=%d\n", robotId->namespaceIndex, robotId->identifier.numeric);

    // Step 2: Manually create "Joints" object
    UA_ObjectAttributes jointsAttr = UA_ObjectAttributes_default;
    jointsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Joints");

    UA_NodeId jointsNodeId;
    retval = UA_Server_addObjectNode(
        server,
        UA_NODEID_NULL,
        *robotId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "Joints"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), // Not using jointsTypeId anymore
        jointsAttr,
        NULL,
        &jointsNodeId
    );
    if (retval != UA_STATUSCODE_GOOD) return retval;

    // Step 3: Instantiate each joint manually
    for (size_t i = 0; i < 6; i++) {
        UA_ObjectAttributes jointAttr = UA_ObjectAttributes_default;
        jointAttr.displayName = UA_LOCALIZEDTEXT("en-US", jointNames[i]);

        UA_NodeId jointNodeId;
        retval = UA_Server_addObjectNode(
            server,
            UA_NODEID_NULL,
            jointsNodeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(1, jointNames[i]),
            jointTypeId,
            jointAttr,
            NULL,
            &jointNodeId
        );
        if (retval != UA_STATUSCODE_GOOD) return retval;

        // Add variables for each joint
        struct {
            const char *name;
            UA_Double defaultValue;
        } jointVars[] = {
            {"Position", 0.0},
            {"Velocity", 0.0},
            {"Current", 0.0},
            {"Temperature", 25.0}
        };

        for (size_t j = 0; j < 4; j++) {
            UA_VariableAttributes varAttr = UA_VariableAttributes_default;
            UA_Variant_setScalarCopy(&varAttr.value, &jointVars[j].defaultValue, &UA_TYPES[UA_TYPES_DOUBLE]);
            varAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
            varAttr.displayName = UA_LOCALIZEDTEXT("en-US", jointVars[j].name);
            UA_Server_addVariableNode(server, UA_NODEID_NULL, jointNodeId,
                UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                UA_QUALIFIEDNAME(1, jointVars[j].name),
                UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                varAttr, NULL, NULL);
        }

        // Mode (Int32)
        UA_Int32 mode = 0;
        UA_VariableAttributes modeAttr = UA_VariableAttributes_default;
        UA_Variant_setScalarCopy(&modeAttr.value, &mode, &UA_TYPES[UA_TYPES_INT32]);
        modeAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
        modeAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Mode");
        UA_Server_addVariableNode(server, UA_NODEID_NULL, jointNodeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(1, "Mode"),
            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
            modeAttr, NULL, NULL);
    }

    // Step 4: Instantiate TCP under UR5e
    UA_ObjectAttributes tcpAttr = UA_ObjectAttributes_default;
    tcpAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TCP");

    UA_NodeId tcpNodeId;
    retval = UA_Server_addObjectNode(
        server,
        UA_NODEID_NULL,
        *robotId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(1, "TCP"),
        tcpTypeId,
        tcpAttr,
        NULL,
        &tcpNodeId
    );

    const char *tcpVarNames[] = {"Pose", "Speed", "Force"};
    UA_Double defaultArray[6] = {0, 0, 0, 0, 0, 0};

    for (size_t i = 0; i < 3; i++) {
        UA_VariableAttributes varAttr = UA_VariableAttributes_default;
        UA_Variant_setArrayCopy(&varAttr.value, defaultArray, 6, &UA_TYPES[UA_TYPES_DOUBLE]);
        varAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
        varAttr.valueRank = 1; // array
        varAttr.arrayDimensionsSize = 1;
        UA_UInt32 dims[1] = {6};
        varAttr.arrayDimensions = dims;
        varAttr.displayName = UA_LOCALIZEDTEXT("en-US", tcpVarNames[i]);

        UA_Server_addVariableNode(server,
            UA_NODEID_NULL,
            tcpNodeId,
            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
            UA_QUALIFIEDNAME(1, tcpVarNames[i]),
            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
            varAttr,
            NULL,
            NULL);
    }
    return retval;
}




