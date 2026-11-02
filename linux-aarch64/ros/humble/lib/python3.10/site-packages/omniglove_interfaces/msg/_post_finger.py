# generated from rosidl_generator_py/resource/_idl.py.em
# with input from omniglove_interfaces:msg/PostFinger.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PostFinger(type):
    """Metaclass of message 'PostFinger'."""

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
                'omniglove_interfaces.msg.PostFinger')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__post_finger
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__post_finger
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__post_finger
            cls._TYPE_SUPPORT = module.type_support_msg__msg__post_finger
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__post_finger

            from omniglove_interfaces.msg import Pose6
            if Pose6.__class__._TYPE_SUPPORT is None:
                Pose6.__class__.__import_type_support__()

            from omniglove_interfaces.msg import PostFingerJoints
            if PostFingerJoints.__class__._TYPE_SUPPORT is None:
                PostFingerJoints.__class__.__import_type_support__()

            from omniglove_interfaces.msg import PostFingerLandmarks
            if PostFingerLandmarks.__class__._TYPE_SUPPORT is None:
                PostFingerLandmarks.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PostFinger(metaclass=Metaclass_PostFinger):
    """Message class 'PostFinger'."""

    __slots__ = [
        '_joints_rad',
        '_landmarks',
        '_rx_tip_target',
    ]

    _fields_and_field_types = {
        'joints_rad': 'omniglove_interfaces/PostFingerJoints',
        'landmarks': 'omniglove_interfaces/PostFingerLandmarks',
        'rx_tip_target': 'omniglove_interfaces/Pose6',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFingerJoints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'PostFingerLandmarks'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['omniglove_interfaces', 'msg'], 'Pose6'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from omniglove_interfaces.msg import PostFingerJoints
        self.joints_rad = kwargs.get('joints_rad', PostFingerJoints())
        from omniglove_interfaces.msg import PostFingerLandmarks
        self.landmarks = kwargs.get('landmarks', PostFingerLandmarks())
        from omniglove_interfaces.msg import Pose6
        self.rx_tip_target = kwargs.get('rx_tip_target', Pose6())

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
        if self.joints_rad != other.joints_rad:
            return False
        if self.landmarks != other.landmarks:
            return False
        if self.rx_tip_target != other.rx_tip_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joints_rad(self):
        """Message field 'joints_rad'."""
        return self._joints_rad

    @joints_rad.setter
    def joints_rad(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFingerJoints
            assert \
                isinstance(value, PostFingerJoints), \
                "The 'joints_rad' field must be a sub message of type 'PostFingerJoints'"
        self._joints_rad = value

    @builtins.property
    def landmarks(self):
        """Message field 'landmarks'."""
        return self._landmarks

    @landmarks.setter
    def landmarks(self, value):
        if __debug__:
            from omniglove_interfaces.msg import PostFingerLandmarks
            assert \
                isinstance(value, PostFingerLandmarks), \
                "The 'landmarks' field must be a sub message of type 'PostFingerLandmarks'"
        self._landmarks = value

    @builtins.property
    def rx_tip_target(self):
        """Message field 'rx_tip_target'."""
        return self._rx_tip_target

    @rx_tip_target.setter
    def rx_tip_target(self, value):
        if __debug__:
            from omniglove_interfaces.msg import Pose6
            assert \
                isinstance(value, Pose6), \
                "The 'rx_tip_target' field must be a sub message of type 'Pose6'"
        self._rx_tip_target = value
