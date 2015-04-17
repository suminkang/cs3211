#ifndef __SW_PAR_____MAINIFT0_H
#define __SW_PAR_____MAINIFT0_H

#include <x10rt.h>


#define X10_COMPILER_WS_REGULARFRAME_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#undef X10_COMPILER_WS_REGULARFRAME_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
class SW_par_____main;
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
class SW_par;
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace compiler { 
class SuppressTransientError;
} } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par_____mainIFT0_Strings {
  public:
    static ::x10::lang::String sl__60248;
    static ::x10::lang::String sl__60249;
};

class SW_par_____mainIFT0 : public ::x10::compiler::ws::RegularFrame   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(_pc);
    
    ::x10::io::FileReader* FMGL(reader);
    
    ::x10::lang::String* FMGL(first_line);
    
    ::x10::lang::Rail< ::x10::lang::String* >* FMGL(elements);
    
    x10_long FMGL(size);
    
    ::x10::array::Array_2<x10_int>* FMGL(sim_score_matrix);
    
    x10_long FMGL(lineNum);
    
    x10_int FMGL(maxScore);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff) {
        (this)->::x10::compiler::ws::RegularFrame::_constructor(up, ff);
        
    }
    static ::SW_par_____mainIFT0* _make(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff)
    {
        ::SW_par_____mainIFT0* this_ = new (::x10aux::alloc_z< ::SW_par_____mainIFT0>()) ::SW_par_____mainIFT0();
        this_->_constructor(up, ff);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____mainIFT0* o);
    
    static ::SW_par_____mainIFT0* _make(x10_int x, ::SW_par_____mainIFT0* o);
    
    virtual ::x10::compiler::ws::Frame* remap();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SW_PAR_____MAINIFT0_H

class SW_par_____mainIFT0;

#ifndef SW_PAR_____MAINIFT0_H_NODEPS
#define SW_PAR_____MAINIFT0_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/compiler/ws/Worker.h>
#include <SW_par_____main.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Char.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Exception.h>
#include <x10/io/InputStreamReader.h>
#include <SW_par.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/SuppressTransientError.h>
#include <x10/compiler/Header.h>
#include <x10/lang/String.h>
#ifndef SW_PAR_____MAINIFT0_H_GENERICS
#define SW_PAR_____MAINIFT0_H_GENERICS
#endif // SW_PAR_____MAINIFT0_H_GENERICS
#endif // __SW_PAR_____MAINIFT0_H_NODEPS
