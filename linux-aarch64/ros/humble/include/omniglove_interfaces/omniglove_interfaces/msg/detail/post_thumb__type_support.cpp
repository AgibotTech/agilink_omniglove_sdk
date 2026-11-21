// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/PostThumb.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/post_thumb__struct.hpp"
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

void PostThumb_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::PostThumb(_init);
}

void PostThumb_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::PostThumb *>(message_memory);
  typed_message->~PostThumb();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PostThumb_message_member_array[3] = {
  {
    "joints_rad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::PostThumbJoints>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostThumb, joints_rad),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::PostThumbLandmarks>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostThumb, landmarks),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rx_tip_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostThumb, rx_tip_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PostThumb_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "PostThumb",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces::msg::PostThumb),
  PostThumb_message_member_array,  // message members
  PostThumb_init_function,  // function to initialize message memory (memory has to be allocated)
  PostThumb_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PostThumb_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PostThumb_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::PostThumb>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostThumb_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, PostThumb)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostThumb_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
