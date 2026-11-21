# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/PoseData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'unmapped_data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseData(type):
    """Metaclass of message 'PoseData'."""

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
                'omniglove_interfaces.msg.PoseData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_data

            from omniglove_interfaces.msg import PoseImu
            if PoseImu.__class__._TYPE_SUPPORT is None:
                PoseImu.__class__.__import_type_support__()

            from omniglove_interfaces.msg import PoseNode
            if PoseNode.__class__._TYPE_SUPPORT is None:
                PoseNode.__class__.__import_type_support__()

            from omniglove_interfaces.msg import TactileData
            if TactileData.__class__._TYPE_SUPPORT is None:
                TactileData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseData(metaclass=Metaclass_PoseData):
    """Message class 'PoseData'."""

    __slots__ = [
        '_mapped',
        '_components',
        '_device_tick_ms',
        '_thumb',
        '_index',
        '_middle',
        '_ring',
        '_pinky',
        '_wrist',
        '_back_of_hand_imu',
        '_tactile',
        '_unmapped_data',
    ]

    _fields_and_field_types = {
        'mapped': 'boolean',
        'components': 'uint32',
        'device_tick_ms': 'uint32',
        'thumb': 'omniglove_interfaces/PoseNode',
        'index': 'omniglove_interfaces/PoseNode',
        'middle': 'omniglove_interfaces/PoseNode',
        'ring': 'omniglove_interfaces/PoseNode',
        'pinky': 'omniglove_interfaces/PoseNode',
        'wrist': 'omniglove_interfaces/PoseNode',
        'back_of_hand_imu': 'omniglove_interfaces/PoseImu',
        'tactile': 'omniglove_interfaces/TactileData',
        'unmapped_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseNode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PoseImu'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileData'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mapped = kwargs.get('mapped', bool())
        self.components = kwargs.get('components', int())
        self.device_tick_ms = kwargs.get('device_tick_ms', int())
        from omniglove_interfaces.msg import PoseNode
        self.thumb = kwargs.get('thumb', PoseNode())
        from omniglove_interfaces.msg import PoseNode
        self.index = kwargs.get('index', PoseNode())
        from omniglove_interfaces.msg import PoseNode
        self.middle = kwargs.get('middle', PoseNode())
        from omniglove_interfaces.msg import PoseNode
        self.ring = kwargs.get('ring', PoseNode())
        from omniglove_interfaces.msg import PoseNode
        self.pinky = kwargs.get('pinky', PoseNode())
        from omniglove_interfaces.msg import PoseNode
        self.wrist = kwargs.get('wrist', PoseNode())
        from omniglove_interfaces.msg import PoseImu
        self.back_of_hand_imu = kwargs.get('back_of_hand_imu', PoseImu())
        from omniglove_interfaces.msg import TactileData
        self.tactile = kwargs.get('tactile', TactileData())
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
        if self.components != other.components:
            return False
        if self.device_tick_ms != other.device_tick_ms:
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
        if self.back_of_hand_imu != other.back_of_hand_imu:
            return False
        if self.tactile != other.tactile:
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
    def components(self):
        """Message field 'components'."""
        return self._components

    @components.setter
    def components(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'components' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'components' field must be an unsigned integer in [0, 4294967295]"
        self._components = value

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
    def thumb(self):
        """Message field 'thumb'."""
        return self._thumb

    @thumb.setter
    def thumb(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'thumb' field must be a sub message of type 'PoseNode'"
        self._thumb = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'index' field must be a sub message of type 'PoseNode'"
        self._index = value

    @builtins.property
    def middle(self):
        """Message field 'middle'."""
        return self._middle

    @middle.setter
    def middle(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'middle' field must be a sub message of type 'PoseNode'"
        self._middle = value

    @builtins.property
    def ring(self):
        """Message field 'ring'."""
        return self._ring

    @ring.setter
    def ring(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'ring' field must be a sub message of type 'PoseNode'"
        self._ring = value

    @builtins.property
    def pinky(self):
        """Message field 'pinky'."""
        return self._pinky

    @pinky.setter
    def pinky(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'pinky' field must be a sub message of type 'PoseNode'"
        self._pinky = value

    @builtins.property
    def wrist(self):
        """Message field 'wrist'."""
        return self._wrist

    @wrist.setter
    def wrist(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseNode
            assert \
                isinstance(value, PoseNode), \
                "The 'wrist' field must be a sub message of type 'PoseNode'"
        self._wrist = value

    @builtins.property
    def back_of_hand_imu(self):
        """Message field 'back_of_hand_imu'."""
        return self._back_of_hand_imu

    @back_of_hand_imu.setter
    def back_of_hand_imu(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PoseImu
            assert \
                isinstance(value, PoseImu), \
                "The 'back_of_hand_imu' field must be a sub message of type 'PoseImu'"
        self._back_of_hand_imu = value

    @builtins.property
    def tactile(self):
        """Message field 'tactile'."""
        return self._tactile

    @tactile.setter
    def tactile(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileData
            assert \
                isinstance(value, TactileData), \
                "The 'tactile' field must be a sub message of type 'TactileData'"
        self._tactile = value

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
