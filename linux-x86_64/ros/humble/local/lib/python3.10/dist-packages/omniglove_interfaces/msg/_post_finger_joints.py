# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/PostFingerJoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PostFingerJoints(type):
    """Metaclass of message 'PostFingerJoints'."""

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
                'omniglove_interfaces.msg.PostFingerJoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__post_finger_joints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__post_finger_joints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__post_finger_joints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__post_finger_joints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__post_finger_joints

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PostFingerJoints(metaclass=Metaclass_PostFingerJoints):
    """Message class 'PostFingerJoints'."""

    __slots__ = [
        '_mcp_abduction',
        '_mcp_flexion',
        '_pip_flexion',
        '_dip_flexion',
    ]

    _fields_and_field_types = {
        'mcp_abduction': 'float',
        'mcp_flexion': 'float',
        'pip_flexion': 'float',
        'dip_flexion': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mcp_abduction = kwargs.get('mcp_abduction', float())
        self.mcp_flexion = kwargs.get('mcp_flexion', float())
        self.pip_flexion = kwargs.get('pip_flexion', float())
        self.dip_flexion = kwargs.get('dip_flexion', float())

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
        if self.mcp_abduction != other.mcp_abduction:
            return False
        if self.mcp_flexion != other.mcp_flexion:
            return False
        if self.pip_flexion != other.pip_flexion:
            return False
        if self.dip_flexion != other.dip_flexion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mcp_abduction(self):
        """Message field 'mcp_abduction'."""
        return self._mcp_abduction

    @mcp_abduction.setter
    def mcp_abduction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mcp_abduction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mcp_abduction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mcp_abduction = value

    @builtins.property
    def mcp_flexion(self):
        """Message field 'mcp_flexion'."""
        return self._mcp_flexion

    @mcp_flexion.setter
    def mcp_flexion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mcp_flexion' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mcp_flexion' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mcp_flexion = value

    @builtins.property
    def pip_flexion(self):
        """Message field 'pip_flexion'."""
        return self._pip_flexion

    @pip_flexion.setter
    def pip_flexion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pip_flexion' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pip_flexion' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pip_flexion = value

    @builtins.property
    def dip_flexion(self):
        """Message field 'dip_flexion'."""
        return self._dip_flexion

    @dip_flexion.setter
    def dip_flexion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dip_flexion' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dip_flexion' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dip_flexion = value
