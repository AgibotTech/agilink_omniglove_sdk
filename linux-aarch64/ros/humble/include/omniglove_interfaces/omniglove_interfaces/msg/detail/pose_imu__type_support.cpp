// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/detail/pose_imu__struct.hpp"
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

void PoseImu_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) omniglove_interfaces::msg::PoseImu(_init);
}

void PoseImu_fini_function(void * message_memory)
{
  auto typed_message = static_cast<omniglove_interfaces::msg::PoseImu *>(message_memory);
  typed_message->~PoseImu();
}

size_t size_function__PoseImu__roll_pitch_yaw_cdeg(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PoseImu__roll_pitch_yaw_cdeg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseImu__roll_pitch_yaw_cdeg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseImu__roll_pitch_yaw_cdeg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__PoseImu__roll_pitch_yaw_cdeg(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__PoseImu__roll_pitch_yaw_cdeg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__PoseImu__roll_pitch_yaw_cdeg(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseImu_message_member_array[2] = {
  {
    "roll_pitch_yaw_cdeg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PoseImu, roll_pitch_yaw_cdeg),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseImu__roll_pitch_yaw_cdeg,  // size() function pointer
    get_const_function__PoseImu__roll_pitch_yaw_cdeg,  // get_const(index) function pointer
    get_function__PoseImu__roll_pitch_yaw_cdeg,  // get(index) function pointer
    fetch_function__PoseImu__roll_pitch_yaw_cdeg,  // fetch(index, &value) function pointer
    assign_function__PoseImu__roll_pitch_yaw_cdeg,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omniglove_interfaces::msg::PoseImu, flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseImu_message_members = {
  "omniglove_interfaces::msg",  // message namespace
  "PoseImu",  // message name
  2,  // number of fields
  sizeof(omniglove_interfaces::msg::PoseImu),
  PoseImu_message_member_array,  // message members
  PoseImu_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseImu_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseImu_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseImu_message_members,
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
get_message_type_support_handle<omniglove_interfaces::msg::PoseImu>()
{
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PoseImu_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, omniglove_interfaces, msg, PoseImu)() {
  return &::omniglove_interfaces::msg::rosidl_typesupport_introspection_cpp::PoseImu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
