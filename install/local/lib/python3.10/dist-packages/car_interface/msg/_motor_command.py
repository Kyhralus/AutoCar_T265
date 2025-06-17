# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interface:msg/MotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand(type):
    """Metaclass of message 'MotorCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_FORWARD': 1,
        'CMD_BACKWARD': 2,
        'CMD_STOP': 3,
        'CMD_TURN_LEFT': 4,
        'CMD_TURN_RIGHT': 5,
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
                'car_interface.msg.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_FORWARD': cls.__constants['CMD_FORWARD'],
            'CMD_BACKWARD': cls.__constants['CMD_BACKWARD'],
            'CMD_STOP': cls.__constants['CMD_STOP'],
            'CMD_TURN_LEFT': cls.__constants['CMD_TURN_LEFT'],
            'CMD_TURN_RIGHT': cls.__constants['CMD_TURN_RIGHT'],
        }

    @property
    def CMD_FORWARD(self):
        """Message constant 'CMD_FORWARD'."""
        return Metaclass_MotorCommand.__constants['CMD_FORWARD']

    @property
    def CMD_BACKWARD(self):
        """Message constant 'CMD_BACKWARD'."""
        return Metaclass_MotorCommand.__constants['CMD_BACKWARD']

    @property
    def CMD_STOP(self):
        """Message constant 'CMD_STOP'."""
        return Metaclass_MotorCommand.__constants['CMD_STOP']

    @property
    def CMD_TURN_LEFT(self):
        """Message constant 'CMD_TURN_LEFT'."""
        return Metaclass_MotorCommand.__constants['CMD_TURN_LEFT']

    @property
    def CMD_TURN_RIGHT(self):
        """Message constant 'CMD_TURN_RIGHT'."""
        return Metaclass_MotorCommand.__constants['CMD_TURN_RIGHT']


class MotorCommand(metaclass=Metaclass_MotorCommand):
    """
    Message class 'MotorCommand'.

    Constants:
      CMD_FORWARD
      CMD_BACKWARD
      CMD_STOP
      CMD_TURN_LEFT
      CMD_TURN_RIGHT
    """

    __slots__ = [
        '_command',
        '_speed',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
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
        if self.command != other.command:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value
