# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/PostData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'unmapped_data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PostData(type):
    """Metaclass of message 'PostData'."""

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
                'omniglove_interfaces.msg.PostData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__post_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__post_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__post_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__post_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__post_data

            from omniglove_interfaces.msg import PostFinger
            if PostFinger.__class__._TYPE_SUPPORT is None:
                PostFinger.__class__.__import_type_support__()

            from omniglove_interfaces.msg import PostThumb
            if PostThumb.__class__._TYPE_SUPPORT is None:
                PostThumb.__class__.__import_type_support__()

            from omniglove_interfaces.msg import PostWrist
            if PostWrist.__class__._TYPE_SUPPORT is None:
                PostWrist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PostData(metaclass=Metaclass_PostData):
    """Message class 'PostData'."""

    __slots__ = [
        '_mapped',
        '_device_tick_ms',
        '_flags',
        '_reserved',
        '_frame_id',
        '_thumb',
        '_index',
        '_middle',
        '_ring',
        '_pinky',
        '_wrist',
        '_unmapped_data',
    ]

    _fields_and_field_types = {
        'mapped': 'boolean',
        'device_tick_ms': 'uint32',
        'flags': 'uint32',
        'reserved': 'uint8',
        'frame_id': 'uint32',
        'thumb': 'omniglove_interfaces/PostThumb',
        'index': 'omniglove_interfaces/PostFinger',
        'middle': 'omniglove_interfaces/PostFinger',
        'ring': 'omniglove_interfaces/PostFinger',
        'pinky': 'omniglove_interfaces/PostFinger',
        'wrist': 'omniglove_interfaces/PostWrist',
        'unmapped_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostThumb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostWrist'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mapped = kwargs.get('mapped', bool())
        self.device_tick_ms = kwargs.get('device_tick_ms', int())
        self.flags = kwargs.get('flags', int())
        self.reserved = kwargs.get('reserved', int())
        self.frame_id = kwargs.get('frame_id', int())
        from omniglove_interfaces.msg import PostThumb
        self.thumb = kwargs.get('thumb', PostThumb())
        from omniglove_interfaces.msg import PostFinger
        self.index = kwargs.get('index', PostFinger())
        from omniglove_interfaces.msg import PostFinger
        self.middle = kwargs.get('middle', PostFinger())
        from omniglove_interfaces.msg import PostFinger
        self.ring = kwargs.get('ring', PostFinger())
        from omniglove_interfaces.msg import PostFinger
        self.pinky = kwargs.get('pinky', PostFinger())
        from omniglove_interfaces.msg import PostWrist
        self.wrist = kwargs.get('wrist', PostWrist())
        self.unmapped_data = array.array('B', kwargs.get('unmapped_data', []))

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
        if self.mapped != other.mapped:
            return False
        if self.device_tick_ms != other.device_tick_ms:
            return False
        if self.flags != other.flags:
            return False
        if self.reserved != other.reserved:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.thumb != other.thumb:
            return False
        if self.index != other.index:
            return False
        if self.middle != other.middle:
            return False
        if self.ring != other.ring:
            return False
        if self.pinky != other.pinky:
            return False
        if self.wrist != other.wrist:
            return False
        if self.unmapped_data != other.unmapped_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mapped(self):
        """Message field 'mapped'."""
        return self._mapped

    @mapped.setter
    def mapped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mapped' field must be of type 'bool'"
        self._mapped = value

    @builtins.property
    def device_tick_ms(self):
        """Message field 'device_tick_ms'."""
        return self._device_tick_ms

    @device_tick_ms.setter
    def device_tick_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_tick_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_tick_ms' field must be an unsigned integer in [0, 4294967295]"
        self._device_tick_ms = value

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
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved' field must be an unsigned integer in [0, 255]"
        self._reserved = value

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'frame_id' field must be an unsigned integer in [0, 4294967295]"
        self._frame_id = value

    @builtins.property
    def thumb(self):
        """Message field 'thumb'."""
        return self._thumb

    @thumb.setter
    def thumb(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostThumb
            assert \
                isinstance(value, PostThumb), \
                "The 'thumb' field must be a sub message of type 'PostThumb'"
        self._thumb = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFinger
            assert \
                isinstance(value, PostFinger), \
                "The 'index' field must be a sub message of type 'PostFinger'"
        self._index = value

    @builtins.property
    def middle(self):
        """Message field 'middle'."""
        return self._middle

    @middle.setter
    def middle(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFinger
            assert \
                isinstance(value, PostFinger), \
                "The 'middle' field must be a sub message of type 'PostFinger'"
        self._middle = value

    @builtins.property
    def ring(self):
        """Message field 'ring'."""
        return self._ring

    @ring.setter
    def ring(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFinger
            assert \
                isinstance(value, PostFinger), \
                "The 'ring' field must be a sub message of type 'PostFinger'"
        self._ring = value

    @builtins.property
    def pinky(self):
        """Message field 'pinky'."""
        return self._pinky

    @pinky.setter
    def pinky(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFinger
            assert \
                isinstance(value, PostFinger), \
                "The 'pinky' field must be a sub message of type 'PostFinger'"
        self._pinky = value

    @builtins.property
    def wrist(self):
        """Message field 'wrist'."""
        return self._wrist

    @wrist.setter
    def wrist(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostWrist
            assert \
                isinstance(value, PostWrist), \
                "The 'wrist' field must be a sub message of type 'PostWrist'"
        self._wrist = value

    @builtins.property
    def unmapped_data(self):
        """Message field 'unmapped_data'."""
        return self._unmapped_data

    @unmapped_data.setter
    def unmapped_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'unmapped_data' array.array() must have the type code of 'B'"
            self._unmapped_data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'unmapped_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._unmapped_data = array.array('B', value)
