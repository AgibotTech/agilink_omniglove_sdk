// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/tactile_position_data__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/tactile_position_data__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.h"


// Include directives for member types
// Member `points`
#include "omniglove_interfaces/msg/tactile_point_position.h"
// Member `points`
#include "omniglove_interfaces/msg/detail/tactile_point_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__TactilePositionData__init(message_memory);
}

void omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__TactilePositionData__fini(message_memory);
}

size_t omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__size_function__TactilePositionData__points(
  const void * untyped_member)
{
  const omniglove_interfaces__msg__TactilePointPosition__Sequence * member =
    (const omniglove_interfaces__msg__TactilePointPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_const_function__TactilePositionData__points(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__msg__TactilePointPosition__Sequence * member =
    (const omniglove_interfaces__msg__TactilePointPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_function__TactilePositionData__points(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__msg__TactilePointPosition__Sequence * member =
    (omniglove_interfaces__msg__TactilePointPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__fetch_function__TactilePositionData__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__msg__TactilePointPosition * item =
    ((const omniglove_interfaces__msg__TactilePointPosition *)
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_const_function__TactilePositionData__points(untyped_member, index));
  omniglove_interfaces__msg__TactilePointPosition * value =
    (omniglove_interfaces__msg__TactilePointPosition *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__assign_function__TactilePositionData__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__msg__TactilePointPosition * item =
    ((omniglove_interfaces__msg__TactilePointPosition *)
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_function__TactilePositionData__points(untyped_member, index));
  const omniglove_interfaces__msg__TactilePointPosition * value =
    (const omniglove_interfaces__msg__TactilePointPosition *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__resize_function__TactilePositionData__points(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__msg__TactilePointPosition__Sequence * member =
    (omniglove_interfaces__msg__TactilePointPosition__Sequence *)(untyped_member);
  omniglove_interfaces__msg__TactilePointPosition__Sequence__fini(member);
  return omniglove_interfaces__msg__TactilePointPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_member_array[4] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__TactilePositionData, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__TactilePositionData, coordinate_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__TactilePositionData, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__TactilePositionData, points),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__size_function__TactilePositionData__points,  // size() function pointer
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_const_function__TactilePositionData__points,  // get_const(index) function pointer
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__get_function__TactilePositionData__points,  // get(index) function pointer
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__fetch_function__TactilePositionData__points,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__assign_function__TactilePositionData__points,  // assign(index, value) function pointer
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__resize_function__TactilePositionData__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "TactilePositionData",  // message name
  4,  // number of fields
  sizeof(omniglove_interfaces__msg__TactilePositionData),
  omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_member_array,  // message members
  omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, TactilePositionData)() {
  omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, TactilePointPosition)();
  if (!omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__TactilePositionData__rosidl_typesupport_introspection_c__TactilePositionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
