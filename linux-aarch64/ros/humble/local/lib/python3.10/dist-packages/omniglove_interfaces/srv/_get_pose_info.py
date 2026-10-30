# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:srv/GetPoseInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPoseInfo_Request(type):
    """Metaclass of message 'GetPoseInfo_Request'."""

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
                'omniglove_interfaces.srv.GetPoseInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pose_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pose_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pose_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pose_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pose_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPoseInfo_Request(metaclass=Metaclass_GetPoseInfo_Request):
    """Message class 'GetPoseInfo_Request'."""

    __slots__ = [
        '_device_uid',
        '_info_type',
        '_timeout_ms',
    ]

    _fields_and_field_types = {
        'device_uid': 'uint64',
        'info_type': 'uint8',
        'timeout_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_uid = kwargs.get('device_uid', int())
        self.info_type = kwargs.get('info_type', int())
        self.timeout_ms = kwargs.get('timeout_ms', int())

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
        if self.info_type != other.info_type:
            return False
        if self.timeout_ms != other.timeout_ms:
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
    def info_type(self):
        """Message field 'info_type'."""
        return self._info_type

    @info_type.setter
    def info_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'info_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'info_type' field must be an unsigned integer in [0, 255]"
        self._info_type = value

    @builtins.property
    def timeout_ms(self):
        """Message field 'timeout_ms'."""
        return self._timeout_ms

    @timeout_ms.setter
    def timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._timeout_ms = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPoseInfo_Response(type):
    """Metaclass of message 'GetPoseInfo_Response'."""

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
                'omniglove_interfaces.srv.GetPoseInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pose_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pose_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pose_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pose_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pose_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPoseInfo_Response(metaclass=Metaclass_GetPoseInfo_Response):
    """Message class 'GetPoseInfo_Response'."""

    __slots__ = [
        '_success',
        '_control_status',
        '_return_code',
        '_device_error_code',
        '_request_id',
        '_connection_generation',
        '_protocol_sequence',
        '_node_count',
        '_hand',
        '_nominal_source_rate_hz',
        '_calibration_state',
        '_max_distance_mm',
        '_capability_flags',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'control_status': 'uint32',
        'return_code': 'uint32',
        'device_error_code': 'uint32',
        'request_id': 'uint64',
        'connection_generation': 'uint64',
        'protocol_sequence': 'uint32',
        'node_count': 'uint32',
        'hand': 'uint8',
        'nominal_source_rate_hz': 'uint32',
        'calibration_state': 'uint32',
        'max_distance_mm': 'uint32',
        'capability_flags': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.control_status = kwargs.get('control_status', int())
        self.return_code = kwargs.get('return_code', int())
        self.device_error_code = kwargs.get('device_error_code', int())
        self.request_id = kwargs.get('request_id', int())
        self.connection_generation = kwargs.get('connection_generation', int())
        self.protocol_sequence = kwargs.get('protocol_sequence', int())
        self.node_count = kwargs.get('node_count', int())
        self.hand = kwargs.get('hand', int())
        self.nominal_source_rate_hz = kwargs.get('nominal_source_rate_hz', int())
        self.calibration_state = kwargs.get('calibration_state', int())
        self.max_distance_mm = kwargs.get('max_distance_mm', int())
        self.capability_flags = kwargs.get('capability_flags', int())
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
        if self.control_status != other.control_status:
            return False
        if self.return_code != other.return_code:
            return False
        if self.device_error_code != other.device_error_code:
            return False
        if self.request_id != other.request_id:
            return False
        if self.connection_generation != other.connection_generation:
            return False
        if self.protocol_sequence != other.protocol_sequence:
            return False
        if self.node_count != other.node_count:
            return False
        if self.hand != other.hand:
            return False
        if self.nominal_source_rate_hz != other.nominal_source_rate_hz:
            return False
        if self.calibration_state != other.calibration_state:
            return False
        if self.max_distance_mm != other.max_distance_mm:
            return False
        if self.capability_flags != other.capability_flags:
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
    def control_status(self):
        """Message field 'control_status'."""
        return self._control_status

    @control_status.setter
    def control_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'control_status' field must be an unsigned integer in [0, 4294967295]"
        self._control_status = value

    @builtins.property
    def return_code(self):
        """Message field 'return_code'."""
        return self._return_code

    @return_code.setter
    def return_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'return_code' field must be an unsigned integer in [0, 4294967295]"
        self._return_code = value

    @builtins.property
    def device_error_code(self):
        """Message field 'device_error_code'."""
        return self._device_error_code

    @device_error_code.setter
    def device_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_error_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_error_code' field must be an unsigned integer in [0, 4294967295]"
        self._device_error_code = value

    @builtins.property
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'request_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._request_id = value

    @builtins.property
    def connection_generation(self):
        """Message field 'connection_generation'."""
        return self._connection_generation

    @connection_generation.setter
    def connection_generation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'connection_generation' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'connection_generation' field must be an unsigned integer in [0, 18446744073709551615]"
        self._connection_generation = value

    @builtins.property
    def protocol_sequence(self):
        """Message field 'protocol_sequence'."""
        return self._protocol_sequence

    @protocol_sequence.setter
    def protocol_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol_sequence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'protocol_sequence' field must be an unsigned integer in [0, 4294967295]"
        self._protocol_sequence = value

    @builtins.property
    def node_count(self):
        """Message field 'node_count'."""
        return self._node_count

    @node_count.setter
    def node_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'node_count' field must be an unsigned integer in [0, 4294967295]"
        self._node_count = value

    @builtins.property
    def hand(self):
        """Message field 'hand'."""
        return self._hand

    @hand.setter
    def hand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hand' field must be an unsigned integer in [0, 255]"
        self._hand = value

    @builtins.property
    def nominal_source_rate_hz(self):
        """Message field 'nominal_source_rate_hz'."""
        return self._nominal_source_rate_hz

    @nominal_source_rate_hz.setter
    def nominal_source_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nominal_source_rate_hz' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nominal_source_rate_hz' field must be an unsigned integer in [0, 4294967295]"
        self._nominal_source_rate_hz = value

    @builtins.property
    def calibration_state(self):
        """Message field 'calibration_state'."""
        return self._calibration_state

    @calibration_state.setter
    def calibration_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'calibration_state' field must be an unsigned integer in [0, 4294967295]"
        self._calibration_state = value

    @builtins.property
    def max_distance_mm(self):
        """Message field 'max_distance_mm'."""
        return self._max_distance_mm

    @max_distance_mm.setter
    def max_distance_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_distance_mm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_distance_mm' field must be an unsigned integer in [0, 4294967295]"
        self._max_distance_mm = value

    @builtins.property
    def capability_flags(self):
        """Message field 'capability_flags'."""
        return self._capability_flags

    @capability_flags.setter
    def capability_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'capability_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'capability_flags' field must be an unsigned integer in [0, 4294967295]"
        self._capability_flags = value

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


class Metaclass_GetPoseInfo(type):
    """Metaclass of service 'GetPoseInfo'."""

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
                'omniglove_interfaces.srv.GetPoseInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_pose_info

            from omniglove_interfaces.srv import _get_pose_info
            if _get_pose_info.Metaclass_GetPoseInfo_Request._TYPE_SUPPORT is None:
                _get_pose_info.Metaclass_GetPoseInfo_Request.__import_type_support__()
            if _get_pose_info.Metaclass_GetPoseInfo_Response._TYPE_SUPPORT is None:
                _get_pose_info.Metaclass_GetPoseInfo_Response.__import_type_support__()


class GetPoseInfo(metaclass=Metaclass_GetPoseInfo):
    from omniglove_interfaces.srv._get_pose_info import GetPoseInfo_Request as Request
    from omniglove_interfaces.srv._get_pose_info import GetPoseInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
