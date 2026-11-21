// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PoseNode.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/pose_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'emf'
#include "omniglove_interfaces/msg/detail/pose_emf__traits.hpp"
// Member 'imu'
#include "omniglove_interfaces/msg/detail/pose_imu__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: emf
  {
    out << "emf: ";
    to_flow_style_yaml(msg.emf, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: emf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emf:\n";
    to_block_style_yaml(msg.emf, out, indentation + 2);
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseNode & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::msg::PoseNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PoseNode & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PoseNode>()
{
  return "omniglove_interfaces::msg::PoseNode";
}

template<>
inline const char * name<omniglove_interfaces::msg::PoseNode>()
{
  return "omniglove_interfaces/msg/PoseNode";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PoseNode>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::PoseEmf>::value && has_fixed_size<omniglove_interfaces::msg::PoseImu>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PoseNode>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::PoseEmf>::value && has_bounded_size<omniglove_interfaces::msg::PoseImu>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::PoseNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__TRAITS_HPP_
