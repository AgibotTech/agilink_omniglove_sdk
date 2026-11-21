// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/TactileRegion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/tactile_region.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_region__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileRegion & msg,
  std::ostream & out)
{
  out << "{";
  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: columns
  {
    out << "columns: ";
    rosidl_generator_traits::value_to_yaml(msg.columns, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const TactileRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: columns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "columns: ";
    rosidl_generator_traits::value_to_yaml(msg.columns, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const TactileRegion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::TactileRegion>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).rows,
    std::forward<T>(msg).columns,
    std::forward<T>(msg).data);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::TactileRegion>()
{
  return "omniglove_interfaces::msg::TactileRegion";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::TactileRegion>()
{
  return "omniglove_interfaces/msg/TactileRegion";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::TactileRegion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::TactileRegion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::msg::TactileRegion>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::TactileRegion>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "rows",
    "columns",
    "data",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__TRAITS_HPP_
