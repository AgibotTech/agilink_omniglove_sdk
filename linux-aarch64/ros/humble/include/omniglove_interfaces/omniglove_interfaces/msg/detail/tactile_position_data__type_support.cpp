// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.hpp"
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

void TactilePositionData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::TactilePositionData(_init);
}

void TactilePositionData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::TactilePositionData *>(message_memory);
  typed_message->~TactilePositionData();
}

size_t size_function__TactilePositionData__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<omniglove_interfaces::msg::TactilePointPosition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactilePositionData__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<omniglove_interfaces::msg::TactilePointPosition> *>(untyped_member);
  return &member[index];
}

void * get_function__TactilePositionData__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<omniglove_interfaces::msg::TactilePointPosition> *>(untyped_member);
  return &member[index];
}

void fetch_function__TactilePositionData__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const omniglove_interfaces::msg::TactilePointPosition *>(
    get_const_function__TactilePositionData__points(untyped_member, index));
  auto & value = *reinterpret_cast<omniglove_interfaces::msg::TactilePointPosition *>(untyped_value);
  value = item;
}

void assign_function__TactilePositionData__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<omniglove_interfaces::msg::TactilePointPosition *>(
    get_function__TactilePositionData__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const omniglove_interfaces::msg::TactilePointPosition *>(untyped_value);
  item = value;
}

void resize_function__TactilePositionData__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<omniglove_interfaces::msg::TactilePointPosition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TactilePositionData_message_member_array[4] = {
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePositionData, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinate_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePositionData, coordinate_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePositionData, unit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<omniglove_interfaces::msg::TactilePointPosition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::TactilePositionData, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactilePositionData__points,  // size() function pointer
    get_const_function__TactilePositionData__points,  // get_const(index) function pointer
    get_function__TactilePositionData__points,  // get(index) function pointer
    fetch_function__TactilePositionData__points,  // fetch(index, &value) function pointer
    assign_function__TactilePositionData__points,  // assign(index, value) function pointer
    resize_function__TactilePositionData__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TactilePositionData_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "TactilePositionData",  // message name
  4,  // number of fields
  sizeof(omniglove_interfaces::msg::TactilePositionData),
  TactilePositionData_message_member_array,  // message members
  TactilePositionData_init_function,  // function to initialize message memory (memory has to be allocated)
  TactilePositionData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TactilePositionData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TactilePositionData_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::TactilePositionData>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::TactilePositionData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, TactilePositionData)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::TactilePositionData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
