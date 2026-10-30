// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/TactilePointPosition.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_point_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_TactilePointPosition_z
{
public:
  explicit Init_TactilePointPosition_z(::omniglove_interfaces::msg::TactilePointPosition & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::TactilePointPosition z(::omniglove_interfaces::msg::TactilePointPosition::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePointPosition msg_;
};

class Init_TactilePointPosition_y
{
public:
  explicit Init_TactilePointPosition_y(::omniglove_interfaces::msg::TactilePointPosition & msg)
  : msg_(msg)
  {}
  Init_TactilePointPosition_z y(::omniglove_interfaces::msg::TactilePointPosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TactilePointPosition_z(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePointPosition msg_;
};

class Init_TactilePointPosition_x
{
public:
  Init_TactilePointPosition_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactilePointPosition_y x(::omniglove_interfaces::msg::TactilePointPosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TactilePointPosition_y(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactilePointPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::TactilePointPosition>()
{
  return omniglove_interfaces::msg::builder::Init_TactilePointPosition_x();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__BUILDER_HPP_
