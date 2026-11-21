# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PostFingerLandmarks(type):
    """Metaclass of message 'PostFingerLandmarks'."""

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
                'omniglove_interfaces.msg.PostFingerLandmarks')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__post_finger_landmarks
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__post_finger_landmarks
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__post_finger_landmarks
            cls._TYPE_SUPPORT = module.type_support_msg__msg__post_finger_landmarks
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__post_finger_landmarks

            from omniglove_interfaces.msg import Pose6
            if Pose6.__class__._TYPE_SUPPORT is None:
                Pose6.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PostFingerLandmarks(metaclass=Metaclass_PostFingerLandmarks):
    """Message class 'PostFingerLandmarks'."""

    __slots__ = [
        '_mcp',
        '_pip',
        '_dip',
        '_tip',
    ]

    _fields_and_field_types = {
        'mcp': 'omniglove_interfaces/Pose6',
        'pip': 'omniglove_interfaces/Pose6',
        'dip': 'omniglove_interfaces/Pose6',
        'tip': 'omniglove_interfaces/Pose6',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'Pose6'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'Pose6'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'Pose6'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'Pose6'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from omniglove_interfaces.msg import Pose6
        self.mcp = kwargs.get('mcp', Pose6())
        from omniglove_interfaces.msg import Pose6
        self.pip = kwargs.get('pip', Pose6())
        from omniglove_interfaces.msg import Pose6
        self.dip = kwargs.get('dip', Pose6())
        from omniglove_interfaces.msg import Pose6
        self.tip = kwargs.get('tip', Pose6())

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
        if self.mcp != other.mcp:
            return False
        if self.pip != other.pip:
            return False
        if self.dip != other.dip:
            return False
        if self.tip != other.tip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mcp(self):
        """Message field 'mcp'."""
        return self._mcp

    @mcp.setter
    def mcp(self, value):
        if __debug__:
            from omniglove_interfaces.msg import Pose6
            assert \
                isinstance(value, Pose6), \
                "The 'mcp' field must be a sub message of type 'Pose6'"
        self._mcp = value

    @builtins.property
    def pip(self):
        """Message field 'pip'."""
        return self._pip

    @pip.setter
    def pip(self, value):
        if __debug__:
            from omniglove_interfaces.msg import Pose6
            assert \
                isinstance(value, Pose6), \
                "The 'pip' field must be a sub message of type 'Pose6'"
        self._pip = value

    @builtins.property
    def dip(self):
        """Message field 'dip'."""
        return self._dip

    @dip.setter
    def dip(self, value):
        if __debug__:
            from omniglove_interfaces.msg import Pose6
            assert \
                isinstance(value, Pose6), \
                "The 'dip' field must be a sub message of type 'Pose6'"
        self._dip = value

    @builtins.property
    def tip(self):
        """Message field 'tip'."""
        return self._tip

    @tip.setter
    def tip(self, value):
        if __debug__:
            from omniglove_interfaces.msg import Pose6
            assert \
                isinstance(value, Pose6), \
                "The 'tip' field must be a sub message of type 'Pose6'"
        self._tip = value
