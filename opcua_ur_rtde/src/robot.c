/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "opcua_ur_rtde/robot.h"


/* RobotType - ns=1;i=15011 */

static UA_StatusCode function_robot_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RobotType");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Represents a robot with manufacturer, model, joints and TCP");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[1], 15011LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[1], "RobotType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15011LU));
}

/* UR5e - ns=1;i=15055 */

static UA_StatusCode function_robot_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UR5e");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Universal Robots UR5e model");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15055LU),UA_NODEID_NUMERIC(ns[0], 85LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[1], "UR5e"),UA_NODEID_NUMERIC(ns[1], 15011LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15055LU));
}

/* ModelName - ns=1;i=15057 */

static UA_StatusCode function_robot_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModelName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15057LU),UA_NODEID_NUMERIC(ns[1], 15055LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ModelName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15057LU));
}

/* ManufacturerName - ns=1;i=15056 */

static UA_StatusCode function_robot_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15056LU),UA_NODEID_NUMERIC(ns[1], 15055LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ManufacturerName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15056LU));
}

/* JointsSet - ns=1;i=15050 */

static UA_StatusCode function_robot_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointsSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains all instances of animals");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[1], 15055LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "JointsSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15050LU));
}

/* ModelName - ns=1;i=15013 */

static UA_StatusCode function_robot_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModelName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15013LU),UA_NODEID_NUMERIC(ns[1], 15011LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ModelName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15013LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15013LU));
}

/* ManufacturerName - ns=1;i=15012 */

static UA_StatusCode function_robot_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15012LU),UA_NODEID_NUMERIC(ns[1], 15011LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ManufacturerName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15012LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15012LU));
}

/* TCPType - ns=1;i=15007 */

static UA_StatusCode function_robot_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TCPType");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Tool Center Point values for a robot");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[1], 15007LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[1], "TCPType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15007LU));
}

/* TCP - ns=1;i=15051 */

static UA_StatusCode function_robot_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TCP");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15051LU),UA_NODEID_NUMERIC(ns[1], 15055LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "TCP"),UA_NODEID_NUMERIC(ns[1], 15007LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15051LU));
}

/* Force - ns=1;i=15054 */

static UA_StatusCode function_robot_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15054LU),UA_NODEID_NUMERIC(ns[1], 15051LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Force"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15054LU));
}

/* Speed - ns=1;i=15053 */

static UA_StatusCode function_robot_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Speed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15053LU),UA_NODEID_NUMERIC(ns[1], 15051LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Speed"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15053LU));
}

/* Position - ns=1;i=15052 */

static UA_StatusCode function_robot_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15052LU),UA_NODEID_NUMERIC(ns[1], 15051LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15052LU));
}

/* Force - ns=1;i=15010 */

static UA_StatusCode function_robot_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15010LU),UA_NODEID_NUMERIC(ns[1], 15007LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Force"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15010LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15010LU));
}

/* Speed - ns=1;i=15009 */

static UA_StatusCode function_robot_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Speed");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15009LU),UA_NODEID_NUMERIC(ns[1], 15007LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Speed"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15009LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15009LU));
}

/* Position - ns=1;i=15008 */

static UA_StatusCode function_robot_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15008LU),UA_NODEID_NUMERIC(ns[1], 15007LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15008LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15008LU));
}

/* JointType - ns=1;i=15001 */

static UA_StatusCode function_robot_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointType");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Represents a single joint in a robot");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[1], "JointType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15001LU));
}

/* Wrist3 - ns=1;i=15044 */

static UA_StatusCode function_robot_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Wrist3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Wrist3"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15044LU));
}

/* Temperature - ns=1;i=15049 */

static UA_StatusCode function_robot_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15049LU),UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15049LU));
}

/* Current - ns=1;i=15048 */

static UA_StatusCode function_robot_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15048LU),UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15048LU));
}

/* Velocity - ns=1;i=15047 */

static UA_StatusCode function_robot_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15047LU),UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15047LU));
}

/* Position - ns=1;i=15046 */

static UA_StatusCode function_robot_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15046LU),UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15046LU));
}

/* JointName - ns=1;i=15045 */

static UA_StatusCode function_robot_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15045LU),UA_NODEID_NUMERIC(ns[1], 15044LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15045LU));
}

/* Wrist2 - ns=1;i=15038 */

static UA_StatusCode function_robot_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Wrist2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Wrist2"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15038LU));
}

/* Temperature - ns=1;i=15043 */

static UA_StatusCode function_robot_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15043LU),UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15043LU));
}

/* Current - ns=1;i=15042 */

static UA_StatusCode function_robot_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15042LU),UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15042LU));
}

/* Velocity - ns=1;i=15041 */

static UA_StatusCode function_robot_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15041LU),UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15041LU));
}

/* Position - ns=1;i=15040 */

static UA_StatusCode function_robot_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15040LU),UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15040LU));
}

/* JointName - ns=1;i=15039 */

static UA_StatusCode function_robot_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15039LU),UA_NODEID_NUMERIC(ns[1], 15038LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15039LU));
}

