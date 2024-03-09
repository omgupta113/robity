// Generated by gencpp from file ros_arduino_msgs/AnalogSensorWriteResponse.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_ANALOGSENSORWRITERESPONSE_H
#define ROS_ARDUINO_MSGS_MESSAGE_ANALOGSENSORWRITERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct AnalogSensorWriteResponse_
{
  typedef AnalogSensorWriteResponse_<ContainerAllocator> Type;

  AnalogSensorWriteResponse_()
    {
    }
  AnalogSensorWriteResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AnalogSensorWriteResponse_

typedef ::ros_arduino_msgs::AnalogSensorWriteResponse_<std::allocator<void> > AnalogSensorWriteResponse;

typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogSensorWriteResponse > AnalogSensorWriteResponsePtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogSensorWriteResponse const> AnalogSensorWriteResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/AnalogSensorWriteResponse";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AnalogSensorWriteResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ros_arduino_msgs::AnalogSensorWriteResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_ANALOGSENSORWRITERESPONSE_H