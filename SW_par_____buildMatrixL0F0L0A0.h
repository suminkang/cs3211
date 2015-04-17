#ifndef __SW_PAR_____BUILDMATRIXL0F0L0A0_H
#define __SW_PAR_____BUILDMATRIXL0F0L0A0_H

#include <x10rt.h>


#define X10_COMPILER_WS_ASYNCFRAME_H_NODEPS
#include <x10/compiler/ws/AsyncFrame.h>
#undef X10_COMPILER_WS_ASYNCFRAME_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace compiler { 
class SuppressTransientError;
} } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par_____buildMatrixL0F0L0A0 : public ::x10::compiler::ws::AsyncFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(y);
    
    ::x10::util::Pair<x10_int, x10_int> FMGL(elem_p);
    
    x10_int FMGL(x);
    
    x10_long FMGL(xCharacterIndex);
    
    x10_long FMGL(yCharacterIndex);
    
    x10_int FMGL(sim);
    
    virtual void move(::x10::compiler::ws::FinishFrame* ff);
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::util::Pair<x10_int, x10_int> elem_p) {
        (this)->::x10::compiler::ws::AsyncFrame::_constructor(up);
        this->FMGL(elem_p) = elem_p;
    }
    static ::SW_par_____buildMatrixL0F0L0A0* _make(::x10::compiler::ws::Frame* up,
                                                   ::x10::util::Pair<x10_int, x10_int> elem_p)
    {
        ::SW_par_____buildMatrixL0F0L0A0* this_ = new (::x10aux::alloc_z< ::SW_par_____buildMatrixL0F0L0A0>()) ::SW_par_____buildMatrixL0F0L0A0();
        this_->_constructor(up, elem_p);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____buildMatrixL0F0L0A0* o);
    
    static ::SW_par_____buildMatrixL0F0L0A0* _make(x10_int x,
                                                   ::SW_par_____buildMatrixL0F0L0A0* o);
    
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

#endif // SW_PAR_____BUILDMATRIXL0F0L0A0_H

class SW_par_____buildMatrixL0F0L0A0;

#ifndef SW_PAR_____BUILDMATRIXL0F0L0A0_H_NODEPS
#define SW_PAR_____BUILDMATRIXL0F0L0A0_H_NODEPS
#include <x10/compiler/ws/AsyncFrame.h>
#include <x10/lang/Int.h>
#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/SuppressTransientError.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/Header.h>
#ifndef SW_PAR_____BUILDMATRIXL0F0L0A0_H_GENERICS
#define SW_PAR_____BUILDMATRIXL0F0L0A0_H_GENERICS
#endif // SW_PAR_____BUILDMATRIXL0F0L0A0_H_GENERICS
#endif // __SW_PAR_____BUILDMATRIXL0F0L0A0_H_NODEPS
