// Generated by gencpp from file my_robot_msgs/ComputeDiskAreaRequest.msg
// DO NOT EDIT!


#ifndef MY_ROBOT_MSGS_MESSAGE_COMPUTEDISKAREAREQUEST_H
#define MY_ROBOT_MSGS_MESSAGE_COMPUTEDISKAREAREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_robot_msgs
{
template <class ContainerAllocator>
struct ComputeDiskAreaRequest_
{
  typedef ComputeDiskAreaRequest_<ContainerAllocator> Type;

  ComputeDiskAreaRequest_()
    : radius(0.0)  {
    }
  ComputeDiskAreaRequest_(const ContainerAllocator& _alloc)
    : radius(0.0)  {
  (void)_alloc;
    }



   typedef double _radius_type;
  _radius_type radius;





  typedef boost::shared_ptr< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeDiskAreaRequest_

typedef ::my_robot_msgs::ComputeDiskAreaRequest_<std::allocator<void> > ComputeDiskAreaRequest;

typedef boost::shared_ptr< ::my_robot_msgs::ComputeDiskAreaRequest > ComputeDiskAreaRequestPtr;
typedef boost::shared_ptr< ::my_robot_msgs::ComputeDiskAreaRequest const> ComputeDiskAreaRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator1> & lhs, const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator2> & rhs)
{
  return lhs.radius == rhs.radius;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator1> & lhs, const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "34d1b51a3aa2a07a0194bc3c5de27677";
  }

  static const char* value(const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x34d1b51a3aa2a07aULL;
  static const uint64_t static_value2 = 0x0194bc3c5de27677ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_robot_msgs/ComputeDiskAreaRequest";
  }

  static const char* value(const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 radius\n"
;
  }

  static const char* value(const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeDiskAreaRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_robot_msgs::ComputeDiskAreaRequest_<ContainerAllocator>& v)
  {
    s << indent << "radius: ";
    Printer<double>::stream(s, indent + "  ", v.radius);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_ROBOT_MSGS_MESSAGE_COMPUTEDISKAREAREQUEST_H
