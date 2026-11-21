// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "omniglove_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace omniglove_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_omniglove_interfaces
cdr_serialize(
  const omniglove_interfaces::msg::PostFingerJoints & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_omniglove_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  omniglove_interfaces::msg::PostFingerJoints & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_omniglove_interfaces
get_serialized_size(
  const omniglove_interfaces::msg::PostFingerJoints & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_omniglove_interfaces
max_serialized_size_PostFingerJoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace omniglove_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_omniglove_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, omniglove_interfaces, msg, PostFingerJoints)();

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
