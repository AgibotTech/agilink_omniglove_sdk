// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"
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

void Pose6_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::Pose6(_init);
}

void Pose6_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::Pose6 *>(message_memory);
  typed_message->~Pose6();
}

size_t size_function__Pose6__position_m(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Pose6__position_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Pose6__position_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pose6__position_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Pose6__position_m(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Pose6__position_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Pose6__position_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Pose6__quaternion_xyzw(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__Pose6__quaternion_xyzw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__Pose6__quaternion_xyzw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pose6__quaternion_xyzw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Pose6__quaternion_xyzw(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Pose6__quaternion_xyzw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Pose6__quaternion_xyzw(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pose6_message_member_array[2] = {
  {
    "position_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::Pose6, position_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pose6__position_m,  // size() function pointer
    get_const_function__Pose6__position_m,  // get_const(index) function pointer
    get_function__Pose6__position_m,  // get(index) function pointer
    fetch_function__Pose6__position_m,  // fetch(index, &value) function pointer
    assign_function__Pose6__position_m,  // assign(index, value) function pointer
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
    offsetof(omniglove_interfaces::msg::Pose6, quaternion_xyzw),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pose6__quaternion_xyzw,  // size() function pointer
    get_const_function__Pose6__quaternion_xyzw,  // get_const(index) function pointer
    get_function__Pose6__quaternion_xyzw,  // get(index) function pointer
    fetch_function__Pose6__quaternion_xyzw,  // fetch(index, &value) function pointer
    assign_function__Pose6__quaternion_xyzw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pose6_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "Pose6",  // message name
  2,  // number of fields
  sizeof(omniglove_interfaces::msg::Pose6),
  Pose6_message_member_array,  // message members
  Pose6_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose6_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pose6_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pose6_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::Pose6>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::Pose6_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, Pose6)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::Pose6_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
