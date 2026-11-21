// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/ImuRawSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/imu_raw_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuRawSample_axes
{
public:
  Init_ImuRawSample_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::omniglove_interfaces::msg::ImuRawSample axes(::omniglove_interfaces::msg::ImuRawSample::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::ImuRawSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::ImuRawSample>()
{
  return omniglove_interfaces::msg::builder::Init_ImuRawSample_axes();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__BUILDER_HPP_
