// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/PostFinger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/post_finger__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/post_finger__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger__struct.h"


// Include directives for member types
// Member `joints_rad`
#include "omniglove_interfaces/msg/post_finger_joints.h"
// Member `joints_rad`
#include "omniglove_interfaces/msg/detail/post_finger_joints__rosidl_typesupport_introspection_c.h"
// Member `landmarks`
#include "omniglove_interfaces/msg/post_finger_landmarks.h"
// Member `landmarks`
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__rosidl_typesupport_introspection_c.h"
// Member `rx_tip_target`
#include "omniglove_interfaces/msg/pose6.h"
// Member `rx_tip_target`
#include "omniglove_interfaces/msg/detail/pose6__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__PostFinger__init(message_memory);
}

void omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__PostFinger__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_member_array[3] = {
  {
    "joints_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostFinger, joints_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostFinger, landmarks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_tip_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostFinger, rx_tip_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "PostFinger",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__msg__PostFinger),
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_member_array,  // message members
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFinger)() {
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFingerJoints)();
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFingerLandmarks)();
  omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, Pose6)();
  if (!omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__PostFinger__rosidl_typesupport_introspection_c__PostFinger_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
