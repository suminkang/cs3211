#ifndef __SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H
#define __SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H

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
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
class SW_par_____buildMatrixL0IFF0F0B0;
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
class SW_par_____buildMatrixL0IFF0;
class SW_par_____buildMatrixL0IFF0F0;
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0;
namespace x10 { namespace compiler { 
class StackAllocate;
} } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
class SW_par_____buildMatrixL0;
class SW_par_____buildMatrix;
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0;
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0A0;
class SW_par;
namespace x10 { namespace lang { 
class String;
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
class Exception;
} } 
namespace x10 { namespace compiler { namespace ws { 
class AsyncFrame;
} } } 
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0A1;
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace compiler { 
class SuppressTransientError;
} } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par_____buildMatrixL0IFF0F0B0L0 : public ::x10::compiler::ws::RegularFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(_pc);
    
    x10_long FMGL(i__54557);
    
    x10_long FMGL(g);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff) {
        (this)->::x10::compiler::ws::RegularFrame::_constructor(up,
                                                                ff);
        
    }
    static ::SW_par_____buildMatrixL0IFF0F0B0L0* _make(::x10::compiler::ws::Frame* up,
                                                       ::x10::compiler::ws::FinishFrame* ff)
    {
        ::SW_par_____buildMatrixL0IFF0F0B0L0* this_ = new (::x10aux::alloc_z< ::SW_par_____buildMatrixL0IFF0F0B0L0>()) ::SW_par_____buildMatrixL0IFF0F0B0L0();
        this_->_constructor(up, ff);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____buildMatrixL0IFF0F0B0L0* o);
    
    static ::SW_par_____buildMatrixL0IFF0F0B0L0* _make(x10_int x,
                                                       ::SW_par_____buildMatrixL0IFF0F0B0L0* o);
    
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

#endif // SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H

class SW_par_____buildMatrixL0IFF0F0B0L0;

#ifndef SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_NODEPS
#define SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/compiler/ws/Worker.h>
#include <SW_par_____buildMatrixL0IFF0F0B0.h>
#include <x10/compiler/ws/Frame.h>
#include <SW_par_____buildMatrixL0IFF0.h>
#include <SW_par_____buildMatrixL0IFF0F0.h>
#include <x10/lang/Boolean.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0.h>
#include <x10/compiler/StackAllocate.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <SW_par_____buildMatrixL0.h>
#include <SW_par_____buildMatrix.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0.h>
#include <x10/xrx/Deque.h>
#include <x10/lang/Any.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0A0.h>
#include <SW_par.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Char.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/ws/AsyncFrame.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0A1.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/SuppressTransientError.h>
#include <x10/compiler/Header.h>
#ifndef SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_GENERICS
#define SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_GENERICS
#endif // SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_GENERICS
#endif // __SW_PAR_____BUILDMATRIXL0IFF0F0B0L0_H_NODEPS
