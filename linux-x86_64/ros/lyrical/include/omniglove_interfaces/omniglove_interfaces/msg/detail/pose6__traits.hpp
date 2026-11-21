// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/pose6.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose6 & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_m
  {
    if (msg.position_m.size() == 0) {
      out << "position_m: []";
    } else {
      out << "position_m: [";
      size_t pending_items = msg.position_m.size();
      for (auto item : msg.position_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Pose6 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_m.size() == 0) {
      out << "position_m: []\n";
    } else {
      out << "position_m:\n";
      for (auto item : msg.position_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const Pose6 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::Pose6>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).position_m,
    std::forward<T>(msg).quaternion_xyzw);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::Pose6>()
{
  return "omniglove_interfaces::msg::Pose6";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::Pose6>()
{
  return "omniglove_interfaces/msg/Pose6";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::Pose6>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::Pose6>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::Pose6>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::Pose6>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "position_m",
    "quaternion_xyzw",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__TRAITS_HPP_
