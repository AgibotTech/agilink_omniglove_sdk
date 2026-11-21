// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__functions.h"
#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__struct.h"


// Include directives for member types
// Member `metadata`
#include "omniglove_interfaces/msg/stream_metadata.h"
// Member `metadata`
#include "omniglove_interfaces/msg/detail/stream_metadata__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "omniglove_interfaces/msg/pose_data.h"
// Member `data`
#include "omniglove_interfaces/msg/detail/pose_data__rosidl_typesupport_introspection_c.h"
// Member `tac_pos`
#include "omniglove_interfaces/msg/tactile_position_data.h"
// Member `tac_pos`
#include "omniglove_interfaces/msg/detail/tactile_position_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__msg__PoseTactilePositionSample__init(message_memory);
}

void omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_fini_function(void * message_memory)
{
  omniglove_interfaces__msg__PoseTactilePositionSample__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_member_array[3] = {
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseTactilePositionSample, metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseTactilePositionSample, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tac_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__msg__PoseTactilePositionSample, tac_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_members = {
  "omniglove_interfaces__msg",  // message namespace
  "PoseTactilePositionSample",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__msg__PoseTactilePositionSample),
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_member_array,  // message members
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_type_support_handle = {
  0,
  &omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PoseTactilePositionSample)() {
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, StreamMetadata)();
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, PoseData)();
  omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, TactilePositionData)();
  if (!omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__msg__PoseTactilePositionSample__rosidl_typesupport_introspection_c__PoseTactilePositionSample_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
