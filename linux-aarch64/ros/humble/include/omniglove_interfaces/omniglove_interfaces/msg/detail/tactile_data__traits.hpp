// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/TactileData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/tactile_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'thumb'
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'pinky'
#include "omniglove_interfaces/msg/detail/tactile_finger__traits.hpp"
// Member 'palm_surface'
#include "omniglove_interfaces/msg/detail/tactile_region__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileData & msg,
  std::ostream & out)
{
  out << "{";
  // member: mapped
  {
    out << "mapped: ";
    rosidl_generator_traits::value_to_yaml(msg.mapped, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: thumb
  {
    out << "thumb: ";
    to_flow_style_yaml(msg.thumb, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    to_flow_style_yaml(msg.index, out);
    out << ", ";
  }

  // member: middle
  {
    out << "middle: ";
    to_flow_style_yaml(msg.middle, out);
    out << ", ";
  }

  // member: ring
  {
    out << "ring: ";
    to_flow_style_yaml(msg.ring, out);
    out << ", ";
  }

  // member: pinky
  {
    out << "pinky: ";
    to_flow_style_yaml(msg.pinky, out);
    out << ", ";
  }

  // member: palm_surface
  {
    out << "palm_surface: ";
    to_flow_style_yaml(msg.palm_surface, out);
    out << ", ";
  }

  // member: unmapped_data
  {
    if (msg.unmapped_data.size() == 0) {
      out << "unmapped_data: []";
    } else {
      out << "unmapped_data: [";
      size_t pending_items = msg.unmapped_data.size();
      for (auto item : msg.unmapped_data) {
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
  const TactileData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mapped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapped: ";
    rosidl_generator_traits::value_to_yaml(msg.mapped, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: thumb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb:\n";
    to_block_style_yaml(msg.thumb, out, indentation + 2);
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index:\n";
    to_block_style_yaml(msg.index, out, indentation + 2);
  }

  // member: middle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle:\n";
    to_block_style_yaml(msg.middle, out, indentation + 2);
  }

  // member: ring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring:\n";
    to_block_style_yaml(msg.ring, out, indentation + 2);
  }

  // member: pinky
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pinky:\n";
    to_block_style_yaml(msg.pinky, out, indentation + 2);
  }

  // member: palm_surface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "palm_surface:\n";
    to_block_style_yaml(msg.palm_surface, out, indentation + 2);
  }

  // member: unmapped_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unmapped_data.size() == 0) {
      out << "unmapped_data: []\n";
    } else {
      out << "unmapped_data:\n";
      for (auto item : msg.unmapped_data) {
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

inline std::string to_yaml(const TactileData & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::TactileData & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::TactileData & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::TactileData>()
{
  return "omniglove_interfaces::msg::TactileData";
}

template<>
inline const char * name<omniglove_interfaces::msg::TactileData>()
{
  return "omniglove_interfaces/msg/TactileData";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::TactileData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::TactileData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::msg::TactileData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__TRAITS_HPP_
