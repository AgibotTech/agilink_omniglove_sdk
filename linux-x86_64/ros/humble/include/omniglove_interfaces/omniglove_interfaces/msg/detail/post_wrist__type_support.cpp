// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/post_wrist__struct.hpp"
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

void PostWrist_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::PostWrist(_init);
}

void PostWrist_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::PostWrist *>(message_memory);
  typed_message->~PostWrist();
}

size_t size_function__PostWrist__quaternion_xyzw(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__PostWrist__quaternion_xyzw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__PostWrist__quaternion_xyzw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__PostWrist__quaternion_xyzw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PostWrist__quaternion_xyzw(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PostWrist__quaternion_xyzw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PostWrist__quaternion_xyzw(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PostWrist_message_member_array[2] = {
  {
    "landmark",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::Pose6>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostWrist, landmark),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quaternion_xyzw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PostWrist, quaternion_xyzw),  // bytes offset in struct
    nullptr,  // default value
    size_function__PostWrist__quaternion_xyzw,  // size() function pointer
    get_const_function__PostWrist__quaternion_xyzw,  // get_const(index) function pointer
    get_function__PostWrist__quaternion_xyzw,  // get(index) function pointer
    fetch_function__PostWrist__quaternion_xyzw,  // fetch(index, &value) function pointer
    assign_function__PostWrist__quaternion_xyzw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PostWrist_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "PostWrist",  // message name
  2,  // number of fields
  sizeof(omniglove_interfaces::msg::PostWrist),
  PostWrist_message_member_array,  // message members
  PostWrist_init_function,  // function to initialize message memory (memory has to be allocated)
  PostWrist_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PostWrist_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PostWrist_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::PostWrist>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostWrist_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, PostWrist)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PostWrist_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