/* Wrist1 - ns=1;i=15032 */

static UA_StatusCode function_robot_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Wrist1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Wrist1"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15032LU));
}

/* Temperature - ns=1;i=15037 */

static UA_StatusCode function_robot_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15037LU),UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15037LU));
}

/* Current - ns=1;i=15036 */

static UA_StatusCode function_robot_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15036LU),UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15036LU));
}

/* Velocity - ns=1;i=15035 */

static UA_StatusCode function_robot_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15035LU),UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15035LU));
}

/* Position - ns=1;i=15034 */

static UA_StatusCode function_robot_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15034LU),UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15034LU));
}

/* JointName - ns=1;i=15033 */

static UA_StatusCode function_robot_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15033LU),UA_NODEID_NUMERIC(ns[1], 15032LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15033LU));
}

/* Elbow - ns=1;i=15026 */

static UA_StatusCode function_robot_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Elbow");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Elbow"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15026LU));
}

/* Temperature - ns=1;i=15031 */

static UA_StatusCode function_robot_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15031LU),UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15031LU));
}

/* Current - ns=1;i=15030 */

static UA_StatusCode function_robot_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15030LU),UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15030LU));
}

/* Velocity - ns=1;i=15029 */

static UA_StatusCode function_robot_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15029LU),UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15029LU));
}

/* Position - ns=1;i=15028 */

static UA_StatusCode function_robot_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15028LU),UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15028LU));
}

/* JointName - ns=1;i=15027 */

static UA_StatusCode function_robot_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15027LU),UA_NODEID_NUMERIC(ns[1], 15026LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15027LU));
}

/* Shoulder - ns=1;i=15020 */

static UA_StatusCode function_robot_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Shoulder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Shoulder"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15020LU));
}

/* Temperature - ns=1;i=15025 */

static UA_StatusCode function_robot_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15025LU),UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15025LU));
}

/* Current - ns=1;i=15024 */

static UA_StatusCode function_robot_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15024LU),UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15024LU));
}

/* Velocity - ns=1;i=15023 */

static UA_StatusCode function_robot_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15023LU),UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15023LU));
}

/* Position - ns=1;i=15022 */

static UA_StatusCode function_robot_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15022LU),UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15022LU));
}

/* JointName - ns=1;i=15021 */

static UA_StatusCode function_robot_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15021LU),UA_NODEID_NUMERIC(ns[1], 15020LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15021LU));
}

/* Base - ns=1;i=15014 */

static UA_StatusCode function_robot_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Base");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[1], 15050LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Base"),UA_NODEID_NUMERIC(ns[1], 15001LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15014LU));
}

/* Temperature - ns=1;i=15019 */

static UA_StatusCode function_robot_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15019LU),UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15019LU));
}

/* Current - ns=1;i=15018 */

static UA_StatusCode function_robot_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15018LU),UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15018LU));
}

/* Velocity - ns=1;i=15017 */

static UA_StatusCode function_robot_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15017LU),UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15017LU));
}

/* Position - ns=1;i=15016 */

static UA_StatusCode function_robot_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15016LU),UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15016LU));
}

/* JointName - ns=1;i=15015 */

static UA_StatusCode function_robot_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15015LU),UA_NODEID_NUMERIC(ns[1], 15014LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_robot_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15015LU));
}

/* Temperature - ns=1;i=15006 */

static UA_StatusCode function_robot_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15006LU),UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Temperature"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15006LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15006LU));
}

/* Current - ns=1;i=15005 */

static UA_StatusCode function_robot_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15005LU),UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Current"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15005LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15005LU));
}

/* Velocity - ns=1;i=15004 */

static UA_StatusCode function_robot_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15004LU),UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Velocity"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15004LU));
}

/* Position - ns=1;i=15003 */

static UA_StatusCode function_robot_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15003LU),UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Position"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15003LU));
}

/* JointName - ns=1;i=15002 */

static UA_StatusCode function_robot_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 15002LU),UA_NODEID_NUMERIC(ns[1], 15001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "JointName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_robot_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 15002LU));
}

UA_StatusCode robot(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "https://myindustry40.com/UA/robot/");

