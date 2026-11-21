// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/PostData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/post_data__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/post_data__functions.h"
#include "omniglove_interfaces/msg/detail/post_data__struct.h"


// Include directives for member types
// Member `thumb`
#include "omniglove_interfaces/msg/post_thumb.h"
// Member `thumb`
#include "omniglove_interfaces/msg/detail/post_thumb__rosidl_typesupport_introspection_c.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `pinky`
#include "omniglove_interfaces/msg/post_finger.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `pinky`
#include "omniglove_interfaces/msg/detail/post_finger__rosidl_typesupport_introspection_c.h"
// Member `wrist`
#include "omniglove_interfaces/msg/post_wrist.h"
// Member `wrist`
#include "omniglove_interfaces/msg/detail/post_wrist__rosidl_typesupport_introspection_c.h"
// Member `unmapped_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__PostData__init(message_memory);
}

void omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__PostData__fini(message_memory);
}

size_t omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__size_function__PostData__unmapped_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_const_function__PostData__unmapped_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_function__PostData__unmapped_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__fetch_function__PostData__unmapped_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_const_function__PostData__unmapped_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__assign_function__PostData__unmapped_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_function__PostData__unmapped_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__resize_function__PostData__unmapped_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[12] = {
  {
    "mapped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, mapped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_tick_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, device_tick_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, reserved),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thumb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, thumb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "middle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, middle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, ring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pinky",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, pinky),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, wrist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unmapped_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PostData, unmapped_data),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__size_function__PostData__unmapped_data,  // size() function pointer
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_const_function__PostData__unmapped_data,  // get_const(index) function pointer
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__get_function__PostData__unmapped_data,  // get(index) function pointer
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__fetch_function__PostData__unmapped_data,  // fetch(index, &value) function pointer
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__assign_function__PostData__unmapped_data,  // assign(index, value) function pointer
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__resize_function__PostData__unmapped_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "PostData",  // message name
  12,  // number of fields
  sizeof(omniglove_interfaces__msg__PostData),
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array,  // message members
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostData)() {
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostThumb)();
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFinger)();
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFinger)();
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFinger)();
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostFinger)();
  omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PostWrist)();
  if (!omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__PostData__rosidl_typesupport_introspection_c__PostData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
