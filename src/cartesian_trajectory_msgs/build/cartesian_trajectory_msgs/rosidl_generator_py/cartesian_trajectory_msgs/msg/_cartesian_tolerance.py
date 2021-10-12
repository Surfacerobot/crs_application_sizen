# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartesian_trajectory_msgs:msg/CartesianTolerance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianTolerance(type):
    """Metaclass of message 'CartesianTolerance'."""

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
                'cartesian_trajectory_msgs.msg.CartesianTolerance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cartesian_tolerance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cartesian_tolerance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cartesian_tolerance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cartesian_tolerance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cartesian_tolerance

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class CartesianTolerance(metaclass=Metaclass_CartesianTolerance):
    """Message class 'CartesianTolerance'."""

    __slots__ = [
        '_position_error',
        '_orientation_error',
        '_twist_error',
        '_wrench_error',
    ]

    _fields_and_field_types = {
        'position_error': 'geometry_msgs/Vector3',
        'orientation_error': 'geometry_msgs/Vector3',
        'twist_error': 'geometry_msgs/Twist',
        'wrench_error': 'geometry_msgs/Wrench',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.position_error = kwargs.get('position_error', Vector3())
        from geometry_msgs.msg import Vector3
        self.orientation_error = kwargs.get('orientation_error', Vector3())
        from geometry_msgs.msg import Twist
        self.twist_error = kwargs.get('twist_error', Twist())
        from geometry_msgs.msg import Wrench
        self.wrench_error = kwargs.get('wrench_error', Wrench())

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
        if self.position_error != other.position_error:
            return False
        if self.orientation_error != other.orientation_error:
            return False
        if self.twist_error != other.twist_error:
            return False
        if self.wrench_error != other.wrench_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position_error(self):
        """Message field 'position_error'."""
        return self._position_error

    @position_error.setter
    def position_error(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position_error' field must be a sub message of type 'Vector3'"
        self._position_error = value

    @property
    def orientation_error(self):
        """Message field 'orientation_error'."""
        return self._orientation_error

    @orientation_error.setter
    def orientation_error(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'orientation_error' field must be a sub message of type 'Vector3'"
        self._orientation_error = value

    @property
    def twist_error(self):
        """Message field 'twist_error'."""
        return self._twist_error

    @twist_error.setter
    def twist_error(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist_error' field must be a sub message of type 'Twist'"
        self._twist_error = value

    @property
    def wrench_error(self):
        """Message field 'wrench_error'."""
        return self._wrench_error

    @wrench_error.setter
    def wrench_error(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'wrench_error' field must be a sub message of type 'Wrench'"
        self._wrench_error = value
