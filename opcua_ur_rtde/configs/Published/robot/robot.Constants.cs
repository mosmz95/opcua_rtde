/* ========================================================================
 * Copyright (c) 2005-2019 The OPC Foundation, Inc. All rights reserved.
 *
 * OPC Foundation MIT License 1.00
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * The complete license agreement can be found here:
 * http://opcfoundation.org/License/MIT/1.00/
 * ======================================================================*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.Xml;
using System.Runtime.Serialization;
using Opc.Ua;

namespace robot
{
    #region Object Identifiers
    /// <summary>
    /// A class that declares constants for all Objects in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Objects
    {
        /// <summary>
        /// The identifier for the Base Object.
        /// </summary>
        public const uint Base = 15014;

        /// <summary>
        /// The identifier for the Shoulder Object.
        /// </summary>
        public const uint Shoulder = 15020;

        /// <summary>
        /// The identifier for the Elbow Object.
        /// </summary>
        public const uint Elbow = 15026;

        /// <summary>
        /// The identifier for the Wrist1 Object.
        /// </summary>
        public const uint Wrist1 = 15032;

        /// <summary>
        /// The identifier for the Wrist2 Object.
        /// </summary>
        public const uint Wrist2 = 15038;

        /// <summary>
        /// The identifier for the Wrist3 Object.
        /// </summary>
        public const uint Wrist3 = 15044;

        /// <summary>
        /// The identifier for the JointsSet Object.
        /// </summary>
        public const uint JointsSet = 15050;

        /// <summary>
        /// The identifier for the TCP Object.
        /// </summary>
        public const uint TCP = 15051;

        /// <summary>
        /// The identifier for the UR5e Object.
        /// </summary>
        public const uint UR5e = 15055;
    }
    #endregion

    #region ObjectType Identifiers
    /// <summary>
    /// A class that declares constants for all ObjectTypes in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class ObjectTypes
    {
        /// <summary>
        /// The identifier for the JointType ObjectType.
        /// </summary>
        public const uint JointType = 15001;

        /// <summary>
        /// The identifier for the TCPType ObjectType.
        /// </summary>
        public const uint TCPType = 15007;

        /// <summary>
        /// The identifier for the RobotType ObjectType.
        /// </summary>
        public const uint RobotType = 15011;
    }
    #endregion

    #region Variable Identifiers
    /// <summary>
    /// A class that declares constants for all Variables in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Variables
    {
        /// <summary>
        /// The identifier for the JointType_JointName Variable.
        /// </summary>
        public const uint JointType_JointName = 15002;

        /// <summary>
        /// The identifier for the JointType_Position Variable.
        /// </summary>
        public const uint JointType_Position = 15003;

        /// <summary>
        /// The identifier for the JointType_Velocity Variable.
        /// </summary>
        public const uint JointType_Velocity = 15004;

        /// <summary>
        /// The identifier for the JointType_Current Variable.
        /// </summary>
        public const uint JointType_Current = 15005;

        /// <summary>
        /// The identifier for the JointType_Temperature Variable.
        /// </summary>
        public const uint JointType_Temperature = 15006;

        /// <summary>
        /// The identifier for the TCPType_Position Variable.
        /// </summary>
        public const uint TCPType_Position = 15008;

        /// <summary>
        /// The identifier for the TCPType_Speed Variable.
        /// </summary>
        public const uint TCPType_Speed = 15009;

        /// <summary>
        /// The identifier for the TCPType_Force Variable.
        /// </summary>
        public const uint TCPType_Force = 15010;

        /// <summary>
        /// The identifier for the RobotType_ManufacturerName Variable.
        /// </summary>
        public const uint RobotType_ManufacturerName = 15012;

        /// <summary>
        /// The identifier for the RobotType_ModelName Variable.
        /// </summary>
        public const uint RobotType_ModelName = 15013;

        /// <summary>
        /// The identifier for the Base_JointName Variable.
        /// </summary>
        public const uint Base_JointName = 15015;

        /// <summary>
        /// The identifier for the Base_Position Variable.
        /// </summary>
        public const uint Base_Position = 15016;

        /// <summary>
        /// The identifier for the Base_Velocity Variable.
        /// </summary>
        public const uint Base_Velocity = 15017;

        /// <summary>
        /// The identifier for the Base_Current Variable.
        /// </summary>
        public const uint Base_Current = 15018;

        /// <summary>
        /// The identifier for the Base_Temperature Variable.
        /// </summary>
        public const uint Base_Temperature = 15019;

        /// <summary>
        /// The identifier for the Shoulder_JointName Variable.
        /// </summary>
        public const uint Shoulder_JointName = 15021;

        /// <summary>
        /// The identifier for the Shoulder_Position Variable.
        /// </summary>
        public const uint Shoulder_Position = 15022;

        /// <summary>
        /// The identifier for the Shoulder_Velocity Variable.
        /// </summary>
        public const uint Shoulder_Velocity = 15023;

        /// <summary>
        /// The identifier for the Shoulder_Current Variable.
        /// </summary>
        public const uint Shoulder_Current = 15024;

        /// <summary>
        /// The identifier for the Shoulder_Temperature Variable.
        /// </summary>
        public const uint Shoulder_Temperature = 15025;

        /// <summary>
        /// The identifier for the Elbow_JointName Variable.
        /// </summary>
        public const uint Elbow_JointName = 15027;

        /// <summary>
        /// The identifier for the Elbow_Position Variable.
        /// </summary>
        public const uint Elbow_Position = 15028;

        /// <summary>
        /// The identifier for the Elbow_Velocity Variable.
        /// </summary>
        public const uint Elbow_Velocity = 15029;

        /// <summary>
        /// The identifier for the Elbow_Current Variable.
        /// </summary>
        public const uint Elbow_Current = 15030;

        /// <summary>
        /// The identifier for the Elbow_Temperature Variable.
        /// </summary>
        public const uint Elbow_Temperature = 15031;

        /// <summary>
        /// The identifier for the Wrist1_JointName Variable.
        /// </summary>
        public const uint Wrist1_JointName = 15033;

        /// <summary>
        /// The identifier for the Wrist1_Position Variable.
        /// </summary>
        public const uint Wrist1_Position = 15034;

        /// <summary>
        /// The identifier for the Wrist1_Velocity Variable.
        /// </summary>
        public const uint Wrist1_Velocity = 15035;

        /// <summary>
        /// The identifier for the Wrist1_Current Variable.
        /// </summary>
        public const uint Wrist1_Current = 15036;

        /// <summary>
        /// The identifier for the Wrist1_Temperature Variable.
        /// </summary>
        public const uint Wrist1_Temperature = 15037;

        /// <summary>
        /// The identifier for the Wrist2_JointName Variable.
        /// </summary>
        public const uint Wrist2_JointName = 15039;

        /// <summary>
        /// The identifier for the Wrist2_Position Variable.
        /// </summary>
        public const uint Wrist2_Position = 15040;

        /// <summary>
        /// The identifier for the Wrist2_Velocity Variable.
        /// </summary>
        public const uint Wrist2_Velocity = 15041;

        /// <summary>
        /// The identifier for the Wrist2_Current Variable.
        /// </summary>
        public const uint Wrist2_Current = 15042;

        /// <summary>
        /// The identifier for the Wrist2_Temperature Variable.
        /// </summary>
        public const uint Wrist2_Temperature = 15043;

        /// <summary>
        /// The identifier for the Wrist3_JointName Variable.
        /// </summary>
        public const uint Wrist3_JointName = 15045;

        /// <summary>
        /// The identifier for the Wrist3_Position Variable.
        /// </summary>
        public const uint Wrist3_Position = 15046;

        /// <summary>
        /// The identifier for the Wrist3_Velocity Variable.
        /// </summary>
        public const uint Wrist3_Velocity = 15047;

        /// <summary>
        /// The identifier for the Wrist3_Current Variable.
        /// </summary>
        public const uint Wrist3_Current = 15048;

        /// <summary>
        /// The identifier for the Wrist3_Temperature Variable.
        /// </summary>
        public const uint Wrist3_Temperature = 15049;

        /// <summary>
        /// The identifier for the TCP_Position Variable.
        /// </summary>
        public const uint TCP_Position = 15052;

        /// <summary>
        /// The identifier for the TCP_Speed Variable.
        /// </summary>
        public const uint TCP_Speed = 15053;

        /// <summary>
        /// The identifier for the TCP_Force Variable.
        /// </summary>
        public const uint TCP_Force = 15054;

        /// <summary>
        /// The identifier for the UR5e_ManufacturerName Variable.
        /// </summary>
        public const uint UR5e_ManufacturerName = 15056;

        /// <summary>
        /// The identifier for the UR5e_ModelName Variable.
        /// </summary>
        public const uint UR5e_ModelName = 15057;
    }
    #endregion

    #region Object Node Identifiers
    /// <summary>
    /// A class that declares constants for all Objects in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class ObjectIds
    {
        /// <summary>
        /// The identifier for the Base Object.
        /// </summary>
        public static readonly ExpandedNodeId Base = new ExpandedNodeId(robot.Objects.Base, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder Object.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder = new ExpandedNodeId(robot.Objects.Shoulder, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow Object.
        /// </summary>
        public static readonly ExpandedNodeId Elbow = new ExpandedNodeId(robot.Objects.Elbow, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1 Object.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1 = new ExpandedNodeId(robot.Objects.Wrist1, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2 Object.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2 = new ExpandedNodeId(robot.Objects.Wrist2, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3 Object.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3 = new ExpandedNodeId(robot.Objects.Wrist3, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the JointsSet Object.
        /// </summary>
        public static readonly ExpandedNodeId JointsSet = new ExpandedNodeId(robot.Objects.JointsSet, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCP Object.
        /// </summary>
        public static readonly ExpandedNodeId TCP = new ExpandedNodeId(robot.Objects.TCP, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the UR5e Object.
        /// </summary>
        public static readonly ExpandedNodeId UR5e = new ExpandedNodeId(robot.Objects.UR5e, robot.Namespaces.robot);
    }
    #endregion

    #region ObjectType Node Identifiers
    /// <summary>
    /// A class that declares constants for all ObjectTypes in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class ObjectTypeIds
    {
        /// <summary>
        /// The identifier for the JointType ObjectType.
        /// </summary>
        public static readonly ExpandedNodeId JointType = new ExpandedNodeId(robot.ObjectTypes.JointType, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCPType ObjectType.
        /// </summary>
        public static readonly ExpandedNodeId TCPType = new ExpandedNodeId(robot.ObjectTypes.TCPType, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the RobotType ObjectType.
        /// </summary>
        public static readonly ExpandedNodeId RobotType = new ExpandedNodeId(robot.ObjectTypes.RobotType, robot.Namespaces.robot);
    }
    #endregion

    #region Variable Node Identifiers
    /// <summary>
    /// A class that declares constants for all Variables in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class VariableIds
    {
        /// <summary>
        /// The identifier for the JointType_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId JointType_JointName = new ExpandedNodeId(robot.Variables.JointType_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the JointType_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId JointType_Position = new ExpandedNodeId(robot.Variables.JointType_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the JointType_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId JointType_Velocity = new ExpandedNodeId(robot.Variables.JointType_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the JointType_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId JointType_Current = new ExpandedNodeId(robot.Variables.JointType_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the JointType_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId JointType_Temperature = new ExpandedNodeId(robot.Variables.JointType_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCPType_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCPType_Position = new ExpandedNodeId(robot.Variables.TCPType_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCPType_Speed Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCPType_Speed = new ExpandedNodeId(robot.Variables.TCPType_Speed, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCPType_Force Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCPType_Force = new ExpandedNodeId(robot.Variables.TCPType_Force, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the RobotType_ManufacturerName Variable.
        /// </summary>
        public static readonly ExpandedNodeId RobotType_ManufacturerName = new ExpandedNodeId(robot.Variables.RobotType_ManufacturerName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the RobotType_ModelName Variable.
        /// </summary>
        public static readonly ExpandedNodeId RobotType_ModelName = new ExpandedNodeId(robot.Variables.RobotType_ModelName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Base_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Base_JointName = new ExpandedNodeId(robot.Variables.Base_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Base_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Base_Position = new ExpandedNodeId(robot.Variables.Base_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Base_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Base_Velocity = new ExpandedNodeId(robot.Variables.Base_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Base_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Base_Current = new ExpandedNodeId(robot.Variables.Base_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Base_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Base_Temperature = new ExpandedNodeId(robot.Variables.Base_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder_JointName = new ExpandedNodeId(robot.Variables.Shoulder_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder_Position = new ExpandedNodeId(robot.Variables.Shoulder_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder_Velocity = new ExpandedNodeId(robot.Variables.Shoulder_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder_Current = new ExpandedNodeId(robot.Variables.Shoulder_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Shoulder_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Shoulder_Temperature = new ExpandedNodeId(robot.Variables.Shoulder_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Elbow_JointName = new ExpandedNodeId(robot.Variables.Elbow_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Elbow_Position = new ExpandedNodeId(robot.Variables.Elbow_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Elbow_Velocity = new ExpandedNodeId(robot.Variables.Elbow_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Elbow_Current = new ExpandedNodeId(robot.Variables.Elbow_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Elbow_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Elbow_Temperature = new ExpandedNodeId(robot.Variables.Elbow_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1_JointName = new ExpandedNodeId(robot.Variables.Wrist1_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1_Position = new ExpandedNodeId(robot.Variables.Wrist1_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1_Velocity = new ExpandedNodeId(robot.Variables.Wrist1_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1_Current = new ExpandedNodeId(robot.Variables.Wrist1_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist1_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist1_Temperature = new ExpandedNodeId(robot.Variables.Wrist1_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2_JointName = new ExpandedNodeId(robot.Variables.Wrist2_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2_Position = new ExpandedNodeId(robot.Variables.Wrist2_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2_Velocity = new ExpandedNodeId(robot.Variables.Wrist2_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2_Current = new ExpandedNodeId(robot.Variables.Wrist2_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist2_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist2_Temperature = new ExpandedNodeId(robot.Variables.Wrist2_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3_JointName Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3_JointName = new ExpandedNodeId(robot.Variables.Wrist3_JointName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3_Position = new ExpandedNodeId(robot.Variables.Wrist3_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3_Velocity Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3_Velocity = new ExpandedNodeId(robot.Variables.Wrist3_Velocity, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3_Current Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3_Current = new ExpandedNodeId(robot.Variables.Wrist3_Current, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the Wrist3_Temperature Variable.
        /// </summary>
        public static readonly ExpandedNodeId Wrist3_Temperature = new ExpandedNodeId(robot.Variables.Wrist3_Temperature, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCP_Position Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCP_Position = new ExpandedNodeId(robot.Variables.TCP_Position, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCP_Speed Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCP_Speed = new ExpandedNodeId(robot.Variables.TCP_Speed, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the TCP_Force Variable.
        /// </summary>
        public static readonly ExpandedNodeId TCP_Force = new ExpandedNodeId(robot.Variables.TCP_Force, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the UR5e_ManufacturerName Variable.
        /// </summary>
        public static readonly ExpandedNodeId UR5e_ManufacturerName = new ExpandedNodeId(robot.Variables.UR5e_ManufacturerName, robot.Namespaces.robot);

        /// <summary>
        /// The identifier for the UR5e_ModelName Variable.
        /// </summary>
        public static readonly ExpandedNodeId UR5e_ModelName = new ExpandedNodeId(robot.Variables.UR5e_ModelName, robot.Namespaces.robot);
    }
    #endregion

    #region BrowseName Declarations
    /// <summary>
    /// Declares all of the BrowseNames used in the Model Design.
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class BrowseNames
    {
        /// <summary>
        /// The BrowseName for the Base component.
        /// </summary>
        public const string Base = "Base";

        /// <summary>
        /// The BrowseName for the Current component.
        /// </summary>
        public const string Current = "Current";

        /// <summary>
        /// The BrowseName for the Elbow component.
        /// </summary>
        public const string Elbow = "Elbow";

        /// <summary>
        /// The BrowseName for the Force component.
        /// </summary>
        public const string Force = "Force";

        /// <summary>
        /// The BrowseName for the JointName component.
        /// </summary>
        public const string JointName = "JointName";

        /// <summary>
        /// The BrowseName for the JointsSet component.
        /// </summary>
        public const string JointsSet = "JointsSet";

        /// <summary>
        /// The BrowseName for the JointType component.
        /// </summary>
        public const string JointType = "JointType";

        /// <summary>
        /// The BrowseName for the ManufacturerName component.
        /// </summary>
        public const string ManufacturerName = "ManufacturerName";

        /// <summary>
        /// The BrowseName for the ModelName component.
        /// </summary>
        public const string ModelName = "ModelName";

        /// <summary>
        /// The BrowseName for the Position component.
        /// </summary>
        public const string Position = "Position";

        /// <summary>
        /// The BrowseName for the RobotType component.
        /// </summary>
        public const string RobotType = "RobotType";

        /// <summary>
        /// The BrowseName for the Shoulder component.
        /// </summary>
        public const string Shoulder = "Shoulder";

        /// <summary>
        /// The BrowseName for the Speed component.
        /// </summary>
        public const string Speed = "Speed";

        /// <summary>
        /// The BrowseName for the TCP component.
        /// </summary>
        public const string TCP = "TCP";

        /// <summary>
        /// The BrowseName for the TCPType component.
        /// </summary>
        public const string TCPType = "TCPType";

        /// <summary>
        /// The BrowseName for the Temperature component.
        /// </summary>
        public const string Temperature = "Temperature";

        /// <summary>
        /// The BrowseName for the UR5e component.
        /// </summary>
        public const string UR5e = "UR5e";

        /// <summary>
        /// The BrowseName for the Velocity component.
        /// </summary>
        public const string Velocity = "Velocity";

        /// <summary>
        /// The BrowseName for the Wrist1 component.
        /// </summary>
        public const string Wrist1 = "Wrist1";

        /// <summary>
        /// The BrowseName for the Wrist2 component.
        /// </summary>
        public const string Wrist2 = "Wrist2";

        /// <summary>
        /// The BrowseName for the Wrist3 component.
        /// </summary>
        public const string Wrist3 = "Wrist3";
    }
    #endregion

    #region Namespace Declarations
    /// <summary>
    /// Defines constants for all namespaces referenced by the model design.
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Namespaces
    {
        /// <summary>
        /// The URI for the robot namespace (.NET code namespace is 'robot').
        /// </summary>
        public const string robot = "https://myindustry40.com/UA/robot/";

        /// <summary>
        /// The URI for the robotXsd namespace (.NET code namespace is 'robot').
        /// </summary>
        public const string robotXsd = "https://myindustry40.com/UA/robot/Types.xsd";

        /// <summary>
        /// The URI for the OpcUa namespace (.NET code namespace is 'Opc.Ua').
        /// </summary>
        public const string OpcUa = "http://opcfoundation.org/UA/";

        /// <summary>
        /// The URI for the OpcUaXsd namespace (.NET code namespace is 'Opc.Ua').
        /// </summary>
        public const string OpcUaXsd = "http://opcfoundation.org/UA/2008/02/Types.xsd";
    }
    #endregion
}