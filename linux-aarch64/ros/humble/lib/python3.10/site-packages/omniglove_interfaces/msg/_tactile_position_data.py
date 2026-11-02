# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/TactilePositionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TactilePositionData(type):
    """Metaclass of message 'TactilePositionData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FRAME_WRIST': 1,
        'UNIT_METER': 1,
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
                'omniglove_interfaces.msg.TactilePositionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tactile_position_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tactile_position_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tactile_position_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tactile_position_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tactile_position_data

            from omniglove_interfaces.msg import TactilePointPosition
            if TactilePointPosition.__class__._TYPE_SUPPORT is None:
                TactilePointPosition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FRAME_WRIST': cls.__constants['FRAME_WRIST'],
            'UNIT_METER': cls.__constants['UNIT_METER'],
        }

    @property
    def FRAME_WRIST(self):
        """Message constant 'FRAME_WRIST'."""
        return Metaclass_TactilePositionData.__constants['FRAME_WRIST']

    @property
    def UNIT_METER(self):
        """Message constant 'UNIT_METER'."""
        return Metaclass_TactilePositionData.__constants['UNIT_METER']


class TactilePositionData(metaclass=Metaclass_TactilePositionData):
    """
    Message class 'TactilePositionData'.

    Constants:
      FRAME_WRIST
      UNIT_METER
    """

    __slots__ = [
        '_count',
        '_coordinate_frame',
        '_unit',
        '_points',
    ]

    _fields_and_field_types = {
        'count': 'uint32',
        'coordinate_frame': 'uint32',
        'unit': 'uint32',
        'points': 'sequence<omniglove_interfaces/TactilePointPosition>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'TactilePointPosition')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count = kwargs.get('count', int())
        self.coordinate_frame = kwargs.get('coordinate_frame', int())
        self.unit = kwargs.get('unit', int())
        self.points = kwargs.get('points', [])

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
        if self.count != other.count:
            return False
        if self.coordinate_frame != other.coordinate_frame:
            return False
        if self.unit != other.unit:
            return False
        if self.points != other.points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def coordinate_frame(self):
        """Message field 'coordinate_frame'."""
        return self._coordinate_frame

    @coordinate_frame.setter
    def coordinate_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coordinate_frame' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'coordinate_frame' field must be an unsigned integer in [0, 4294967295]"
        self._coordinate_frame = value

    @builtins.property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unit' field must be an unsigned integer in [0, 4294967295]"
        self._unit = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from omniglove_interfaces.msg import TactilePointPosition
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
                 all(isinstance(v, TactilePointPosition) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'TactilePointPosition'"
        self._points = value
