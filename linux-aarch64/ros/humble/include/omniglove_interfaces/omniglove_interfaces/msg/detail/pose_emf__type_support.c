// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/pose_emf__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/pose_emf__functions.h"
#include "omniglove_interfaces/msg/detail/pose_emf__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__PoseEmf__init(message_memory);
}

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__PoseEmf__fini(message_memory);
}

size_t omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__size_function__PoseEmf__position_mm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__position_mm(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__position_mm(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__fetch_function__PoseEmf__position_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__position_mm(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__assign_function__PoseEmf__position_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__position_mm(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__size_function__PoseEmf__yaw_pitch_roll_cdeg(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__yaw_pitch_roll_cdeg(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__yaw_pitch_roll_cdeg(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__fetch_function__PoseEmf__yaw_pitch_roll_cdeg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__yaw_pitch_roll_cdeg(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__assign_function__PoseEmf__yaw_pitch_roll_cdeg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__yaw_pitch_roll_cdeg(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_member_array[4] = {
  {
    "position_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseEmf, position_mm),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__size_function__PoseEmf__position_mm,  // size() function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__position_mm,  // get_const(index) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__position_mm,  // get(index) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__fetch_function__PoseEmf__position_mm,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__assign_function__PoseEmf__position_mm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_pitch_roll_cdeg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseEmf, yaw_pitch_roll_cdeg),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__size_function__PoseEmf__yaw_pitch_roll_cdeg,  // size() function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_const_function__PoseEmf__yaw_pitch_roll_cdeg,  // get_const(index) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__get_function__PoseEmf__yaw_pitch_roll_cdeg,  // get(index) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__fetch_function__PoseEmf__yaw_pitch_roll_cdeg,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__assign_function__PoseEmf__yaw_pitch_roll_cdeg,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence_milli",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseEmf, confidence_milli),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseEmf, valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "PoseEmf",  // message name
  4,  // number of fields
  sizeof(omniglove_interfaces__msg__PoseEmf),
  omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_member_array,  // message members
  omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PoseEmf)() {
  if (!omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__PoseEmf__rosidl_typesupport_introspection_c__PoseEmf_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
