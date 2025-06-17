// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interface:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interface/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interface
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_speed
{
public:
  explicit Init_MotorCommand_speed(::car_interface::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::car_interface::msg::MotorCommand speed(::car_interface::msg::MotorCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interface::msg::MotorCommand msg_;
};

class Init_MotorCommand_command
{
public:
  Init_MotorCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_speed command(::car_interface::msg::MotorCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MotorCommand_speed(msg_);
  }

private:
  ::car_interface::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interface::msg::MotorCommand>()
{
  return car_interface::msg::builder::Init_MotorCommand_command();
}

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
