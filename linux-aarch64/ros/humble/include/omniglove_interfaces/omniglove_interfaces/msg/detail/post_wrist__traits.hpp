// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/post_wrist__struct.hpp"
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

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::msg::PostWrist & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PostWrist & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PostWrist>()
{
  return "omniglove_interfaces::msg::PostWrist";
}

template<>
inline const char * name<omniglove_interfaces::msg::PostWrist>()
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

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__TRAITS_HPP_
