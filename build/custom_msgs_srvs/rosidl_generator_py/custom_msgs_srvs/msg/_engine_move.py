# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs_srvs:msg/EngineMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EngineMove(type):
    """Metaclass of message 'EngineMove'."""

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
            module = import_type_support('custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs_srvs.msg.EngineMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__engine_move
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__engine_move
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__engine_move
            cls._TYPE_SUPPORT = module.type_support_msg__msg__engine_move
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__engine_move

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EngineMove(metaclass=Metaclass_EngineMove):
    """Message class 'EngineMove'."""

    __slots__ = [
        '_move',
        '_castle',
    ]

    _fields_and_field_types = {
        'move': 'string',
        'castle': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move = kwargs.get('move', str())
        self.castle = kwargs.get('castle', bool())

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
        if self.move != other.move:
            return False
        if self.castle != other.castle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def move(self):
        """Message field 'move'."""
        return self._move

    @move.setter
    def move(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'move' field must be of type 'str'"
        self._move = value

    @property
    def castle(self):
        """Message field 'castle'."""
        return self._castle

    @castle.setter
    def castle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'castle' field must be of type 'bool'"
        self._castle = value
