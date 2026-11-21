// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_thumb_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostThumbJoints_ip_flexion
{
public:
  explicit Init_PostThumbJoints_ip_flexion(::omniglove_interfaces::msg::PostThumbJoints & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostThumbJoints ip_flexion(::omniglove_interfaces::msg::PostThumbJoints::_ip_flexion_type arg)
  {
    msg_.ip_flexion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbJoints msg_;
};

class Init_PostThumbJoints_mcp_flexion
{
public:
  explicit Init_PostThumbJoints_mcp_flexion(::omniglove_interfaces::msg::PostThumbJoints & msg)
  : msg_(msg)
  {}
  Init_PostThumbJoints_ip_flexion mcp_flexion(::omniglove_interfaces::msg::PostThumbJoints::_mcp_flexion_type arg)
  {
    msg_.mcp_flexion = std::move(arg);
    return Init_PostThumbJoints_ip_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbJoints msg_;
};

class Init_PostThumbJoints_cmc_flexion
{
public:
  explicit Init_PostThumbJoints_cmc_flexion(::omniglove_interfaces::msg::PostThumbJoints & msg)
  : msg_(msg)
  {}
  Init_PostThumbJoints_mcp_flexion cmc_flexion(::omniglove_interfaces::msg::PostThumbJoints::_cmc_flexion_type arg)
  {
    msg_.cmc_flexion = std::move(arg);
    return Init_PostThumbJoints_mcp_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbJoints msg_;
};

class Init_PostThumbJoints_cmc_abduction
{
public:
  explicit Init_PostThumbJoints_cmc_abduction(::omniglove_interfaces::msg::PostThumbJoints & msg)
  : msg_(msg)
  {}
  Init_PostThumbJoints_cmc_flexion cmc_abduction(::omniglove_interfaces::msg::PostThumbJoints::_cmc_abduction_type arg)
  {
    msg_.cmc_abduction = std::move(arg);
    return Init_PostThumbJoints_cmc_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbJoints msg_;
};

class Init_PostThumbJoints_cmc_rotation
{
public:
  Init_PostThumbJoints_cmc_rotation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostThumbJoints_cmc_abduction cmc_rotation(::omniglove_interfaces::msg::PostThumbJoints::_cmc_rotation_type arg)
  {
    msg_.cmc_rotation = std::move(arg);
    return Init_PostThumbJoints_cmc_abduction(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbJoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostThumbJoints>()
{
  return omniglove_interfaces::msg::builder::Init_PostThumbJoints_cmc_rotation();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__BUILDER_HPP_
