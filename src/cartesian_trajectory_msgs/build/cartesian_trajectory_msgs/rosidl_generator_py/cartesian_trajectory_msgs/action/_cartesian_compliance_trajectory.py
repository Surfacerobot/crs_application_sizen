# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianComplianceTrajectory_Goal(type):
    """Metaclass of message 'CartesianComplianceTrajectory_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__goal

            from cartesian_trajectory_msgs.msg import CartesianTolerance
            if CartesianTolerance.__class__._TYPE_SUPPORT is None:
                CartesianTolerance.__class__.__import_type_support__()

            from cartesian_trajectory_msgs.msg import CartesianTrajectory
            if CartesianTrajectory.__class__._TYPE_SUPPORT is None:
                CartesianTrajectory.__class__.__import_type_support__()

            from geometry_msgs.msg import Wrench
            if Wrench.__class__._TYPE_SUPPORT is None:
                Wrench.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_Goal(metaclass=Metaclass_CartesianComplianceTrajectory_Goal):
    """Message class 'CartesianComplianceTrajectory_Goal'."""

    __slots__ = [
        '_trajectory',
        '_path_tolerance',
        '_goal_tolerance',
        '_force',
        '_speed',
    ]

    _fields_and_field_types = {
        'trajectory': 'cartesian_trajectory_msgs/CartesianTrajectory',
        'path_tolerance': 'cartesian_trajectory_msgs/CartesianTolerance',
        'goal_tolerance': 'cartesian_trajectory_msgs/CartesianTolerance',
        'force': 'geometry_msgs/Wrench',
        'speed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTolerance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTolerance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cartesian_trajectory_msgs.msg import CartesianTrajectory
        self.trajectory = kwargs.get('trajectory', CartesianTrajectory())
        from cartesian_trajectory_msgs.msg import CartesianTolerance
        self.path_tolerance = kwargs.get('path_tolerance', CartesianTolerance())
        from cartesian_trajectory_msgs.msg import CartesianTolerance
        self.goal_tolerance = kwargs.get('goal_tolerance', CartesianTolerance())
        from geometry_msgs.msg import Wrench
        self.force = kwargs.get('force', Wrench())
        self.speed = kwargs.get('speed', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.trajectory != other.trajectory:
            return False
        if self.path_tolerance != other.path_tolerance:
            return False
        if self.goal_tolerance != other.goal_tolerance:
            return False
        if self.force != other.force:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectory
            assert \
                isinstance(value, CartesianTrajectory), \
                "The 'trajectory' field must be a sub message of type 'CartesianTrajectory'"
        self._trajectory = value

    @property
    def path_tolerance(self):
        """Message field 'path_tolerance'."""
        return self._path_tolerance

    @path_tolerance.setter
    def path_tolerance(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTolerance
            assert \
                isinstance(value, CartesianTolerance), \
                "The 'path_tolerance' field must be a sub message of type 'CartesianTolerance'"
        self._path_tolerance = value

    @property
    def goal_tolerance(self):
        """Message field 'goal_tolerance'."""
        return self._goal_tolerance

    @goal_tolerance.setter
    def goal_tolerance(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTolerance
            assert \
                isinstance(value, CartesianTolerance), \
                "The 'goal_tolerance' field must be a sub message of type 'CartesianTolerance'"
        self._goal_tolerance = value

    @property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'force' field must be a sub message of type 'Wrench'"
        self._force = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_Result(type):
    """Metaclass of message 'CartesianComplianceTrajectory_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_Result(metaclass=Metaclass_CartesianComplianceTrajectory_Result):
    """Message class 'CartesianComplianceTrajectory_Result'."""

    __slots__ = [
        '_success',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.err_msg = kwargs.get('err_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.err_msg != other.err_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def err_msg(self):
        """Message field 'err_msg'."""
        return self._err_msg

    @err_msg.setter
    def err_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'err_msg' field must be of type 'str'"
        self._err_msg = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_Feedback(type):
    """Metaclass of message 'CartesianComplianceTrajectory_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__feedback

            from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
            if CartesianTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                CartesianTrajectoryPoint.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_Feedback(metaclass=Metaclass_CartesianComplianceTrajectory_Feedback):
    """Message class 'CartesianComplianceTrajectory_Feedback'."""

    __slots__ = [
        '_header',
        '_tcp_frame',
        '_desired',
        '_virtual_desired',
        '_actual',
        '_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tcp_frame': 'string',
        'desired': 'cartesian_trajectory_msgs/CartesianTrajectoryPoint',
        'virtual_desired': 'cartesian_trajectory_msgs/CartesianTrajectoryPoint',
        'actual': 'cartesian_trajectory_msgs/CartesianTrajectoryPoint',
        'error': 'cartesian_trajectory_msgs/CartesianTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tcp_frame = kwargs.get('tcp_frame', str())
        from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
        self.desired = kwargs.get('desired', CartesianTrajectoryPoint())
        from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
        self.virtual_desired = kwargs.get('virtual_desired', CartesianTrajectoryPoint())
        from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
        self.actual = kwargs.get('actual', CartesianTrajectoryPoint())
        from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
        self.error = kwargs.get('error', CartesianTrajectoryPoint())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.tcp_frame != other.tcp_frame:
            return False
        if self.desired != other.desired:
            return False
        if self.virtual_desired != other.virtual_desired:
            return False
        if self.actual != other.actual:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def tcp_frame(self):
        """Message field 'tcp_frame'."""
        return self._tcp_frame

    @tcp_frame.setter
    def tcp_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tcp_frame' field must be of type 'str'"
        self._tcp_frame = value

    @property
    def desired(self):
        """Message field 'desired'."""
        return self._desired

    @desired.setter
    def desired(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
            assert \
                isinstance(value, CartesianTrajectoryPoint), \
                "The 'desired' field must be a sub message of type 'CartesianTrajectoryPoint'"
        self._desired = value

    @property
    def virtual_desired(self):
        """Message field 'virtual_desired'."""
        return self._virtual_desired

    @virtual_desired.setter
    def virtual_desired(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
            assert \
                isinstance(value, CartesianTrajectoryPoint), \
                "The 'virtual_desired' field must be a sub message of type 'CartesianTrajectoryPoint'"
        self._virtual_desired = value

    @property
    def actual(self):
        """Message field 'actual'."""
        return self._actual

    @actual.setter
    def actual(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
            assert \
                isinstance(value, CartesianTrajectoryPoint), \
                "The 'actual' field must be a sub message of type 'CartesianTrajectoryPoint'"
        self._actual = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectoryPoint
            assert \
                isinstance(value, CartesianTrajectoryPoint), \
                "The 'error' field must be a sub message of type 'CartesianTrajectoryPoint'"
        self._error = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_SendGoal_Request(type):
    """Metaclass of message 'CartesianComplianceTrajectory_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__send_goal__request

            from cartesian_trajectory_msgs.action import CartesianComplianceTrajectory
            if CartesianComplianceTrajectory.Goal.__class__._TYPE_SUPPORT is None:
                CartesianComplianceTrajectory.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_SendGoal_Request(metaclass=Metaclass_CartesianComplianceTrajectory_SendGoal_Request):
    """Message class 'CartesianComplianceTrajectory_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'cartesian_trajectory_msgs/CartesianComplianceTrajectory_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'action'], 'CartesianComplianceTrajectory_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Goal
        self.goal = kwargs.get('goal', CartesianComplianceTrajectory_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Goal
            assert \
                isinstance(value, CartesianComplianceTrajectory_Goal), \
                "The 'goal' field must be a sub message of type 'CartesianComplianceTrajectory_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_SendGoal_Response(type):
    """Metaclass of message 'CartesianComplianceTrajectory_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_SendGoal_Response(metaclass=Metaclass_CartesianComplianceTrajectory_SendGoal_Response):
    """Message class 'CartesianComplianceTrajectory_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_CartesianComplianceTrajectory_SendGoal(type):
    """Metaclass of service 'CartesianComplianceTrajectory_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__cartesian_compliance_trajectory__send_goal

            from cartesian_trajectory_msgs.action import _cartesian_compliance_trajectory
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal_Request._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal_Request.__import_type_support__()
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal_Response._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal_Response.__import_type_support__()


class CartesianComplianceTrajectory_SendGoal(metaclass=Metaclass_CartesianComplianceTrajectory_SendGoal):
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_SendGoal_Request as Request
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_GetResult_Request(type):
    """Metaclass of message 'CartesianComplianceTrajectory_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_GetResult_Request(metaclass=Metaclass_CartesianComplianceTrajectory_GetResult_Request):
    """Message class 'CartesianComplianceTrajectory_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_GetResult_Response(type):
    """Metaclass of message 'CartesianComplianceTrajectory_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__get_result__response

            from cartesian_trajectory_msgs.action import CartesianComplianceTrajectory
            if CartesianComplianceTrajectory.Result.__class__._TYPE_SUPPORT is None:
                CartesianComplianceTrajectory.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_GetResult_Response(metaclass=Metaclass_CartesianComplianceTrajectory_GetResult_Response):
    """Message class 'CartesianComplianceTrajectory_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'cartesian_trajectory_msgs/CartesianComplianceTrajectory_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'action'], 'CartesianComplianceTrajectory_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Result
        self.result = kwargs.get('result', CartesianComplianceTrajectory_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Result
            assert \
                isinstance(value, CartesianComplianceTrajectory_Result), \
                "The 'result' field must be a sub message of type 'CartesianComplianceTrajectory_Result'"
        self._result = value


class Metaclass_CartesianComplianceTrajectory_GetResult(type):
    """Metaclass of service 'CartesianComplianceTrajectory_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__cartesian_compliance_trajectory__get_result

            from cartesian_trajectory_msgs.action import _cartesian_compliance_trajectory
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult_Request._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult_Request.__import_type_support__()
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult_Response._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult_Response.__import_type_support__()


class CartesianComplianceTrajectory_GetResult(metaclass=Metaclass_CartesianComplianceTrajectory_GetResult):
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_GetResult_Request as Request
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianComplianceTrajectory_FeedbackMessage(type):
    """Metaclass of message 'CartesianComplianceTrajectory_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__cartesian_compliance_trajectory__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__cartesian_compliance_trajectory__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__cartesian_compliance_trajectory__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__cartesian_compliance_trajectory__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__cartesian_compliance_trajectory__feedback_message

            from cartesian_trajectory_msgs.action import CartesianComplianceTrajectory
            if CartesianComplianceTrajectory.Feedback.__class__._TYPE_SUPPORT is None:
                CartesianComplianceTrajectory.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianComplianceTrajectory_FeedbackMessage(metaclass=Metaclass_CartesianComplianceTrajectory_FeedbackMessage):
    """Message class 'CartesianComplianceTrajectory_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'cartesian_trajectory_msgs/CartesianComplianceTrajectory_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'action'], 'CartesianComplianceTrajectory_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Feedback
        self.feedback = kwargs.get('feedback', CartesianComplianceTrajectory_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Feedback
            assert \
                isinstance(value, CartesianComplianceTrajectory_Feedback), \
                "The 'feedback' field must be a sub message of type 'CartesianComplianceTrajectory_Feedback'"
        self._feedback = value


class Metaclass_CartesianComplianceTrajectory(type):
    """Metaclass of action 'CartesianComplianceTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartesian_trajectory_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartesian_trajectory_msgs.action.CartesianComplianceTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__cartesian_compliance_trajectory

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from cartesian_trajectory_msgs.action import _cartesian_compliance_trajectory
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_SendGoal.__import_type_support__()
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_GetResult.__import_type_support__()
            if _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_FeedbackMessage._TYPE_SUPPORT is None:
                _cartesian_compliance_trajectory.Metaclass_CartesianComplianceTrajectory_FeedbackMessage.__import_type_support__()


class CartesianComplianceTrajectory(metaclass=Metaclass_CartesianComplianceTrajectory):

    # The goal message defined in the action definition.
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Goal as Goal
    # The result message defined in the action definition.
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Result as Result
    # The feedback message defined in the action definition.
    from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from cartesian_trajectory_msgs.action._cartesian_compliance_trajectory import CartesianComplianceTrajectory_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
