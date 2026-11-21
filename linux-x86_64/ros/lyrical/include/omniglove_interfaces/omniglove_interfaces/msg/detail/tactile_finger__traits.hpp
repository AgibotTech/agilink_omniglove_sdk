// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/tactile_finger.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_finger__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tip'
// Member 'pad'
// Member 'middle'
// Member 'root'
#include "omniglove_interfaces/msg/detail/tactile_region__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileFinger & msg,
  std::ostream & out)
{
  out << "{";
  // member: tip
  {
    out << "tip: ";
    to_flow_style_yaml(msg.tip, out);
    out << ", ";
  }

  // member: pad
  {
    out << "pad: ";
    to_flow_style_yaml(msg.pad, out);
    out << ", ";
  }

  // member: middle
  {
    out << "middle: ";
    to_flow_style_yaml(msg.middle, out);
    out << ", ";
  }

  // member: root
  {
    out << "root: ";
    to_flow_style_yaml(msg.root, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TactileFinger & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tip:\n";
    to_block_style_yaml(msg.tip, out, indentation + 2);
  }

  // member: pad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pad:\n";
    to_block_style_yaml(msg.pad, out, indentation + 2);
  }

  // member: middle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle:\n";
    to_block_style_yaml(msg.middle, out, indentation + 2);
  }

  // member: root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root:\n";
    to_block_style_yaml(msg.root, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TactileFinger & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::TactileFinger>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).tip,
    std::forward<T>(msg).pad,
    std::forward<T>(msg).middle,
    std::forward<T>(msg).root);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::TactileFinger>()
{
  return "omniglove_interfaces::msg::TactileFinger";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::TactileFinger>()
{
  return "omniglove_interfaces/msg/TactileFinger";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::TactileFinger>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::TactileRegion>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::TactileFinger>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::TactileRegion>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::TactileFinger>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::TactileFinger>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "tip",
    "pad",
    "middle",
    "root",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__TRAITS_HPP_
