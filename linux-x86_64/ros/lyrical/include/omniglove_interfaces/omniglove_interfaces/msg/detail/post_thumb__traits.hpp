// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostThumb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/post_thumb.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_thumb__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joints_rad'
#include "omniglove_interfaces/msg/detail/post_thumb_joints__traits.hpp"
// Member 'landmarks'
#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__traits.hpp"
// Member 'rx_tip_target'
#include "omniglove_interfaces/msg/detail/pose6__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostThumb & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints_rad
  {
    out << "joints_rad: ";
    to_flow_style_yaml(msg.joints_rad, out);
    out << ", ";
  }

  // member: landmarks
  {
    out << "landmarks: ";
    to_flow_style_yaml(msg.landmarks, out);
    out << ", ";
  }

  // member: rx_tip_target
  {
    out << "rx_tip_target: ";
    to_flow_style_yaml(msg.rx_tip_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostThumb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joints_rad:\n";
    to_block_style_yaml(msg.joints_rad, out, indentation + 2);
  }

  // member: landmarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landmarks:\n";
    to_block_style_yaml(msg.landmarks, out, indentation + 2);
  }

  // member: rx_tip_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_tip_target:\n";
    to_block_style_yaml(msg.rx_tip_target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostThumb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::PostThumb>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).joints_rad,
    std::forward<T>(msg).landmarks,
    std::forward<T>(msg).rx_tip_target);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::PostThumb>()
{
  return "omniglove_interfaces::msg::PostThumb";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::PostThumb>()
{
  return "omniglove_interfaces/msg/PostThumb";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PostThumb>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::Pose6>::value && has_fixed_size<omniglove_interfaces::msg::PostThumbJoints>::value && has_fixed_size<omniglove_interfaces::msg::PostThumbLandmarks>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PostThumb>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::Pose6>::value && has_bounded_size<omniglove_interfaces::msg::PostThumbJoints>::value && has_bounded_size<omniglove_interfaces::msg::PostThumbLandmarks>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::PostThumb>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::PostThumb>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "joints_rad",
    "landmarks",
    "rx_tip_target",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__TRAITS_HPP_
