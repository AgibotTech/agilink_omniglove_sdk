# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:srv/SetStreamConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetStreamConfig_Request(type):
    """Metaclass of message 'SetStreamConfig_Request'."""

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
            module = import_type_support('omniglove_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'omniglove_interfaces.srv.SetStreamConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stream_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stream_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stream_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stream_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stream_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStreamConfig_Request(metaclass=Metaclass_SetStreamConfig_Request):
    """Message class 'SetStreamConfig_Request'."""

    __slots__ = [
        '_device_uid',
        '_stream_kind',
        '_stream_mode',
        '_enabled',
        '_source_interval_ms',
        '_source_timeout_ms',
        '_callback_queue_capacity',
        '_pose_components',
    ]

    _fields_and_field_types = {
        'device_uid': 'uint64',
        'stream_kind': 'uint8',
        'stream_mode': 'uint32',
        'enabled': 'boolean',
        'source_interval_ms': 'uint32',
        'source_timeout_ms': 'uint32',
        'callback_queue_capacity': 'uint32',
        'pose_components': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_uid = kwargs.get('device_uid', int())
        self.stream_kind = kwargs.get('stream_kind', int())
        self.stream_mode = kwargs.get('stream_mode', int())
        self.enabled = kwargs.get('enabled', bool())
        self.source_interval_ms = kwargs.get('source_interval_ms', int())
        self.source_timeout_ms = kwargs.get('source_timeout_ms', int())
        self.callback_queue_capacity = kwargs.get('callback_queue_capacity', int())
        self.pose_components = kwargs.get('pose_components', int())

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
        if self.device_uid != other.device_uid:
            return False
        if self.stream_kind != other.stream_kind:
            return False
        if self.stream_mode != other.stream_mode:
            return False
        if self.enabled != other.enabled:
            return False
        if self.source_interval_ms != other.source_interval_ms:
            return False
        if self.source_timeout_ms != other.source_timeout_ms:
            return False
        if self.callback_queue_capacity != other.callback_queue_capacity:
            return False
        if self.pose_components != other.pose_components:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def device_uid(self):
        """Message field 'device_uid'."""
        return self._device_uid

    @device_uid.setter
    def device_uid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_uid' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'device_uid' field must be an unsigned integer in [0, 18446744073709551615]"
        self._device_uid = value

    @builtins.property
    def stream_kind(self):
        """Message field 'stream_kind'."""
        return self._stream_kind

    @stream_kind.setter
    def stream_kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stream_kind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stream_kind' field must be an unsigned integer in [0, 255]"
        self._stream_kind = value

    @builtins.property
    def stream_mode(self):
        """Message field 'stream_mode'."""
        return self._stream_mode

    @stream_mode.setter
    def stream_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stream_mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stream_mode' field must be an unsigned integer in [0, 4294967295]"
        self._stream_mode = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def source_interval_ms(self):
        """Message field 'source_interval_ms'."""
        return self._source_interval_ms

    @source_interval_ms.setter
    def source_interval_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_interval_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_interval_ms' field must be an unsigned integer in [0, 4294967295]"
        self._source_interval_ms = value

    @builtins.property
    def source_timeout_ms(self):
        """Message field 'source_timeout_ms'."""
        return self._source_timeout_ms

    @source_timeout_ms.setter
    def source_timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._source_timeout_ms = value

    @builtins.property
    def callback_queue_capacity(self):
        """Message field 'callback_queue_capacity'."""
        return self._callback_queue_capacity

    @callback_queue_capacity.setter
    def callback_queue_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_queue_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'callback_queue_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._callback_queue_capacity = value

    @builtins.property
    def pose_components(self):
        """Message field 'pose_components'."""
        return self._pose_components

    @pose_components.setter
    def pose_components(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pose_components' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pose_components' field must be an unsigned integer in [0, 4294967295]"
        self._pose_components = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStreamConfig_Response(type):
    """Metaclass of message 'SetStreamConfig_Response'."""

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
            module = import_type_support('omniglove_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'omniglove_interfaces.srv.SetStreamConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stream_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stream_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stream_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stream_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stream_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStreamConfig_Response(metaclass=Metaclass_SetStreamConfig_Response):
    """Message class 'SetStreamConfig_Response'."""

    __slots__ = [
        '_success',
        '_stream_error',
        '_stream_mode',
        '_enabled',
        '_source_interval_ms',
        '_source_timeout_ms',
        '_callback_queue_capacity',
        '_pose_components',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'stream_error': 'uint32',
        'stream_mode': 'uint32',
        'enabled': 'boolean',
        'source_interval_ms': 'uint32',
        'source_timeout_ms': 'uint32',
        'callback_queue_capacity': 'uint32',
        'pose_components': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.stream_error = kwargs.get('stream_error', int())
        self.stream_mode = kwargs.get('stream_mode', int())
        self.enabled = kwargs.get('enabled', bool())
        self.source_interval_ms = kwargs.get('source_interval_ms', int())
        self.source_timeout_ms = kwargs.get('source_timeout_ms', int())
        self.callback_queue_capacity = kwargs.get('callback_queue_capacity', int())
        self.pose_components = kwargs.get('pose_components', int())
        self.message = kwargs.get('message', str())

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
        if self.stream_error != other.stream_error:
            return False
        if self.stream_mode != other.stream_mode:
            return False
        if self.enabled != other.enabled:
            return False
        if self.source_interval_ms != other.source_interval_ms:
            return False
        if self.source_timeout_ms != other.source_timeout_ms:
            return False
        if self.callback_queue_capacity != other.callback_queue_capacity:
            return False
        if self.pose_components != other.pose_components:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def stream_error(self):
        """Message field 'stream_error'."""
        return self._stream_error

    @stream_error.setter
    def stream_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stream_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stream_error' field must be an unsigned integer in [0, 4294967295]"
        self._stream_error = value

    @builtins.property
    def stream_mode(self):
        """Message field 'stream_mode'."""
        return self._stream_mode

    @stream_mode.setter
    def stream_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stream_mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stream_mode' field must be an unsigned integer in [0, 4294967295]"
        self._stream_mode = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def source_interval_ms(self):
        """Message field 'source_interval_ms'."""
        return self._source_interval_ms

    @source_interval_ms.setter
    def source_interval_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_interval_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_interval_ms' field must be an unsigned integer in [0, 4294967295]"
        self._source_interval_ms = value

    @builtins.property
    def source_timeout_ms(self):
        """Message field 'source_timeout_ms'."""
        return self._source_timeout_ms

    @source_timeout_ms.setter
    def source_timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._source_timeout_ms = value

    @builtins.property
    def callback_queue_capacity(self):
        """Message field 'callback_queue_capacity'."""
        return self._callback_queue_capacity

    @callback_queue_capacity.setter
    def callback_queue_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_queue_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'callback_queue_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._callback_queue_capacity = value

    @builtins.property
    def pose_components(self):
        """Message field 'pose_components'."""
        return self._pose_components

    @pose_components.setter
    def pose_components(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pose_components' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pose_components' field must be an unsigned integer in [0, 4294967295]"
        self._pose_components = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetStreamConfig(type):
    """Metaclass of service 'SetStreamConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('omniglove_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'omniglove_interfaces.srv.SetStreamConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_stream_config

            from omniglove_interfaces.srv import _set_stream_config
            if _set_stream_config.Metaclass_SetStreamConfig_Request._TYPE_SUPPORT is None:
                _set_stream_config.Metaclass_SetStreamConfig_Request.__import_type_support__()
            if _set_stream_config.Metaclass_SetStreamConfig_Response._TYPE_SUPPORT is None:
                _set_stream_config.Metaclass_SetStreamConfig_Response.__import_type_support__()


class SetStreamConfig(metaclass=Metaclass_SetStreamConfig):
    from omniglove_interfaces.srv._set_stream_config import SetStreamConfig_Request as Request
    from omniglove_interfaces.srv._set_stream_config import SetStreamConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
