// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/srv/detail/get_pose_info__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"
#include "omniglove_interfaces/srv/detail/get_pose_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetPoseInfo_Request__init(message_memory);
}

void omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetPoseInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_member_array[3] = {
  {
    "device_uid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Request, device_uid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "info_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Request, info_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "timeout_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Request, timeout_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetPoseInfo_Request",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__srv__GetPoseInfo_Request),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_member_array,  // message members
  omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetPoseInfo_Request__get_type_hash,
  &omniglove_interfaces__srv__GetPoseInfo_Request__get_type_description,
  &omniglove_interfaces__srv__GetPoseInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Request)() {
  if (!omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetPoseInfo_Response__init(message_memory);
}

void omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetPoseInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_member_array[14] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "control_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, control_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "return_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, return_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "device_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, device_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "connection_generation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, connection_generation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "protocol_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, protocol_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "node_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, node_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, hand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "nominal_source_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, nominal_source_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "calibration_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, calibration_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "max_distance_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, max_distance_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "capability_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, capability_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetPoseInfo_Response",  // message name
  14,  // number of fields
  sizeof(omniglove_interfaces__srv__GetPoseInfo_Response),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_member_array,  // message members
  omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetPoseInfo_Response__get_type_hash,
  &omniglove_interfaces__srv__GetPoseInfo_Response__get_type_description,
  &omniglove_interfaces__srv__GetPoseInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Response)() {
  if (!omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "omniglove_interfaces/srv/get_pose_info.h"
// Member `request`
// Member `response`
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetPoseInfo_Event__init(message_memory);
}

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetPoseInfo_Event__fini(message_memory);
}

size_t omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__size_function__GetPoseInfo_Event__request(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * member =
    (const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * member =
    (const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__request(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * member =
    (omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetPoseInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__GetPoseInfo_Request * item =
    ((const omniglove_interfaces__srv__GetPoseInfo_Request *)
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__request(untyped_member, index));
  omniglove_interfaces__srv__GetPoseInfo_Request * value =
    (omniglove_interfaces__srv__GetPoseInfo_Request *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetPoseInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__GetPoseInfo_Request * item =
    ((omniglove_interfaces__srv__GetPoseInfo_Request *)
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__request(untyped_member, index));
  const omniglove_interfaces__srv__GetPoseInfo_Request * value =
    (const omniglove_interfaces__srv__GetPoseInfo_Request *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetPoseInfo_Event__request(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * member =
    (omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *)(untyped_member);
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__fini(member);
  return omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__init(member, size);
}

size_t omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__size_function__GetPoseInfo_Event__response(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * member =
    (const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * member =
    (const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__response(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * member =
    (omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetPoseInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__GetPoseInfo_Response * item =
    ((const omniglove_interfaces__srv__GetPoseInfo_Response *)
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__response(untyped_member, index));
  omniglove_interfaces__srv__GetPoseInfo_Response * value =
    (omniglove_interfaces__srv__GetPoseInfo_Response *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetPoseInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__GetPoseInfo_Response * item =
    ((omniglove_interfaces__srv__GetPoseInfo_Response *)
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__response(untyped_member, index));
  const omniglove_interfaces__srv__GetPoseInfo_Response * value =
    (const omniglove_interfaces__srv__GetPoseInfo_Response *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetPoseInfo_Event__response(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * member =
    (omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *)(untyped_member);
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__fini(member);
  return omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__size_function__GetPoseInfo_Event__request,  // size() function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__request,  // get_const(index) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__request,  // get(index) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetPoseInfo_Event__request,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetPoseInfo_Event__request,  // assign(index, value) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetPoseInfo_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetPoseInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__size_function__GetPoseInfo_Event__response,  // size() function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetPoseInfo_Event__response,  // get_const(index) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__get_function__GetPoseInfo_Event__response,  // get(index) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetPoseInfo_Event__response,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetPoseInfo_Event__response,  // assign(index, value) function pointer
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetPoseInfo_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetPoseInfo_Event",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__srv__GetPoseInfo_Event),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_member_array,  // message members
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetPoseInfo_Event__get_type_hash,
  &omniglove_interfaces__srv__GetPoseInfo_Event__get_type_description,
  &omniglove_interfaces__srv__GetPoseInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Event)() {
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Request)();
  omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Response)();
  if (!omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_pose_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_members = {
  "omniglove_interfaces__srv",  // service namespace
  "GetPoseInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle,
  NULL,  // response message
  // omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle
  NULL  // event_message
  // omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_type_support_handle = {
  0,
  &omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_members,
  get_service_typesupport_handle_function,
  &omniglove_interfaces__srv__GetPoseInfo_Request__rosidl_typesupport_introspection_c__GetPoseInfo_Request_message_type_support_handle,
  &omniglove_interfaces__srv__GetPoseInfo_Response__rosidl_typesupport_introspection_c__GetPoseInfo_Response_message_type_support_handle,
  &omniglove_interfaces__srv__GetPoseInfo_Event__rosidl_typesupport_introspection_c__GetPoseInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    GetPoseInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    GetPoseInfo
  ),
  &omniglove_interfaces__srv__GetPoseInfo__get_type_hash,
  &omniglove_interfaces__srv__GetPoseInfo__get_type_description,
  &omniglove_interfaces__srv__GetPoseInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo)(void) {
  if (!omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetPoseInfo_Event)()->data;
  }

  return &omniglove_interfaces__srv__detail__get_pose_info__rosidl_typesupport_introspection_c__GetPoseInfo_service_type_support_handle;
}
