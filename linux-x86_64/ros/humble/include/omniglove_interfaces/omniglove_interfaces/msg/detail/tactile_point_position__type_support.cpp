// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/TactilePointPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/tactile_point_position__struct.hpp"
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

void TactilePointPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::TactilePointPosition(_init);
}

void TactilePointPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::TactilePointPosition *>(message_memory);
  typed_message->~TactilePointPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TactilePointPosition_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePointPosition, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePointPosition, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePointPosition, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TactilePointPosition_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "TactilePointPosition",  // message name
  3,  // number of fields
  sizeof(omniglove_interfaces::msg::TactilePointPosition),
  TactilePointPosition_message_member_array,  // message members
  TactilePointPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  TactilePointPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TactilePointPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TactilePointPosition_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::TactilePointPosition>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::TactilePointPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, TactilePointPosition)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::TactilePointPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
