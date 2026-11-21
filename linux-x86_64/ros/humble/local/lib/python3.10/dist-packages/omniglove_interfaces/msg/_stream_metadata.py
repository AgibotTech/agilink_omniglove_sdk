# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/StreamMetadata.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StreamMetadata(type):
    """Metaclass of message 'StreamMetadata'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAND_UNKNOWN': 0,
        'HAND_LEFT': 1,
        'HAND_RIGHT': 2,
        'SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH': 1,
        'DEVICE_SEQUENCE_VALID': 2,
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
                'omniglove_interfaces.msg.StreamMetadata')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stream_metadata
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stream_metadata
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stream_metadata
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stream_metadata
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stream_metadata

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAND_UNKNOWN': cls.__constants['HAND_UNKNOWN'],
            'HAND_LEFT': cls.__constants['HAND_LEFT'],
            'HAND_RIGHT': cls.__constants['HAND_RIGHT'],
            'SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH': cls.__constants['SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH'],
            'DEVICE_SEQUENCE_VALID': cls.__constants['DEVICE_SEQUENCE_VALID'],
        }

    @property
    def HAND_UNKNOWN(self):
        """Message constant 'HAND_UNKNOWN'."""
        return Metaclass_StreamMetadata.__constants['HAND_UNKNOWN']

    @property
    def HAND_LEFT(self):
        """Message constant 'HAND_LEFT'."""
        return Metaclass_StreamMetadata.__constants['HAND_LEFT']

    @property
    def HAND_RIGHT(self):
        """Message constant 'HAND_RIGHT'."""
        return Metaclass_StreamMetadata.__constants['HAND_RIGHT']

    @property
    def SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH(self):
        """Message constant 'SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH'."""
        return Metaclass_StreamMetadata.__constants['SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH']

    @property
    def DEVICE_SEQUENCE_VALID(self):
        """Message constant 'DEVICE_SEQUENCE_VALID'."""
        return Metaclass_StreamMetadata.__constants['DEVICE_SEQUENCE_VALID']


class StreamMetadata(metaclass=Metaclass_StreamMetadata):
    """
    Message class 'StreamMetadata'.

    Constants:
      HAND_UNKNOWN
      HAND_LEFT
      HAND_RIGHT
      SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH
      DEVICE_SEQUENCE_VALID
    """

    __slots__ = [
        '_header',
        '_hand',
        '_flags',
        '_layout_version',
        '_device_sequence',
        '_device_uid',
        '_source_device_id',
        '_connection_generation',
        '_source_sequence',
        '_sample_monotonic_ns',
        '_gap_count',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hand': 'uint8',
        'flags': 'uint32',
        'layout_version': 'uint32',
        'device_sequence': 'uint32',
        'device_uid': 'uint64',
        'source_device_id': 'uint64',
        'connection_generation': 'uint64',
        'source_sequence': 'uint64',
        'sample_monotonic_ns': 'uint64',
        'gap_count': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hand = kwargs.get('hand', int())
        self.flags = kwargs.get('flags', int())
        self.layout_version = kwargs.get('layout_version', int())
        self.device_sequence = kwargs.get('device_sequence', int())
        self.device_uid = kwargs.get('device_uid', int())
        self.source_device_id = kwargs.get('source_device_id', int())
        self.connection_generation = kwargs.get('connection_generation', int())
        self.source_sequence = kwargs.get('source_sequence', int())
        self.sample_monotonic_ns = kwargs.get('sample_monotonic_ns', int())
        self.gap_count = kwargs.get('gap_count', int())

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
        if self.header != other.header:
            return False
        if self.hand != other.hand:
            return False
        if self.flags != other.flags:
            return False
        if self.layout_version != other.layout_version:
            return False
        if self.device_sequence != other.device_sequence:
            return False
        if self.device_uid != other.device_uid:
            return False
        if self.source_device_id != other.source_device_id:
            return False
        if self.connection_generation != other.connection_generation:
            return False
        if self.source_sequence != other.source_sequence:
            return False
        if self.sample_monotonic_ns != other.sample_monotonic_ns:
            return False
        if self.gap_count != other.gap_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'flags' field must be an unsigned integer in [0, 4294967295]"
        self._flags = value

    @builtins.property
    def layout_version(self):
        """Message field 'layout_version'."""
        return self._layout_version

    @layout_version.setter
    def layout_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layout_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'layout_version' field must be an unsigned integer in [0, 4294967295]"
        self._layout_version = value

    @builtins.property
    def device_sequence(self):
        """Message field 'device_sequence'."""
        return self._device_sequence

    @device_sequence.setter
    def device_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_sequence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_sequence' field must be an unsigned integer in [0, 4294967295]"
        self._device_sequence = value

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
    def source_device_id(self):
        """Message field 'source_device_id'."""
        return self._source_device_id

    @source_device_id.setter
    def source_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_device_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_device_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_device_id = value

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
    def source_sequence(self):
        """Message field 'source_sequence'."""
        return self._source_sequence

    @source_sequence.setter
    def source_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'source_sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._source_sequence = value

    @builtins.property
    def sample_monotonic_ns(self):
        """Message field 'sample_monotonic_ns'."""
        return self._sample_monotonic_ns

    @sample_monotonic_ns.setter
    def sample_monotonic_ns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_monotonic_ns' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sample_monotonic_ns' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sample_monotonic_ns = value

    @builtins.property
    def gap_count(self):
        """Message field 'gap_count'."""
        return self._gap_count

    @gap_count.setter
    def gap_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gap_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gap_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gap_count = value
