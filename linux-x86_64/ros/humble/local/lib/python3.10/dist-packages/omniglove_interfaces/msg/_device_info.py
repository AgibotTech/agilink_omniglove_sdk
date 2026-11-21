# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/DeviceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceInfo(type):
    """Metaclass of message 'DeviceInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAND_UNKNOWN': 0,
        'HAND_LEFT': 1,
        'HAND_RIGHT': 2,
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
                'omniglove_interfaces.msg.DeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAND_UNKNOWN': cls.__constants['HAND_UNKNOWN'],
            'HAND_LEFT': cls.__constants['HAND_LEFT'],
            'HAND_RIGHT': cls.__constants['HAND_RIGHT'],
        }

    @property
    def HAND_UNKNOWN(self):
        """Message constant 'HAND_UNKNOWN'."""
        return Metaclass_DeviceInfo.__constants['HAND_UNKNOWN']

    @property
    def HAND_LEFT(self):
        """Message constant 'HAND_LEFT'."""
        return Metaclass_DeviceInfo.__constants['HAND_LEFT']

    @property
    def HAND_RIGHT(self):
        """Message constant 'HAND_RIGHT'."""
        return Metaclass_DeviceInfo.__constants['HAND_RIGHT']


class DeviceInfo(metaclass=Metaclass_DeviceInfo):
    """
    Message class 'DeviceInfo'.

    Constants:
      HAND_UNKNOWN
      HAND_LEFT
      HAND_RIGHT
    """

    __slots__ = [
        '_uid',
        '_product_key',
        '_opaque_token',
        '_hand',
        '_nominal_source_rate_hz',
        '_topic_namespace',
    ]

    _fields_and_field_types = {
        'uid': 'uint64',
        'product_key': 'string',
        'opaque_token': 'string',
        'hand': 'uint8',
        'nominal_source_rate_hz': 'uint32',
        'topic_namespace': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uid = kwargs.get('uid', int())
        self.product_key = kwargs.get('product_key', str())
        self.opaque_token = kwargs.get('opaque_token', str())
        self.hand = kwargs.get('hand', int())
        self.nominal_source_rate_hz = kwargs.get('nominal_source_rate_hz', int())
        self.topic_namespace = kwargs.get('topic_namespace', str())

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
        if self.uid != other.uid:
            return False
        if self.product_key != other.product_key:
            return False
        if self.opaque_token != other.opaque_token:
            return False
        if self.hand != other.hand:
            return False
        if self.nominal_source_rate_hz != other.nominal_source_rate_hz:
            return False
        if self.topic_namespace != other.topic_namespace:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uid(self):
        """Message field 'uid'."""
        return self._uid

    @uid.setter
    def uid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uid' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uid = value

    @builtins.property
    def product_key(self):
        """Message field 'product_key'."""
        return self._product_key

    @product_key.setter
    def product_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'product_key' field must be of type 'str'"
        self._product_key = value

    @builtins.property
    def opaque_token(self):
        """Message field 'opaque_token'."""
        return self._opaque_token

    @opaque_token.setter
    def opaque_token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'opaque_token' field must be of type 'str'"
        self._opaque_token = value

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
    def topic_namespace(self):
        """Message field 'topic_namespace'."""
        return self._topic_namespace

    @topic_namespace.setter
    def topic_namespace(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic_namespace' field must be of type 'str'"
        self._topic_namespace = value
