// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/pose6__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/pose6__functions.h"
#include "omniglove_interfaces/msg/detail/pose6__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__Pose6__init(message_memory);
}

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__Pose6__fini(message_memory);
}

size_t omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__size_function__Pose6__position_m(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__position_m(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__position_m(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__fetch_function__Pose6__position_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__position_m(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__assign_function__Pose6__position_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__position_m(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__size_function__Pose6__quaternion_xyzw(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__quaternion_xyzw(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__quaternion_xyzw(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__fetch_function__Pose6__quaternion_xyzw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__quaternion_xyzw(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__assign_function__Pose6__quaternion_xyzw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__quaternion_xyzw(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_member_array[2] = {
  {
    "position_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__Pose6, position_m),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__size_function__Pose6__position_m,  // size() function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__position_m,  // get_const(index) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__position_m,  // get(index) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__fetch_function__Pose6__position_m,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__assign_function__Pose6__position_m,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion_xyzw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__Pose6, quaternion_xyzw),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__size_function__Pose6__quaternion_xyzw,  // size() function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_const_function__Pose6__quaternion_xyzw,  // get_const(index) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__get_function__Pose6__quaternion_xyzw,  // get(index) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__fetch_function__Pose6__quaternion_xyzw,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__assign_function__Pose6__quaternion_xyzw,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "Pose6",  // message name
  2,  // number of fields
  sizeof(omniglove_interfaces__msg__Pose6),
  omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_member_array,  // message members
  omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, Pose6)() {
  if (!omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__Pose6__rosidl_typesupport_introspection_c__Pose6_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
