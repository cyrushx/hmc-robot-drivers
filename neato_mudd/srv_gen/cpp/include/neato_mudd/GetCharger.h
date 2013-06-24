/* Auto-generated by genmsg_cpp for file /home/robotics/groovy_workspace/sandbox/neato_mudd/srv/GetCharger.srv */
#ifndef NEATO_MUDD_SERVICE_GETCHARGER_H
#define NEATO_MUDD_SERVICE_GETCHARGER_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace neato_mudd
{
template <class ContainerAllocator>
struct GetChargerRequest_ {
  typedef GetChargerRequest_<ContainerAllocator> Type;

  GetChargerRequest_()
  {
  }

  GetChargerRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neato_mudd::GetChargerRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetChargerRequest
typedef  ::neato_mudd::GetChargerRequest_<std::allocator<void> > GetChargerRequest;

typedef boost::shared_ptr< ::neato_mudd::GetChargerRequest> GetChargerRequestPtr;
typedef boost::shared_ptr< ::neato_mudd::GetChargerRequest const> GetChargerRequestConstPtr;


template <class ContainerAllocator>
struct GetChargerResponse_ {
  typedef GetChargerResponse_<ContainerAllocator> Type;

  GetChargerResponse_()
  : Value(0)
  {
  }

  GetChargerResponse_(const ContainerAllocator& _alloc)
  : Value(0)
  {
  }

  typedef int64_t _Value_type;
  int64_t Value;


  typedef boost::shared_ptr< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neato_mudd::GetChargerResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetChargerResponse
typedef  ::neato_mudd::GetChargerResponse_<std::allocator<void> > GetChargerResponse;

typedef boost::shared_ptr< ::neato_mudd::GetChargerResponse> GetChargerResponsePtr;
typedef boost::shared_ptr< ::neato_mudd::GetChargerResponse const> GetChargerResponseConstPtr;

struct GetCharger
{

typedef GetChargerRequest Request;
typedef GetChargerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetCharger
} // namespace neato_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetChargerRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::neato_mudd::GetChargerRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetChargerRequest";
  }

  static const char* value(const  ::neato_mudd::GetChargerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::neato_mudd::GetChargerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::neato_mudd::GetChargerRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetChargerResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const  ::neato_mudd::GetChargerResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc4eaea9f91ff0a22ULL;
  static const uint64_t static_value2 = 0xd886aaa44e9be3bfULL;
};

template<class ContainerAllocator>
struct DataType< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetChargerResponse";
  }

  static const char* value(const  ::neato_mudd::GetChargerResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 Value\n\
\n\
\n\
";
  }

  static const char* value(const  ::neato_mudd::GetChargerResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::neato_mudd::GetChargerResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neato_mudd::GetChargerRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetChargerRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neato_mudd::GetChargerResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetChargerResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<neato_mudd::GetCharger> {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetCharger&) { return value(); } 
};

template<>
struct DataType<neato_mudd::GetCharger> {
  static const char* value() 
  {
    return "neato_mudd/GetCharger";
  }

  static const char* value(const neato_mudd::GetCharger&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<neato_mudd::GetChargerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetChargerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<neato_mudd::GetChargerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetCharger";
  }

  static const char* value(const neato_mudd::GetChargerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<neato_mudd::GetChargerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetChargerResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<neato_mudd::GetChargerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetCharger";
  }

  static const char* value(const neato_mudd::GetChargerResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // NEATO_MUDD_SERVICE_GETCHARGER_H
