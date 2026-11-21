// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/post_wrist.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_wrist__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'landmark'
#include "omniglove_interfaces/msg/detail/pose6__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostWrist & msg,
  std::ostream & out)
{
  out << "{";
  // member: landmark
  {
    out << "landmark: ";
    to_flow_style_yaml(msg.landmark, out);
    out << ", ";
  }

  // member: quaternion_xyzw
  {
    if (msg.quaternion_xyzw.size() == 0) {
      out << "quaternion_xyzw: []";
    } else {
      out << "quaternion_xyzw: [";
      size_t pending_items = msg.quaternion_xyzw.size();
      for (auto item : msg.quaternion_xyzw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostWrist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: landmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landmark:\n";
    to_block_style_yaml(msg.landmark, out, indentation + 2);
  }

  // member: quaternion_xyzw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternion_xyzw.size() == 0) {
      out << "quaternion_xyzw: []\n";
    } else {
      out << "quaternion_xyzw:\n";
      for (auto item : msg.quaternion_xyzw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostWrist & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::PostWrist>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).landmark,
    std::forward<T>(msg).quaternion_xyzw);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::PostWrist>()
{
  return "omniglove_interfaces::msg::PostWrist";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::PostWrist>()
{
  return "omniglove_interfaces/msg/PostWrist";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PostWrist>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::Pose6>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PostWrist>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::Pose6>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::PostWrist>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::PostWrist>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "landmark",
    "quaternion_xyzw",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_
