# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/TactileData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'unmapped_data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TactileData(type):
    """Metaclass of message 'TactileData'."""

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
                'omniglove_interfaces.msg.TactileData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tactile_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tactile_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tactile_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tactile_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tactile_data

            from omniglove_interfaces.msg import TactileFinger
            if TactileFinger.__class__._TYPE_SUPPORT is None:
                TactileFinger.__class__.__import_type_support__()

            from omniglove_interfaces.msg import TactileRegion
            if TactileRegion.__class__._TYPE_SUPPORT is None:
                TactileRegion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TactileData(metaclass=Metaclass_TactileData):
    """Message class 'TactileData'."""

    __slots__ = [
        '_mapped',
        '_count',
        '_thumb',
        '_index',
        '_middle',
        '_ring',
        '_pinky',
        '_palm_surface',
        '_unmapped_data',
    ]

    _fields_and_field_types = {
        'mapped': 'boolean',
        'count': 'uint32',
        'thumb': 'omniglove_interfaces/TactileFinger',
        'index': 'omniglove_interfaces/TactileFinger',
        'middle': 'omniglove_interfaces/TactileFinger',
        'ring': 'omniglove_interfaces/TactileFinger',
        'pinky': 'omniglove_interfaces/TactileFinger',
        'palm_surface': 'omniglove_interfaces/TactileRegion',
        'unmapped_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileFinger'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactileRegion'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mapped = kwargs.get('mapped', bool())
        self.count = kwargs.get('count', int())
        from omniglove_interfaces.msg import TactileFinger
        self.thumb = kwargs.get('thumb', TactileFinger())
        from omniglove_interfaces.msg import TactileFinger
        self.index = kwargs.get('index', TactileFinger())
        from omniglove_interfaces.msg import TactileFinger
        self.middle = kwargs.get('middle', TactileFinger())
        from omniglove_interfaces.msg import TactileFinger
        self.ring = kwargs.get('ring', TactileFinger())
        from omniglove_interfaces.msg import TactileFinger
        self.pinky = kwargs.get('pinky', TactileFinger())
        from omniglove_interfaces.msg import TactileRegion
        self.palm_surface = kwargs.get('palm_surface', TactileRegion())
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
        if self.count != other.count:
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
        if self.palm_surface != other.palm_surface:
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
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'count' field must be an unsigned integer in [0, 4294967295]"
        self._count = value

    @builtins.property
    def thumb(self):
        """Message field 'thumb'."""
        return self._thumb

    @thumb.setter
    def thumb(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileFinger
            assert \
                isinstance(value, TactileFinger), \
                "The 'thumb' field must be a sub message of type 'TactileFinger'"
        self._thumb = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileFinger
            assert \
                isinstance(value, TactileFinger), \
                "The 'index' field must be a sub message of type 'TactileFinger'"
        self._index = value

    @builtins.property
    def middle(self):
        """Message field 'middle'."""
        return self._middle

    @middle.setter
    def middle(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileFinger
            assert \
                isinstance(value, TactileFinger), \
                "The 'middle' field must be a sub message of type 'TactileFinger'"
        self._middle = value

    @builtins.property
    def ring(self):
        """Message field 'ring'."""
        return self._ring

    @ring.setter
    def ring(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileFinger
            assert \
                isinstance(value, TactileFinger), \
                "The 'ring' field must be a sub message of type 'TactileFinger'"
        self._ring = value

    @builtins.property
    def pinky(self):
        """Message field 'pinky'."""
        return self._pinky

    @pinky.setter
    def pinky(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileFinger
            assert \
                isinstance(value, TactileFinger), \
                "The 'pinky' field must be a sub message of type 'TactileFinger'"
        self._pinky = value

    @builtins.property
    def palm_surface(self):
        """Message field 'palm_surface'."""
        return self._palm_surface

    @palm_surface.setter
    def palm_surface(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactileRegion
            assert \
                isinstance(value, TactileRegion), \
                "The 'palm_surface' field must be a sub message of type 'TactileRegion'"
        self._palm_surface = value

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
