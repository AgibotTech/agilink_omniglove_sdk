// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostFingerJoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: mcp_abduction
  {
    out << "mcp_abduction: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_abduction, out);
    out << ", ";
  }

  // member: mcp_flexion
  {
    out << "mcp_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_flexion, out);
    out << ", ";
  }

  // member: pip_flexion
  {
    out << "pip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.pip_flexion, out);
    out << ", ";
  }

  // member: dip_flexion
  {
    out << "dip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.dip_flexion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostFingerJoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mcp_abduction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcp_abduction: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_abduction, out);
    out << "\n";
  }

  // member: mcp_flexion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcp_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_flexion, out);
    out << "\n";
  }

  // member: pip_flexion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.pip_flexion, out);
    out << "\n";
  }

  // member: dip_flexion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.dip_flexion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostFingerJoints & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::PostFingerJoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PostFingerJoints & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PostFingerJoints>()
{
  return "omniglove_interfaces::msg::PostFingerJoints";
}

template<>
inline const char * name<omniglove_interfaces::msg::PostFingerJoints>()
{
  return "omniglove_interfaces/msg/PostFingerJoints";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PostFingerJoints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PostFingerJoints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::PostFingerJoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__TRAITS_HPP_
