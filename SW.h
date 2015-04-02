#ifndef __SW_H
#define __SW_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class SW_Strings {
  public:
    static ::x10::lang::String sl__57;
};

class SW : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::SW* SW____this__SW();
    void _constructor();
    
    static ::SW* _make();
    
    virtual void __fieldInitializers_SW();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SW_H

class SW;

#ifndef SW_H_NODEPS
#define SW_H_NODEPS
#ifndef SW_H_GENERICS
#define SW_H_GENERICS
#endif // SW_H_GENERICS
#endif // __SW_H_NODEPS
