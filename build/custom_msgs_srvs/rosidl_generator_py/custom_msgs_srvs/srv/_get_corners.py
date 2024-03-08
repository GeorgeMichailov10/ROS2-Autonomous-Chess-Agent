# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs_srvs:srv/GetCorners.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCorners_Request(type):
    """Metaclass of message 'GetCorners_Request'."""

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
                'custom_msgs_srvs.srv.GetCorners_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_corners__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_corners__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_corners__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_corners__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_corners__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCorners_Request(metaclass=Metaclass_GetCorners_Request):
    """Message class 'GetCorners_Request'."""

    __slots__ = [
        '_board',
    ]

    _fields_and_field_types = {
        'board': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.board = kwargs.get('board', Image())

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
        if self.board != other.board:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def board(self):
        """Message field 'board'."""
        return self._board

    @board.setter
    def board(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'board' field must be a sub message of type 'Image'"
        self._board = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCorners_Response(type):
    """Metaclass of message 'GetCorners_Response'."""

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
                'custom_msgs_srvs.srv.GetCorners_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_corners__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_corners__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_corners__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_corners__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_corners__response

            from custom_msgs_srvs.msg import CornersList
            if CornersList.__class__._TYPE_SUPPORT is None:
                CornersList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCorners_Response(metaclass=Metaclass_GetCorners_Response):
    """Message class 'GetCorners_Response'."""

    __slots__ = [
        '_success',
        '_corners_list',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'corners_list': 'custom_msgs_srvs/CornersList',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs_srvs', 'msg'], 'CornersList'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from custom_msgs_srvs.msg import CornersList
        self.corners_list = kwargs.get('corners_list', CornersList())

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
        if self.corners_list != other.corners_list:
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
    def corners_list(self):
        """Message field 'corners_list'."""
        return self._corners_list

    @corners_list.setter
    def corners_list(self, value):
        if __debug__:
            from custom_msgs_srvs.msg import CornersList
            assert \
                isinstance(value, CornersList), \
                "The 'corners_list' field must be a sub message of type 'CornersList'"
        self._corners_list = value


class Metaclass_GetCorners(type):
    """Metaclass of service 'GetCorners'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs_srvs.srv.GetCorners')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_corners

            from custom_msgs_srvs.srv import _get_corners
            if _get_corners.Metaclass_GetCorners_Request._TYPE_SUPPORT is None:
                _get_corners.Metaclass_GetCorners_Request.__import_type_support__()
            if _get_corners.Metaclass_GetCorners_Response._TYPE_SUPPORT is None:
                _get_corners.Metaclass_GetCorners_Response.__import_type_support__()


class GetCorners(metaclass=Metaclass_GetCorners):
    from custom_msgs_srvs.srv._get_corners import GetCorners_Request as Request
    from custom_msgs_srvs.srv._get_corners import GetCorners_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
