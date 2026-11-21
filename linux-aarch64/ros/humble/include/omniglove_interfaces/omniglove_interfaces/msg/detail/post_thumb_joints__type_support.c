// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/post_thumb_joints__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/post_thumb_joints__functions.h"
#include "omniglove_interfaces/msg/detail/post_thumb_joints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__PostThumbJoints__init(message_memory);
}

void omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__PostThumbJoints__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_member_array[5] = {
  {
    "cmc_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostThumbJoints, cmc_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmc_abduction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostThumbJoints, cmc_abduction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmc_flexion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostThumbJoints, cmc_flexion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mcp_flexion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostThumbJoints, mcp_flexion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip_flexion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostThumbJoints, ip_flexion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "PostThumbJoints",  // message name
  5,  // number of fields
  sizeof(omniglove_interfaces__msg__PostThumbJoints),
  omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_member_array,  // message members
  omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostThumbJoints)() {
  if (!omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__PostThumbJoints__rosidl_typesupport_introspection_c__PostThumbJoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
