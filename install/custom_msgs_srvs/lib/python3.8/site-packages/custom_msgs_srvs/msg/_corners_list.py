# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs_srvs:msg/CornersList.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'top_left_corner'
# Member 'top_right_corner'
# Member 'bottom_right_corner'
# Member 'bottom_left_corner'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CornersList(type):
    """Metaclass of message 'CornersList'."""

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
                'custom_msgs_srvs.msg.CornersList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__corners_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__corners_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__corners_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__corners_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__corners_list

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CornersList(metaclass=Metaclass_CornersList):
    """Message class 'CornersList'."""

    __slots__ = [
        '_top_left_corner',
        '_top_right_corner',
        '_bottom_right_corner',
        '_bottom_left_corner',
    ]

    _fields_and_field_types = {
        'top_left_corner': 'int32[2]',
        'top_right_corner': 'int32[2]',
        'bottom_right_corner': 'int32[2]',
        'bottom_left_corner': 'int32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'top_left_corner' not in kwargs:
            self.top_left_corner = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.top_left_corner = numpy.array(kwargs.get('top_left_corner'), dtype=numpy.int32)
            assert self.top_left_corner.shape == (2, )
        if 'top_right_corner' not in kwargs:
            self.top_right_corner = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.top_right_corner = numpy.array(kwargs.get('top_right_corner'), dtype=numpy.int32)
            assert self.top_right_corner.shape == (2, )
        if 'bottom_right_corner' not in kwargs:
            self.bottom_right_corner = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.bottom_right_corner = numpy.array(kwargs.get('bottom_right_corner'), dtype=numpy.int32)
            assert self.bottom_right_corner.shape == (2, )
        if 'bottom_left_corner' not in kwargs:
            self.bottom_left_corner = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.bottom_left_corner = numpy.array(kwargs.get('bottom_left_corner'), dtype=numpy.int32)
            assert self.bottom_left_corner.shape == (2, )

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
        if all(self.top_left_corner != other.top_left_corner):
            return False
        if all(self.top_right_corner != other.top_right_corner):
            return False
        if all(self.bottom_right_corner != other.bottom_right_corner):
            return False
        if all(self.bottom_left_corner != other.bottom_left_corner):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def top_left_corner(self):
        """Message field 'top_left_corner'."""
        return self._top_left_corner

    @top_left_corner.setter
    def top_left_corner(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'top_left_corner' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'top_left_corner' numpy.ndarray() must have a size of 2"
            self._top_left_corner = value
            return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'top_left_corner' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._top_left_corner = numpy.array(value, dtype=numpy.int32)

    @property
    def top_right_corner(self):
        """Message field 'top_right_corner'."""
        return self._top_right_corner

    @top_right_corner.setter
    def top_right_corner(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'top_right_corner' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'top_right_corner' numpy.ndarray() must have a size of 2"
            self._top_right_corner = value
            return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'top_right_corner' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._top_right_corner = numpy.array(value, dtype=numpy.int32)

    @property
    def bottom_right_corner(self):
        """Message field 'bottom_right_corner'."""
        return self._bottom_right_corner

    @bottom_right_corner.setter
    def bottom_right_corner(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'bottom_right_corner' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'bottom_right_corner' numpy.ndarray() must have a size of 2"
            self._bottom_right_corner = value
            return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bottom_right_corner' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bottom_right_corner = numpy.array(value, dtype=numpy.int32)

    @property
    def bottom_left_corner(self):
        """Message field 'bottom_left_corner'."""
        return self._bottom_left_corner

    @bottom_left_corner.setter
    def bottom_left_corner(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'bottom_left_corner' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'bottom_left_corner' numpy.ndarray() must have a size of 2"
            self._bottom_left_corner = value
            return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bottom_left_corner' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bottom_left_corner = numpy.array(value, dtype=numpy.int32)
