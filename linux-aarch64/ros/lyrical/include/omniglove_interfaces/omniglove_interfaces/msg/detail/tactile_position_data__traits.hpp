// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/tactile_position_data.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "omniglove_interfaces/msg/detail/tactile_point_position__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactilePositionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: coordinate_frame
  {
    out << "coordinate_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_frame, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
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
  const TactilePositionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: coordinate_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_frame, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TactilePositionData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::TactilePositionData>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).count,
    std::forward<T>(msg).coordinate_frame,
    std::forward<T>(msg).unit,
    std::forward<T>(msg).points);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::TactilePositionData>()
{
  return "omniglove_interfaces::msg::TactilePositionData";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::TactilePositionData>()
{
  return "omniglove_interfaces/msg/TactilePositionData";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::TactilePositionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::TactilePositionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::msg::TactilePositionData>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::TactilePositionData>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "count",
    "coordinate_frame",
    "unit",
    "points",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__TRAITS_HPP_
