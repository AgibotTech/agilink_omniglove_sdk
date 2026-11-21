// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omniglove_interfaces/srv/detail/list_devices__rosidl_typesupport_introspection_c.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omniglove_interfaces/srv/detail/list_devices__functions.h"
#include "omniglove_interfaces/srv/detail/list_devices__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__ListDevices_Request__init(message_memory);
}

void omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__ListDevices_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__ListDevices_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "ListDevices_Request",  // message name
  1,  // number of fields
  sizeof(omniglove_interfaces__srv__ListDevices_Request),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_member_array,  // message members
  omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__ListDevices_Request__get_type_hash,
  &omniglove_interfaces__srv__ListDevices_Request__get_type_description,
  &omniglove_interfaces__srv__ListDevices_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Request)() {
  if (!omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__struct.h"


// Include directives for member types
// Member `devices`
#include "omniglove_interfaces/msg/device_info.h"
// Member `devices`
#include "omniglove_interfaces/msg/detail/device_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__ListDevices_Response__init(message_memory);
}

void omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__ListDevices_Response__fini(message_memory);
}

size_t omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__size_function__ListDevices_Response__devices(
  const void * untyped_member)
{
  const omniglove_interfaces__msg__DeviceInfo__Sequence * member =
    (const omniglove_interfaces__msg__DeviceInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Response__devices(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__msg__DeviceInfo__Sequence * member =
    (const omniglove_interfaces__msg__DeviceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_function__ListDevices_Response__devices(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__msg__DeviceInfo__Sequence * member =
    (omniglove_interfaces__msg__DeviceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Response__devices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__msg__DeviceInfo * item =
    ((const omniglove_interfaces__msg__DeviceInfo *)
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Response__devices(untyped_member, index));
  omniglove_interfaces__msg__DeviceInfo * value =
    (omniglove_interfaces__msg__DeviceInfo *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__assign_function__ListDevices_Response__devices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__msg__DeviceInfo * item =
    ((omniglove_interfaces__msg__DeviceInfo *)
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_function__ListDevices_Response__devices(untyped_member, index));
  const omniglove_interfaces__msg__DeviceInfo * value =
    (const omniglove_interfaces__msg__DeviceInfo *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__resize_function__ListDevices_Response__devices(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__msg__DeviceInfo__Sequence * member =
    (omniglove_interfaces__msg__DeviceInfo__Sequence *)(untyped_member);
  omniglove_interfaces__msg__DeviceInfo__Sequence__fini(member);
  return omniglove_interfaces__msg__DeviceInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_member_array[1] = {
  {
    "devices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__ListDevices_Response, devices),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__size_function__ListDevices_Response__devices,  // size() function pointer
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Response__devices,  // get_const(index) function pointer
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__get_function__ListDevices_Response__devices,  // get(index) function pointer
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Response__devices,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__assign_function__ListDevices_Response__devices,  // assign(index, value) function pointer
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__resize_function__ListDevices_Response__devices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "ListDevices_Response",  // message name
  1,  // number of fields
  sizeof(omniglove_interfaces__srv__ListDevices_Response),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_member_array,  // message members
  omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__ListDevices_Response__get_type_hash,
  &omniglove_interfaces__srv__ListDevices_Response__get_type_description,
  &omniglove_interfaces__srv__ListDevices_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Response)() {
  omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, msg, DeviceInfo)();
  if (!omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__functions.h"
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "omniglove_interfaces/srv/list_devices.h"
// Member `request`
// Member `response`
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omniglove_interfaces__srv__ListDevices_Event__init(message_memory);
}

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_fini_function(void * message_memory)
{
  omniglove_interfaces__srv__ListDevices_Event__fini(message_memory);
}

size_t omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__size_function__ListDevices_Event__request(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__ListDevices_Request__Sequence * member =
    (const omniglove_interfaces__srv__ListDevices_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__request(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__ListDevices_Request__Sequence * member =
    (const omniglove_interfaces__srv__ListDevices_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__request(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__ListDevices_Request__Sequence * member =
    (omniglove_interfaces__srv__ListDevices_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__ListDevices_Request * item =
    ((const omniglove_interfaces__srv__ListDevices_Request *)
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__request(untyped_member, index));
  omniglove_interfaces__srv__ListDevices_Request * value =
    (omniglove_interfaces__srv__ListDevices_Request *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__assign_function__ListDevices_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__ListDevices_Request * item =
    ((omniglove_interfaces__srv__ListDevices_Request *)
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__request(untyped_member, index));
  const omniglove_interfaces__srv__ListDevices_Request * value =
    (const omniglove_interfaces__srv__ListDevices_Request *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__resize_function__ListDevices_Event__request(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__ListDevices_Request__Sequence * member =
    (omniglove_interfaces__srv__ListDevices_Request__Sequence *)(untyped_member);
  omniglove_interfaces__srv__ListDevices_Request__Sequence__fini(member);
  return omniglove_interfaces__srv__ListDevices_Request__Sequence__init(member, size);
}

size_t omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__size_function__ListDevices_Event__response(
  const void * untyped_member)
{
  const omniglove_interfaces__srv__ListDevices_Response__Sequence * member =
    (const omniglove_interfaces__srv__ListDevices_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__response(
  const void * untyped_member, size_t index)
{
  const omniglove_interfaces__srv__ListDevices_Response__Sequence * member =
    (const omniglove_interfaces__srv__ListDevices_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__response(
  void * untyped_member, size_t index)
{
  omniglove_interfaces__srv__ListDevices_Response__Sequence * member =
    (omniglove_interfaces__srv__ListDevices_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omniglove_interfaces__srv__ListDevices_Response * item =
    ((const omniglove_interfaces__srv__ListDevices_Response *)
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__response(untyped_member, index));
  omniglove_interfaces__srv__ListDevices_Response * value =
    (omniglove_interfaces__srv__ListDevices_Response *)(untyped_value);
  *value = *item;
}

void omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__assign_function__ListDevices_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omniglove_interfaces__srv__ListDevices_Response * item =
    ((omniglove_interfaces__srv__ListDevices_Response *)
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__response(untyped_member, index));
  const omniglove_interfaces__srv__ListDevices_Response * value =
    (const omniglove_interfaces__srv__ListDevices_Response *)(untyped_value);
  *item = *value;
}

bool omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__resize_function__ListDevices_Event__response(
  void * untyped_member, size_t size)
{
  omniglove_interfaces__srv__ListDevices_Response__Sequence * member =
    (omniglove_interfaces__srv__ListDevices_Response__Sequence *)(untyped_member);
  omniglove_interfaces__srv__ListDevices_Response__Sequence__fini(member);
  return omniglove_interfaces__srv__ListDevices_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces__srv__ListDevices_Event, info),  // bytes offset in struct
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
    offsetof(omniglove_interfaces__srv__ListDevices_Event, request),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__size_function__ListDevices_Event__request,  // size() function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__request,  // get_const(index) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__request,  // get(index) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Event__request,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__assign_function__ListDevices_Event__request,  // assign(index, value) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__resize_function__ListDevices_Event__request  // resize(index) function pointer
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
    offsetof(omniglove_interfaces__srv__ListDevices_Event, response),  // bytes offset in struct
    NULL,  // default value
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__size_function__ListDevices_Event__response,  // size() function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_const_function__ListDevices_Event__response,  // get_const(index) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__get_function__ListDevices_Event__response,  // get(index) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__fetch_function__ListDevices_Event__response,  // fetch(index, &value) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__assign_function__ListDevices_Event__response,  // assign(index, value) function pointer
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__resize_function__ListDevices_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_members = {
  "omniglove_interfaces__srv",  // message namespace
  "ListDevices_Event",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces__srv__ListDevices_Event),
  false,  // has_any_key_member_
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_member_array,  // message members
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_type_support_handle = {
  0,
  &omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_members,
  get_message_typesupport_handle_function,
  &omniglove_interfaces__srv__ListDevices_Event__get_type_hash,
  &omniglove_interfaces__srv__ListDevices_Event__get_type_description,
  &omniglove_interfaces__srv__ListDevices_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Event)() {
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Request)();
  omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Response)();
  if (!omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "omniglove_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "omniglove_interfaces/srv/detail/list_devices__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_members = {
  "omniglove_interfaces__srv",  // service namespace
  "ListDevices",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle,
  NULL,  // response message
  // omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle
  NULL  // event_message
  // omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle
};


static rosidl_service_type_support_t omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_type_support_handle = {
  0,
  &omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_members,
  get_service_typesupport_handle_function,
  &omniglove_interfaces__srv__ListDevices_Request__rosidl_typesupport_introspection_c__ListDevices_Request_message_type_support_handle,
  &omniglove_interfaces__srv__ListDevices_Response__rosidl_typesupport_introspection_c__ListDevices_Response_message_type_support_handle,
  &omniglove_interfaces__srv__ListDevices_Event__rosidl_typesupport_introspection_c__ListDevices_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    ListDevices
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omniglove_interfaces,
    srv,
    ListDevices
  ),
  &omniglove_interfaces__srv__ListDevices__get_type_hash,
  &omniglove_interfaces__srv__ListDevices__get_type_description,
  &omniglove_interfaces__srv__ListDevices__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omniglove_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices)(void) {
  if (!omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_type_support_handle.typesupport_identifier) {
    omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omniglove_interfaces, srv, ListDevices_Event)()->data;
  }

  return &omniglove_interfaces__srv__detail__list_devices__rosidl_typesupport_introspection_c__ListDevices_service_type_support_handle;
}
