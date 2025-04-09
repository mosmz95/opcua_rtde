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
using System.Xml;
using System.Runtime.Serialization;
using Opc.Ua;

namespace robot
{
    #region JointState Class
    #if (!OPCUA_EXCLUDE_JointState)
    /// <summary>
    /// Stores an instance of the JointType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class JointState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public JointState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(robot.ObjectTypes.JointType, robot.Namespaces.robot, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AQAAACIAAABodHRwczovL215aW5kdXN0cnk0MC5jb20vVUEvcm9ib3Qv/////wRggAIBAAAAAQARAAAA" +
           "Sm9pbnRUeXBlSW5zdGFuY2UBAZk6AQGZOpk6AAD/////BQAAABVgiQoCAAAA//8JAAAASm9pbnROYW1l" +
           "AQGaOgAuAESaOgAAAAz/////AQH/////AAAAABVgiQoCAAAA//8IAAAAUG9zaXRpb24BAZs6AC8AP5s6" +
           "AAAAC/////8BAf////8AAAAAFWCJCgIAAAD//wgAAABWZWxvY2l0eQEBnDoALwA/nDoAAAAL/////wEB" +
           "/////wAAAAAVYIkKAgAAAP//BwAAAEN1cnJlbnQBAZ06AC8AP506AAAAC/////8BAf////8AAAAAFWCJ" +
           "CgIAAAD//wsAAABUZW1wZXJhdHVyZQEBnjoALwA/njoAAAAL/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> JointName
        {
            get
            {
                return m_jointName;
            }

            set
            {
                if (!Object.ReferenceEquals(m_jointName, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_jointName = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> Position
        {
            get
            {
                return m_position;
            }

            set
            {
                if (!Object.ReferenceEquals(m_position, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_position = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> Velocity
        {
            get
            {
                return m_velocity;
            }

            set
            {
                if (!Object.ReferenceEquals(m_velocity, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_velocity = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> Current
        {
            get
            {
                return m_current;
            }

            set
            {
                if (!Object.ReferenceEquals(m_current, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_current = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> Temperature
        {
            get
            {
                return m_temperature;
            }

            set
            {
                if (!Object.ReferenceEquals(m_temperature, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_temperature = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_jointName != null)
            {
                children.Add(m_jointName);
            }

            if (m_position != null)
            {
                children.Add(m_position);
            }

            if (m_velocity != null)
            {
                children.Add(m_velocity);
            }

            if (m_current != null)
            {
                children.Add(m_current);
            }

            if (m_temperature != null)
            {
                children.Add(m_temperature);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case .BrowseNames.JointName:
                {
                    if (createOrReplace)
                    {
                        if (JointName == null)
                        {
                            if (replacement == null)
                            {
                                JointName = new PropertyState<string>(this);
                            }
                            else
                            {
                                JointName = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = JointName;
                    break;
                }

                case .BrowseNames.Position:
                {
                    if (createOrReplace)
                    {
                        if (Position == null)
                        {
                            if (replacement == null)
                            {
                                Position = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                Position = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = Position;
                    break;
                }

                case .BrowseNames.Velocity:
                {
                    if (createOrReplace)
                    {
                        if (Velocity == null)
                        {
                            if (replacement == null)
                            {
                                Velocity = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                Velocity = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = Velocity;
                    break;
                }

                case .BrowseNames.Current:
                {
                    if (createOrReplace)
                    {
                        if (Current == null)
                        {
                            if (replacement == null)
                            {
                                Current = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                Current = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = Current;
                    break;
                }

                case .BrowseNames.Temperature:
                {
                    if (createOrReplace)
                    {
                        if (Temperature == null)
                        {
                            if (replacement == null)
                            {
                                Temperature = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                Temperature = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = Temperature;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private PropertyState<string> m_jointName;
        private BaseDataVariableState<double> m_position;
        private BaseDataVariableState<double> m_velocity;
        private BaseDataVariableState<double> m_current;
        private BaseDataVariableState<double> m_temperature;
        #endregion
    }
    #endif
    #endregion

    #region TCPState Class
    #if (!OPCUA_EXCLUDE_TCPState)
    /// <summary>
    /// Stores an instance of the TCPType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TCPState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TCPState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(robot.ObjectTypes.TCPType, robot.Namespaces.robot, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AQAAACIAAABodHRwczovL215aW5kdXN0cnk0MC5jb20vVUEvcm9ib3Qv/////wRggAIBAAAAAQAPAAAA" +
           "VENQVHlwZUluc3RhbmNlAQGfOgEBnzqfOgAA/////wMAAAAXYIkKAgAAAP//CAAAAFBvc2l0aW9uAQGg" +
           "OgAvAD+gOgAAAAsBAAAAAQAAAAYAAAABAf////8AAAAAF2CJCgIAAAD//wUAAABTcGVlZAEBoToALwA/" +
           "oToAAAALAQAAAAEAAAAGAAAAAQH/////AAAAABdgiQoCAAAA//8FAAAARm9yY2UBAaI6AC8AP6I6AAAA" +
           "CwEAAAABAAAABgAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<double[]> Position
        {
            get
            {
                return m_position;
            }

            set
            {
                if (!Object.ReferenceEquals(m_position, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_position = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double[]> Speed
        {
            get
            {
                return m_speed;
            }

            set
            {
                if (!Object.ReferenceEquals(m_speed, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_speed = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double[]> Force
        {
            get
            {
                return m_force;
            }

            set
            {
                if (!Object.ReferenceEquals(m_force, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_force = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_position != null)
            {
                children.Add(m_position);
            }

            if (m_speed != null)
            {
                children.Add(m_speed);
            }

            if (m_force != null)
            {
                children.Add(m_force);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case .BrowseNames.Position:
                {
                    if (createOrReplace)
                    {
                        if (Position == null)
                        {
                            if (replacement == null)
                            {
                                Position = new BaseDataVariableState<double[]>(this);
                            }
                            else
                            {
                                Position = (BaseDataVariableState<double[]>)replacement;
                            }
                        }
                    }

                    instance = Position;
                    break;
                }

                case .BrowseNames.Speed:
                {
                    if (createOrReplace)
                    {
                        if (Speed == null)
                        {
                            if (replacement == null)
                            {
                                Speed = new BaseDataVariableState<double[]>(this);
                            }
                            else
                            {
                                Speed = (BaseDataVariableState<double[]>)replacement;
                            }
                        }
                    }

                    instance = Speed;
                    break;
                }

                case .BrowseNames.Force:
                {
                    if (createOrReplace)
                    {
                        if (Force == null)
                        {
                            if (replacement == null)
                            {
                                Force = new BaseDataVariableState<double[]>(this);
                            }
                            else
                            {
                                Force = (BaseDataVariableState<double[]>)replacement;
                            }
                        }
                    }

                    instance = Force;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private BaseDataVariableState<double[]> m_position;
        private BaseDataVariableState<double[]> m_speed;
        private BaseDataVariableState<double[]> m_force;
        #endregion
    }
    #endif
    #endregion

    #region RobotState Class
    #if (!OPCUA_EXCLUDE_RobotState)
    /// <summary>
    /// Stores an instance of the RobotType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class RobotState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public RobotState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(robot.ObjectTypes.RobotType, robot.Namespaces.robot, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AQAAACIAAABodHRwczovL215aW5kdXN0cnk0MC5jb20vVUEvcm9ib3Qv/////wRggAIBAAAAAQARAAAA" +
           "Um9ib3RUeXBlSW5zdGFuY2UBAaM6AQGjOqM6AAD/////AgAAABVgiQoCAAAA//8QAAAATWFudWZhY3R1" +
           "cmVyTmFtZQEBpDoALgBEpDoAAAAM/////wEB/////wAAAAAVYIkKAgAAAP//CQAAAE1vZGVsTmFtZQEB" +
           "pToALgBEpToAAAAM/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> ManufacturerName
        {
            get
            {
                return m_manufacturerName;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturerName, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturerName = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ModelName
        {
            get
            {
                return m_modelName;
            }

            set
            {
                if (!Object.ReferenceEquals(m_modelName, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_modelName = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_manufacturerName != null)
            {
                children.Add(m_manufacturerName);
            }

            if (m_modelName != null)
            {
                children.Add(m_modelName);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case .BrowseNames.ManufacturerName:
                {
                    if (createOrReplace)
                    {
                        if (ManufacturerName == null)
                        {
                            if (replacement == null)
                            {
                                ManufacturerName = new PropertyState<string>(this);
                            }
                            else
                            {
                                ManufacturerName = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ManufacturerName;
                    break;
                }

                case .BrowseNames.ModelName:
                {
                    if (createOrReplace)
                    {
                        if (ModelName == null)
                        {
                            if (replacement == null)
                            {
                                ModelName = new PropertyState<string>(this);
                            }
                            else
                            {
                                ModelName = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ModelName;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private PropertyState<string> m_manufacturerName;
        private PropertyState<string> m_modelName;
        #endregion
    }
    #endif
    #endregion
}