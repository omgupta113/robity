// Generated by gencpp from file ros_arduino_msgs/AnalogPinModeRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_ANALOGPINMODEREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_ANALOGPINMODEREQUEST_H


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
struct AnalogPinModeRequest_
{
  typedef AnalogPinModeRequest_<ContainerAllocator> Type;

  AnalogPinModeRequest_()
    : pin(0)
    , direction(false)  {
    }
  AnalogPinModeRequest_(const ContainerAllocator& _alloc)
    : pin(0)
    , direction(false)  {
  (void)_alloc;
    }



   typedef uint8_t _pin_type;
  _pin_type pin;

   typedef uint8_t _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AnalogPinModeRequest_

typedef ::ros_arduino_msgs::AnalogPinModeRequest_<std::allocator<void> > AnalogPinModeRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogPinModeRequest > AnalogPinModeRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::AnalogPinModeRequest const> AnalogPinModeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pin == rhs.pin &&
    lhs.direction == rhs.direction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b10eff5e5e7e4623e1ee840cec92b372";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb10eff5e5e7e4623ULL;
  static const uint64_t static_value2 = 0xe1ee840cec92b372ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/AnalogPinModeRequest";
  }

  static const char* value(const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 pin\n"
"bool direction\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AnalogPinModeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::AnalogPinModeRequest_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pin);
    s << indent << "direction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_ANALOGPINMODEREQUEST_H
