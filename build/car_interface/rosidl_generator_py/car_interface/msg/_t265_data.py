# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interface:msg/T265Data.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_T265Data(type):
    """Metaclass of message 'T265Data'."""

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
            module = import_type_support('car_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'car_interface.msg.T265Data')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__t265_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__t265_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__t265_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__t265_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__t265_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class T265Data(metaclass=Metaclass_T265Data):
    """Message class 'T265Data'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_pos_z',
        '_confidence',
        '_pos_orient_x',
        '_pos_orient_y',
        '_pos_orient_z',
        '_pos_orient_w',
        '_vel_linear_x',
        '_vel_linear_y',
        '_vel_linear_z',
        '_vel_angular_x',
        '_vel_angular_y',
        '_vel_angular_z',
        '_acc_linear_x',
        '_acc_linear_y',
        '_acc_linear_z',
        '_acc_angular_x',
        '_acc_angular_y',
        '_acc_angular_z',
    ]

    _fields_and_field_types = {
        'pos_x': 'double',
        'pos_y': 'double',
        'pos_z': 'double',
        'confidence': 'int64',
        'pos_orient_x': 'double',
        'pos_orient_y': 'double',
        'pos_orient_z': 'double',
        'pos_orient_w': 'double',
        'vel_linear_x': 'double',
        'vel_linear_y': 'double',
        'vel_linear_z': 'double',
        'vel_angular_x': 'double',
        'vel_angular_y': 'double',
        'vel_angular_z': 'double',
        'acc_linear_x': 'double',
        'acc_linear_y': 'double',
        'acc_linear_z': 'double',
        'acc_angular_x': 'double',
        'acc_angular_y': 'double',
        'acc_angular_z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
        self.pos_z = kwargs.get('pos_z', float())
        self.confidence = kwargs.get('confidence', int())
        self.pos_orient_x = kwargs.get('pos_orient_x', float())
        self.pos_orient_y = kwargs.get('pos_orient_y', float())
        self.pos_orient_z = kwargs.get('pos_orient_z', float())
        self.pos_orient_w = kwargs.get('pos_orient_w', float())
        self.vel_linear_x = kwargs.get('vel_linear_x', float())
        self.vel_linear_y = kwargs.get('vel_linear_y', float())
        self.vel_linear_z = kwargs.get('vel_linear_z', float())
        self.vel_angular_x = kwargs.get('vel_angular_x', float())
        self.vel_angular_y = kwargs.get('vel_angular_y', float())
        self.vel_angular_z = kwargs.get('vel_angular_z', float())
        self.acc_linear_x = kwargs.get('acc_linear_x', float())
        self.acc_linear_y = kwargs.get('acc_linear_y', float())
        self.acc_linear_z = kwargs.get('acc_linear_z', float())
        self.acc_angular_x = kwargs.get('acc_angular_x', float())
        self.acc_angular_y = kwargs.get('acc_angular_y', float())
        self.acc_angular_z = kwargs.get('acc_angular_z', float())

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
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.pos_z != other.pos_z:
            return False
        if self.confidence != other.confidence:
            return False
        if self.pos_orient_x != other.pos_orient_x:
            return False
        if self.pos_orient_y != other.pos_orient_y:
            return False
        if self.pos_orient_z != other.pos_orient_z:
            return False
        if self.pos_orient_w != other.pos_orient_w:
            return False
        if self.vel_linear_x != other.vel_linear_x:
            return False
        if self.vel_linear_y != other.vel_linear_y:
            return False
        if self.vel_linear_z != other.vel_linear_z:
            return False
        if self.vel_angular_x != other.vel_angular_x:
            return False
        if self.vel_angular_y != other.vel_angular_y:
            return False
        if self.vel_angular_z != other.vel_angular_z:
            return False
        if self.acc_linear_x != other.acc_linear_x:
            return False
        if self.acc_linear_y != other.acc_linear_y:
            return False
        if self.acc_linear_z != other.acc_linear_z:
            return False
        if self.acc_angular_x != other.acc_angular_x:
            return False
        if self.acc_angular_y != other.acc_angular_y:
            return False
        if self.acc_angular_z != other.acc_angular_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_x = value

    @builtins.property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_y = value

    @builtins.property
    def pos_z(self):
        """Message field 'pos_z'."""
        return self._pos_z

    @pos_z.setter
    def pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_z = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'confidence' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._confidence = value

    @builtins.property
    def pos_orient_x(self):
        """Message field 'pos_orient_x'."""
        return self._pos_orient_x

    @pos_orient_x.setter
    def pos_orient_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_orient_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_orient_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_orient_x = value

    @builtins.property
    def pos_orient_y(self):
        """Message field 'pos_orient_y'."""
        return self._pos_orient_y

    @pos_orient_y.setter
    def pos_orient_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_orient_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_orient_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_orient_y = value

    @builtins.property
    def pos_orient_z(self):
        """Message field 'pos_orient_z'."""
        return self._pos_orient_z

    @pos_orient_z.setter
    def pos_orient_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_orient_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_orient_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_orient_z = value

    @builtins.property
    def pos_orient_w(self):
        """Message field 'pos_orient_w'."""
        return self._pos_orient_w

    @pos_orient_w.setter
    def pos_orient_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_orient_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_orient_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_orient_w = value

    @builtins.property
    def vel_linear_x(self):
        """Message field 'vel_linear_x'."""
        return self._vel_linear_x

    @vel_linear_x.setter
    def vel_linear_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_linear_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_linear_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_linear_x = value

    @builtins.property
    def vel_linear_y(self):
        """Message field 'vel_linear_y'."""
        return self._vel_linear_y

    @vel_linear_y.setter
    def vel_linear_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_linear_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_linear_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_linear_y = value

    @builtins.property
    def vel_linear_z(self):
        """Message field 'vel_linear_z'."""
        return self._vel_linear_z

    @vel_linear_z.setter
    def vel_linear_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_linear_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_linear_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_linear_z = value

    @builtins.property
    def vel_angular_x(self):
        """Message field 'vel_angular_x'."""
        return self._vel_angular_x

    @vel_angular_x.setter
    def vel_angular_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_angular_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_angular_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_angular_x = value

    @builtins.property
    def vel_angular_y(self):
        """Message field 'vel_angular_y'."""
        return self._vel_angular_y

    @vel_angular_y.setter
    def vel_angular_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_angular_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_angular_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_angular_y = value

    @builtins.property
    def vel_angular_z(self):
        """Message field 'vel_angular_z'."""
        return self._vel_angular_z

    @vel_angular_z.setter
    def vel_angular_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_angular_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_angular_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_angular_z = value

    @builtins.property
    def acc_linear_x(self):
        """Message field 'acc_linear_x'."""
        return self._acc_linear_x

    @acc_linear_x.setter
    def acc_linear_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_linear_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_linear_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_linear_x = value

    @builtins.property
    def acc_linear_y(self):
        """Message field 'acc_linear_y'."""
        return self._acc_linear_y

    @acc_linear_y.setter
    def acc_linear_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_linear_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_linear_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_linear_y = value

    @builtins.property
    def acc_linear_z(self):
        """Message field 'acc_linear_z'."""
        return self._acc_linear_z

    @acc_linear_z.setter
    def acc_linear_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_linear_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_linear_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_linear_z = value

    @builtins.property
    def acc_angular_x(self):
        """Message field 'acc_angular_x'."""
        return self._acc_angular_x

    @acc_angular_x.setter
    def acc_angular_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_angular_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_angular_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_angular_x = value

    @builtins.property
    def acc_angular_y(self):
        """Message field 'acc_angular_y'."""
        return self._acc_angular_y

    @acc_angular_y.setter
    def acc_angular_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_angular_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_angular_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_angular_y = value

    @builtins.property
    def acc_angular_z(self):
        """Message field 'acc_angular_z'."""
        return self._acc_angular_z

    @acc_angular_z.setter
    def acc_angular_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_angular_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_angular_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_angular_z = value
