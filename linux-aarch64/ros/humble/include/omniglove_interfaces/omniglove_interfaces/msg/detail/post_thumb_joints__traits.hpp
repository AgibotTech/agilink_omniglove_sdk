// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/post_thumb_joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostThumbJoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmc_rotation
  {
    out << "cmc_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_rotation, out);
    out << ", ";
  }

  // member: cmc_abduction
  {
    out << "cmc_abduction: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_abduction, out);
    out << ", ";
  }

  // member: cmc_flexion
  {
    out << "cmc_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_flexion, out);
    out << ", ";
  }

  // member: mcp_flexion
  {
    out << "mcp_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_flexion, out);
    out << ", ";
  }

  // member: ip_flexion
  {
    out << "ip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_flexion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostThumbJoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmc_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmc_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_rotation, out);
    out << "\n";
  }

  // member: cmc_abduction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmc_abduction: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_abduction, out);
    out << "\n";
  }

  // member: cmc_flexion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmc_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.cmc_flexion, out);
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

  // member: ip_flexion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_flexion: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_flexion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostThumbJoints & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::PostThumbJoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PostThumbJoints & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PostThumbJoints>()
{
  return "omniglove_interfaces::msg::PostThumbJoints";
}

template<>
inline const char * name<omniglove_interfaces::msg::PostThumbJoints>()
{
  return "omniglove_interfaces/msg/PostThumbJoints";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PostThumbJoints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PostThumbJoints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::PostThumbJoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_
