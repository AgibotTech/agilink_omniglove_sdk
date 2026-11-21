// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostFingerJoints_dip_flexion
{
public:
  explicit Init_PostFingerJoints_dip_flexion(::omniglove_interfaces::msg::PostFingerJoints & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostFingerJoints dip_flexion(::omniglove_interfaces::msg::PostFingerJoints::_dip_flexion_type arg)
  {
    msg_.dip_flexion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerJoints msg_;
};

class Init_PostFingerJoints_pip_flexion
{
public:
  explicit Init_PostFingerJoints_pip_flexion(::omniglove_interfaces::msg::PostFingerJoints & msg)
  : msg_(msg)
  {}
  Init_PostFingerJoints_dip_flexion pip_flexion(::omniglove_interfaces::msg::PostFingerJoints::_pip_flexion_type arg)
  {
    msg_.pip_flexion = std::move(arg);
    return Init_PostFingerJoints_dip_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerJoints msg_;
};

class Init_PostFingerJoints_mcp_flexion
{
public:
  explicit Init_PostFingerJoints_mcp_flexion(::omniglove_interfaces::msg::PostFingerJoints & msg)
  : msg_(msg)
  {}
  Init_PostFingerJoints_pip_flexion mcp_flexion(::omniglove_interfaces::msg::PostFingerJoints::_mcp_flexion_type arg)
  {
    msg_.mcp_flexion = std::move(arg);
    return Init_PostFingerJoints_pip_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerJoints msg_;
};

class Init_PostFingerJoints_mcp_abduction
{
public:
  Init_PostFingerJoints_mcp_abduction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostFingerJoints_mcp_flexion mcp_abduction(::omniglove_interfaces::msg::PostFingerJoints::_mcp_abduction_type arg)
  {
    msg_.mcp_abduction = std::move(arg);
    return Init_PostFingerJoints_mcp_flexion(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerJoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostFingerJoints>()
{
  return omniglove_interfaces::msg::builder::Init_PostFingerJoints_mcp_abduction();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__BUILDER_HPP_
