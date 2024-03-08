# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs_srvs:msg/Bitmap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bitmap(type):
    """Metaclass of message 'Bitmap'."""

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
                'custom_msgs_srvs.msg.Bitmap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bitmap
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bitmap
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bitmap
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bitmap
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bitmap

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Bitmap(metaclass=Metaclass_Bitmap):
    """Message class 'Bitmap'."""

    __slots__ = [
        '_row1',
        '_row2',
        '_row3',
        '_row4',
        '_row5',
        '_row6',
        '_row7',
        '_row8',
    ]

    _fields_and_field_types = {
        'row1': 'string[8]',
        'row2': 'string[8]',
        'row3': 'string[8]',
        'row4': 'string[8]',
        'row5': 'string[8]',
        'row6': 'string[8]',
        'row7': 'string[8]',
        'row8': 'string[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.row1 = kwargs.get(
            'row1',
            [str() for x in range(8)]
        )
        self.row2 = kwargs.get(
            'row2',
            [str() for x in range(8)]
        )
        self.row3 = kwargs.get(
            'row3',
            [str() for x in range(8)]
        )
        self.row4 = kwargs.get(
            'row4',
            [str() for x in range(8)]
        )
        self.row5 = kwargs.get(
            'row5',
            [str() for x in range(8)]
        )
        self.row6 = kwargs.get(
            'row6',
            [str() for x in range(8)]
        )
        self.row7 = kwargs.get(
            'row7',
            [str() for x in range(8)]
        )
        self.row8 = kwargs.get(
            'row8',
            [str() for x in range(8)]
        )

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
        if self.row1 != other.row1:
            return False
        if self.row2 != other.row2:
            return False
        if self.row3 != other.row3:
            return False
        if self.row4 != other.row4:
            return False
        if self.row5 != other.row5:
            return False
        if self.row6 != other.row6:
            return False
        if self.row7 != other.row7:
            return False
        if self.row8 != other.row8:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def row1(self):
        """Message field 'row1'."""
        return self._row1

    @row1.setter
    def row1(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row1' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row1 = value

    @property
    def row2(self):
        """Message field 'row2'."""
        return self._row2

    @row2.setter
    def row2(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row2' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row2 = value

    @property
    def row3(self):
        """Message field 'row3'."""
        return self._row3

    @row3.setter
    def row3(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row3' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row3 = value

    @property
    def row4(self):
        """Message field 'row4'."""
        return self._row4

    @row4.setter
    def row4(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row4' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row4 = value

    @property
    def row5(self):
        """Message field 'row5'."""
        return self._row5

    @row5.setter
    def row5(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row5' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row5 = value

    @property
    def row6(self):
        """Message field 'row6'."""
        return self._row6

    @row6.setter
    def row6(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row6' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row6 = value

    @property
    def row7(self):
        """Message field 'row7'."""
        return self._row7

    @row7.setter
    def row7(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row7' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row7 = value

    @property
    def row8(self):
        """Message field 'row8'."""
        return self._row8

    @row8.setter
    def row8(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'row8' field must be a set or sequence with length 8 and each value of type 'str'"
        self._row8 = value
