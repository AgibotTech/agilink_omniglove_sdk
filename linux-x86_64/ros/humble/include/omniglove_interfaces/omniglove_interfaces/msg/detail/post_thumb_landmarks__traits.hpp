// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cmc'
// Member 'mcp'
// Member 'ip'
// Member 'tip'
#include "omniglove_interfaces/msg/detail/pose6__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostThumbLandmarks & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmc
  {
    out << "cmc: ";
    to_flow_style_yaml(msg.cmc, out);
    out << ", ";
  }

  // member: mcp
  {
    out << "mcp: ";
    to_flow_style_yaml(msg.mcp, out);
    out << ", ";
  }

  // member: ip
  {
    out << "ip: ";
    to_flow_style_yaml(msg.ip, out);
    out << ", ";
  }

  // member: tip
  {
    out << "tip: ";
    to_flow_style_yaml(msg.tip, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostThumbLandmarks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmc:\n";
    to_block_style_yaml(msg.cmc, out, indentation + 2);
  }

  // member: mcp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcp:\n";
    to_block_style_yaml(msg.mcp, out, indentation + 2);
  }

  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip:\n";
    to_block_style_yaml(msg.ip, out, indentation + 2);
  }

  // member: tip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tip:\n";
    to_block_style_yaml(msg.tip, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostThumbLandmarks & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::PostThumbLandmarks & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PostThumbLandmarks & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PostThumbLandmarks>()
{
  return "omniglove_interfaces::msg::PostThumbLandmarks";
}

template<>
inline const char * name<omniglove_interfaces::msg::PostThumbLandmarks>()
{
  return "omniglove_interfaces/msg/PostThumbLandmarks";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PostThumbLandmarks>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::Pose6>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PostThumbLandmarks>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::Pose6>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::PostThumbLandmarks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__TRAITS_HPP_