/* Load custom datatype definitions into the server */
retVal |= function_robot_0_begin(server, ns);
retVal |= function_robot_1_begin(server, ns);
retVal |= function_robot_2_begin(server, ns);
retVal |= function_robot_3_begin(server, ns);
retVal |= function_robot_4_begin(server, ns);
retVal |= function_robot_5_begin(server, ns);
retVal |= function_robot_6_begin(server, ns);
retVal |= function_robot_7_begin(server, ns);
retVal |= function_robot_8_begin(server, ns);
retVal |= function_robot_9_begin(server, ns);
retVal |= function_robot_10_begin(server, ns);
retVal |= function_robot_11_begin(server, ns);
retVal |= function_robot_12_begin(server, ns);
retVal |= function_robot_13_begin(server, ns);
retVal |= function_robot_14_begin(server, ns);
retVal |= function_robot_15_begin(server, ns);
retVal |= function_robot_16_begin(server, ns);
retVal |= function_robot_17_begin(server, ns);
retVal |= function_robot_18_begin(server, ns);
retVal |= function_robot_19_begin(server, ns);
retVal |= function_robot_20_begin(server, ns);
retVal |= function_robot_21_begin(server, ns);
retVal |= function_robot_22_begin(server, ns);
retVal |= function_robot_23_begin(server, ns);
retVal |= function_robot_24_begin(server, ns);
retVal |= function_robot_25_begin(server, ns);
retVal |= function_robot_26_begin(server, ns);
retVal |= function_robot_27_begin(server, ns);
retVal |= function_robot_28_begin(server, ns);
retVal |= function_robot_29_begin(server, ns);
retVal |= function_robot_30_begin(server, ns);
retVal |= function_robot_31_begin(server, ns);
retVal |= function_robot_32_begin(server, ns);
retVal |= function_robot_33_begin(server, ns);
retVal |= function_robot_34_begin(server, ns);
retVal |= function_robot_35_begin(server, ns);
retVal |= function_robot_36_begin(server, ns);
retVal |= function_robot_37_begin(server, ns);
retVal |= function_robot_38_begin(server, ns);
retVal |= function_robot_39_begin(server, ns);
retVal |= function_robot_40_begin(server, ns);
retVal |= function_robot_41_begin(server, ns);
retVal |= function_robot_42_begin(server, ns);
retVal |= function_robot_43_begin(server, ns);
retVal |= function_robot_44_begin(server, ns);
retVal |= function_robot_45_begin(server, ns);
retVal |= function_robot_46_begin(server, ns);
retVal |= function_robot_47_begin(server, ns);
retVal |= function_robot_48_begin(server, ns);
retVal |= function_robot_49_begin(server, ns);
retVal |= function_robot_50_begin(server, ns);
retVal |= function_robot_51_begin(server, ns);
retVal |= function_robot_52_begin(server, ns);
retVal |= function_robot_53_begin(server, ns);
retVal |= function_robot_54_begin(server, ns);
retVal |= function_robot_55_begin(server, ns);
retVal |= function_robot_56_begin(server, ns);
retVal |= function_robot_56_finish(server, ns);
retVal |= function_robot_55_finish(server, ns);
retVal |= function_robot_54_finish(server, ns);
retVal |= function_robot_53_finish(server, ns);
retVal |= function_robot_52_finish(server, ns);
retVal |= function_robot_51_finish(server, ns);
retVal |= function_robot_50_finish(server, ns);
retVal |= function_robot_49_finish(server, ns);
retVal |= function_robot_48_finish(server, ns);
retVal |= function_robot_47_finish(server, ns);
retVal |= function_robot_46_finish(server, ns);
retVal |= function_robot_45_finish(server, ns);
retVal |= function_robot_44_finish(server, ns);
retVal |= function_robot_43_finish(server, ns);
retVal |= function_robot_42_finish(server, ns);
retVal |= function_robot_41_finish(server, ns);
retVal |= function_robot_40_finish(server, ns);
retVal |= function_robot_39_finish(server, ns);
retVal |= function_robot_38_finish(server, ns);
retVal |= function_robot_37_finish(server, ns);
retVal |= function_robot_36_finish(server, ns);
retVal |= function_robot_35_finish(server, ns);
retVal |= function_robot_34_finish(server, ns);
retVal |= function_robot_33_finish(server, ns);
retVal |= function_robot_32_finish(server, ns);
retVal |= function_robot_31_finish(server, ns);
retVal |= function_robot_30_finish(server, ns);
retVal |= function_robot_29_finish(server, ns);
retVal |= function_robot_28_finish(server, ns);
retVal |= function_robot_27_finish(server, ns);
retVal |= function_robot_26_finish(server, ns);
retVal |= function_robot_25_finish(server, ns);
retVal |= function_robot_24_finish(server, ns);
retVal |= function_robot_23_finish(server, ns);
retVal |= function_robot_22_finish(server, ns);
retVal |= function_robot_21_finish(server, ns);
retVal |= function_robot_20_finish(server, ns);
retVal |= function_robot_19_finish(server, ns);
retVal |= function_robot_18_finish(server, ns);
retVal |= function_robot_17_finish(server, ns);
retVal |= function_robot_16_finish(server, ns);
retVal |= function_robot_15_finish(server, ns);
retVal |= function_robot_14_finish(server, ns);
retVal |= function_robot_13_finish(server, ns);
retVal |= function_robot_12_finish(server, ns);
retVal |= function_robot_11_finish(server, ns);
retVal |= function_robot_10_finish(server, ns);
retVal |= function_robot_9_finish(server, ns);
retVal |= function_robot_8_finish(server, ns);
retVal |= function_robot_7_finish(server, ns);
retVal |= function_robot_6_finish(server, ns);
retVal |= function_robot_5_finish(server, ns);
retVal |= function_robot_4_finish(server, ns);
retVal |= function_robot_3_finish(server, ns);
retVal |= function_robot_2_finish(server, ns);
retVal |= function_robot_1_finish(server, ns);
retVal |= function_robot_0_finish(server, ns);
return retVal;
}
