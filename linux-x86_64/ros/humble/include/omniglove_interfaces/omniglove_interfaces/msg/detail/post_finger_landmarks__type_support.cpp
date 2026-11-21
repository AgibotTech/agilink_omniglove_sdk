// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace omniglove_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PostFingerLandmarks_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::PostFingerLandmarks(_init);
}

void PostFingerLandmarks_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::PostFingerLandmarks *>(message_memory);
  typed_message->~PostFingerLandmarks();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PostFingerLandmarks_message_member_array[4] = {
  {
    "mcp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostFingerLandmarks, mcp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostFingerLandmarks, pip),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostFingerLandmarks, dip),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostFingerLandmarks, tip),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PostFingerLandmarks_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "PostFingerLandmarks",  // message name
  4,  // number of fields
  sizeof(omniglove_interfaces::msg::PostFingerLandmarks),
  PostFingerLandmarks_message_member_array,  // message members
  PostFingerLandmarks_init_function,  // function to initialize message memory (memory has to be allocated)
  PostFingerLandmarks_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PostFingerLandmarks_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PostFingerLandmarks_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace omniglove_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<omniglove_interfaces::msg::PostFingerLandmarks>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostFingerLandmarks_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, PostFingerLandmarks)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostFingerLandmarks_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
