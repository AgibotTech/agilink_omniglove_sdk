# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:srv/GetStreamStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetStreamStatus_Request(type):
    """Metaclass of message 'GetStreamStatus_Request'."""

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
                'omniglove_interfaces.srv.GetStreamStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_stream_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_stream_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_stream_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_stream_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_stream_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetStreamStatus_Request(metaclass=Metaclass_GetStreamStatus_Request):
    """Message class 'GetStreamStatus_Request'."""

    __slots__ = [
        '_device_uid',
        '_stream_kind',
    ]

    _fields_and_field_types = {
        'device_uid': 'uint64',
        'stream_kind': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_uid = kwargs.get('device_uid', int())
        self.stream_kind = kwargs.get('stream_kind', int())

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetStreamStatus_Response(type):
    """Metaclass of message 'GetStreamStatus_Response'."""

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
                'omniglove_interfaces.srv.GetStreamStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_stream_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_stream_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_stream_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_stream_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_stream_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetStreamStatus_Response(metaclass=Metaclass_GetStreamStatus_Response):
    """Message class 'GetStreamStatus_Response'."""

    __slots__ = [
        '_success',
        '_stream_error',
        '_state',
        '_stream_mode',
        '_enabled',
        '_source_interval_ms',
        '_source_timeout_ms',
        '_callback_queue_capacity',
        '_pose_components',
        '_actual_source_rate_millihz',
        '_source_events',
        '_source_samples',
        '_source_no_data',
        '_source_timeouts',
        '_source_errors',
        '_callback_delivered',
        '_callback_dropped_full',
        '_callback_discontinuities',
        '_callback_queue_high_watermark',
        '_last_source_sequence',
        '_last_delivered_sequence',
        '_last_source_status',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'stream_error': 'uint32',
        'state': 'uint32',
        'stream_mode': 'uint32',
        'enabled': 'boolean',
        'source_interval_ms': 'uint32',
        'source_timeout_ms': 'uint32',
        'callback_queue_capacity': 'uint32',
        'pose_components': 'uint32',
        'actual_source_rate_millihz': 'uint64',
        'source_events': 'uint64',
        'source_samples': 'uint64',
        'source_no_data': 'uint64',
        'source_timeouts': 'uint64',
        'source_errors': 'uint64',
        'callback_delivered': 'uint64',
        'callback_dropped_full': 'uint64',
        'callback_discontinuities': 'uint64',
        'callback_queue_high_watermark': 'uint64',
        'last_source_sequence': 'uint64',
        'last_delivered_sequence': 'uint64',
        'last_source_status': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.stream_error = kwargs.get('stream_error', int())
        self.state = kwargs.get('state', int())
        self.stream_mode = kwargs.get('stream_mode', int())
        self.enabled = kwargs.get('enabled', bool())
        self.source_interval_ms = kwargs.get('source_interval_ms', int())
        self.source_timeout_ms = kwargs.get('source_timeout_ms', int())
        self.callback_queue_capacity = kwargs.get('callback_queue_capacity', int())
        self.pose_components = kwargs.get('pose_components', int())
        self.actual_source_rate_millihz = kwargs.get('actual_source_rate_millihz', int())
        self.source_events = kwargs.get('source_events', int())
        self.source_samples = kwargs.get('source_samples', int())
        self.source_no_data = kwargs.get('source_no_data', int())
        self.source_timeouts = kwargs.get('source_timeouts', int())
        self.source_errors = kwargs.get('source_errors', int())
        self.callback_delivered = kwargs.get('callback_delivered', int())
        self.callback_dropped_full = kwargs.get('callback_dropped_full', int())
        self.callback_discontinuities = kwargs.get('callback_discontinuities', int())
        self.callback_queue_high_watermark = kwargs.get('callback_queue_high_watermark', int())
        self.last_source_sequence = kwargs.get('last_source_sequence', int())
        self.last_delivered_sequence = kwargs.get('last_delivered_sequence', int())
        self.last_source_status = kwargs.get('last_source_status', int())
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
        if self.state != other.state:
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
        if self.actual_source_rate_millihz != other.actual_source_rate_millihz:
            return False
        if self.source_events != other.source_events:
            return False
        if self.source_samples != other.source_samples:
            return False
        if self.source_no_data != other.source_no_data:
            return False
        if self.source_timeouts != other.source_timeouts:
            return False
        if self.source_errors != other.source_errors:
            return False
        if self.callback_delivered != other.callback_delivered:
            return False
        if self.callback_dropped_full != other.callback_dropped_full:
            return False
        if self.callback_discontinuities != other.callback_discontinuities:
            return False
        if self.callback_queue_high_watermark != other.callback_queue_high_watermark:
            return False
        if self.last_source_sequence != other.last_source_sequence:
            return False
        if self.last_delivered_sequence != other.last_delivered_sequence:
            return False
        if self.last_source_status != other.last_source_status:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'state' field must be an unsigned integer in [0, 4294967295]"
        self._state = value

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
    def actual_source_rate_millihz(self):
        """Message field 'actual_source_rate_millihz'."""
        return self._actual_source_rate_millihz

    @actual_source_rate_millihz.setter
    def actual_source_rate_millihz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actual_source_rate_millihz' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'actual_source_rate_millihz' field must be an unsigned integer in [0, 18446744073709551615]"
        self._actual_source_rate_millihz = value

    @builtins.property
    def source_events(self):
        """Message field 'source_events'."""
        return self._source_events

    @source_events.setter
    def source_events(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_events' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_events' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_events = value

    @builtins.property
    def source_samples(self):
        """Message field 'source_samples'."""
        return self._source_samples

    @source_samples.setter
    def source_samples(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_samples' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_samples' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_samples = value

    @builtins.property
    def source_no_data(self):
        """Message field 'source_no_data'."""
        return self._source_no_data

    @source_no_data.setter
    def source_no_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_no_data' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_no_data' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_no_data = value

    @builtins.property
    def source_timeouts(self):
        """Message field 'source_timeouts'."""
        return self._source_timeouts

    @source_timeouts.setter
    def source_timeouts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_timeouts' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_timeouts' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_timeouts = value

    @builtins.property
    def source_errors(self):
        """Message field 'source_errors'."""
        return self._source_errors

    @source_errors.setter
    def source_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_errors' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_errors' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_errors = value

    @builtins.property
    def callback_delivered(self):
        """Message field 'callback_delivered'."""
        return self._callback_delivered

    @callback_delivered.setter
    def callback_delivered(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_delivered' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'callback_delivered' field must be an unsigned integer in [0, 18446744073709551615]"
        self._callback_delivered = value

    @builtins.property
    def callback_dropped_full(self):
        """Message field 'callback_dropped_full'."""
        return self._callback_dropped_full

    @callback_dropped_full.setter
    def callback_dropped_full(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_dropped_full' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'callback_dropped_full' field must be an unsigned integer in [0, 18446744073709551615]"
        self._callback_dropped_full = value

    @builtins.property
    def callback_discontinuities(self):
        """Message field 'callback_discontinuities'."""
        return self._callback_discontinuities

    @callback_discontinuities.setter
    def callback_discontinuities(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_discontinuities' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'callback_discontinuities' field must be an unsigned integer in [0, 18446744073709551615]"
        self._callback_discontinuities = value

    @builtins.property
    def callback_queue_high_watermark(self):
        """Message field 'callback_queue_high_watermark'."""
        return self._callback_queue_high_watermark

    @callback_queue_high_watermark.setter
    def callback_queue_high_watermark(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'callback_queue_high_watermark' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'callback_queue_high_watermark' field must be an unsigned integer in [0, 18446744073709551615]"
        self._callback_queue_high_watermark = value

    @builtins.property
    def last_source_sequence(self):
        """Message field 'last_source_sequence'."""
        return self._last_source_sequence

    @last_source_sequence.setter
    def last_source_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_source_sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_source_sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_source_sequence = value

    @builtins.property
    def last_delivered_sequence(self):
        """Message field 'last_delivered_sequence'."""
        return self._last_delivered_sequence

    @last_delivered_sequence.setter
    def last_delivered_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_delivered_sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_delivered_sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_delivered_sequence = value

    @builtins.property
    def last_source_status(self):
        """Message field 'last_source_status'."""
        return self._last_source_status

    @last_source_status.setter
    def last_source_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_source_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'last_source_status' field must be an unsigned integer in [0, 4294967295]"
        self._last_source_status = value

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


class Metaclass_GetStreamStatus(type):
    """Metaclass of service 'GetStreamStatus'."""

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
                'omniglove_interfaces.srv.GetStreamStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_stream_status

            from omniglove_interfaces.srv import _get_stream_status
            if _get_stream_status.Metaclass_GetStreamStatus_Request._TYPE_SUPPORT is None:
                _get_stream_status.Metaclass_GetStreamStatus_Request.__import_type_support__()
            if _get_stream_status.Metaclass_GetStreamStatus_Response._TYPE_SUPPORT is None:
                _get_stream_status.Metaclass_GetStreamStatus_Response.__import_type_support__()


class GetStreamStatus(metaclass=Metaclass_GetStreamStatus):
    from omniglove_interfaces.srv._get_stream_status import GetStreamStatus_Request as Request
    from omniglove_interfaces.srv._get_stream_status import GetStreamStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
