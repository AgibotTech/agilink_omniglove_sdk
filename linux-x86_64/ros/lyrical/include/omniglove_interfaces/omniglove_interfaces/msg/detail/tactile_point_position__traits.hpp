// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/TactilePointPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/tactile_point_position.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_point_position__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactilePointPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TactilePointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TactilePointPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::TactilePointPosition>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).x,
    std::forward<T>(msg).y,
    std::forward<T>(msg).z);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::TactilePointPosition>()
{
  return "omniglove_interfaces::msg::TactilePointPosition";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::TactilePointPosition>()
{
  return "omniglove_interfaces/msg/TactilePointPosition";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::TactilePointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::TactilePointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::TactilePointPosition>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::TactilePointPosition>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "x",
    "y",
    "z",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__TRAITS_HPP_
