// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/srv/detail/get_stream_status__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"
#include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetStreamStatus_Request__init(message_memory);
}

void omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetStreamStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_member_array[2] = {
  {
    "device_uid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Request, device_uid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stream_kind",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Request, stream_kind),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetStreamStatus_Request",  // message name
  2,  // number of fields
  sizeof(omniglove_interfaces__srv__GetStreamStatus_Request),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_member_array,  // message members
  omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetStreamStatus_Request__get_type_hash,
  &omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description,
  &omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Request)() {
  if (!omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetStreamStatus_Response__init(message_memory);
}

void omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetStreamStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_member_array[23] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stream_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, stream_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stream_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, stream_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_interval_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_interval_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_timeout_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_timeout_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_queue_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, callback_queue_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_components",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, pose_components),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual_source_rate_millihz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, actual_source_rate_millihz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_events),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_samples),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_no_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_no_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_timeouts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_timeouts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, source_errors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_delivered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, callback_delivered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_dropped_full",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, callback_dropped_full),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_discontinuities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, callback_discontinuities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_queue_high_watermark",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, callback_queue_high_watermark),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_source_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, last_source_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_delivered_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, last_delivered_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_source_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, last_source_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetStreamStatus_Response",  // message name
  23,  // number of fields
  sizeof(omniglove_interfaces__srv__GetStreamStatus_Response),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_member_array,  // message members
  omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetStreamStatus_Response__get_type_hash,
  &omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description,
  &omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Response)() {
  if (!omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "omniglove_interfaces/srv/get_stream_status.h"
// Member `request`
// Member `response`
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__GetStreamStatus_Event__init(message_memory);
}

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__GetStreamStatus_Event__fini(message_memory);
}

size_t omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__size_function__GetStreamStatus_Event__request(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * member =
    (const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__request(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * member =
    (const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__request(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * member =
    (omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetStreamStatus_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__GetStreamStatus_Request * item =
    ((const omniglove_interfaces__srv__GetStreamStatus_Request *)
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__request(untyped_member, index));
  omniglove_interfaces__srv__GetStreamStatus_Request * value =
    (omniglove_interfaces__srv__GetStreamStatus_Request *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetStreamStatus_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__GetStreamStatus_Request * item =
    ((omniglove_interfaces__srv__GetStreamStatus_Request *)
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__request(untyped_member, index));
  const omniglove_interfaces__srv__GetStreamStatus_Request * value =
    (const omniglove_interfaces__srv__GetStreamStatus_Request *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetStreamStatus_Event__request(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * member =
    (omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *)(untyped_member);
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(member);
  return omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(member, size);
}

size_t omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__size_function__GetStreamStatus_Event__response(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * member =
    (const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__response(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * member =
    (const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__response(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * member =
    (omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetStreamStatus_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__GetStreamStatus_Response * item =
    ((const omniglove_interfaces__srv__GetStreamStatus_Response *)
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__response(untyped_member, index));
  omniglove_interfaces__srv__GetStreamStatus_Response * value =
    (omniglove_interfaces__srv__GetStreamStatus_Response *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetStreamStatus_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__GetStreamStatus_Response * item =
    ((omniglove_interfaces__srv__GetStreamStatus_Response *)
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__response(untyped_member, index));
  const omniglove_interfaces__srv__GetStreamStatus_Response * value =
    (const omniglove_interfaces__srv__GetStreamStatus_Response *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetStreamStatus_Event__response(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * member =
    (omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *)(untyped_member);
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(member);
  return omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Event, request),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__size_function__GetStreamStatus_Event__request,  // size() function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__request,  // get_const(index) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__request,  // get(index) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetStreamStatus_Event__request,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetStreamStatus_Event__request,  // assign(index, value) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetStreamStatus_Event__request  // resize(index) function pointer
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
    offsetof(omniglove_interfaces__srv__GetStreamStatus_Event, response),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__size_function__GetStreamStatus_Event__response,  // size() function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetStreamStatus_Event__response,  // get_const(index) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__get_function__GetStreamStatus_Event__response,  // get(index) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetStreamStatus_Event__response,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetStreamStatus_Event__response,  // assign(index, value) function pointer
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetStreamStatus_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "GetStreamStatus_Event",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__srv__GetStreamStatus_Event),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_member_array,  // message members
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__GetStreamStatus_Event__get_type_hash,
  &omniglove_interfaces__srv__GetStreamStatus_Event__get_type_description,
  &omniglove_interfaces__srv__GetStreamStatus_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Event)() {
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Request)();
  omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Response)();
  if (!omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "omniglove_interfaces/srv/detail/get_stream_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_members = {
  "omniglove_interfaces__srv",  // service namespace
  "GetStreamStatus",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle,
  NULL,  // response message
  // omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle
  NULL  // event_message
  // omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle
};


static rosidl_service_type_support_t omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_type_support_handle = {
  0,
  &omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_members,
  get_service_typesupport_handle_function,
  &omniglove_interfaces__srv__GetStreamStatus_Request__rosidl_typesupport_introspection_c__GetStreamStatus_Request_message_type_support_handle,
  &omniglove_interfaces__srv__GetStreamStatus_Response__rosidl_typesupport_introspection_c__GetStreamStatus_Response_message_type_support_handle,
  &omniglove_interfaces__srv__GetStreamStatus_Event__rosidl_typesupport_introspection_c__GetStreamStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    GetStreamStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    GetStreamStatus
  ),
  &omniglove_interfaces__srv__GetStreamStatus__get_type_hash,
  &omniglove_interfaces__srv__GetStreamStatus__get_type_description,
  &omniglove_interfaces__srv__GetStreamStatus__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus)(void) {
  if (!omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, GetStreamStatus_Event)()->data;
  }

  return &omniglove_interfaces__srv__detail__get_stream_status__rosidl_typesupport_introspection_c__GetStreamStatus_service_type_support_handle;
}
