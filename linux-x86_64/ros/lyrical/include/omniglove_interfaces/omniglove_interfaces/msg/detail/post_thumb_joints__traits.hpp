// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/post_thumb_joints.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_thumb_joints__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::PostThumbJoints>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).cmc_rotation,
    std::forward<T>(msg).cmc_abduction,
    std::forward<T>(msg).cmc_flexion,
    std::forward<T>(msg).mcp_flexion,
    std::forward<T>(msg).ip_flexion);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::PostThumbJoints>()
{
  return "omniglove_interfaces::msg::PostThumbJoints";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::PostThumbJoints>()
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

template<>
struct MessageTraits<omniglove_interfaces::msg::PostThumbJoints>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "cmc_rotation",
    "cmc_abduction",
    "cmc_flexion",
    "mcp_flexion",
    "ip_flexion",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__TRAITS_HPP_
