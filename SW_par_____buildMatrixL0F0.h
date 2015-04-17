#ifndef __SW_PAR_____BUILDMATRIXL0F0_H
#define __SW_PAR_____BUILDMATRIXL0F0_H

#include <x10rt.h>


#define X10_COMPILER_WS_FINISHFRAME_H_NODEPS
#include <x10/compiler/ws/FinishFrame.h>
#undef X10_COMPILER_WS_FINISHFRAME_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par_____buildMatrixL0F0 : public ::x10::compiler::ws::FinishFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    void _constructor(::x10::compiler::ws::Frame* up) {
        (this)->::x10::compiler::ws::FinishFrame::_constructor(up);
        
    }
    static ::SW_par_____buildMatrixL0F0* _make(::x10::compiler::ws::Frame* up)
    {
        ::SW_par_____buildMatrixL0F0* this_ = new (::x10aux::alloc_z< ::SW_par_____buildMatrixL0F0>()) ::SW_par_____buildMatrixL0F0();
        this_->_constructor(up);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____buildMatrixL0F0* o);
    
    static ::SW_par_____buildMatrixL0F0* _make(x10_int x, ::SW_par_____buildMatrixL0F0* o);
    
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

#endif // SW_PAR_____BUILDMATRIXL0F0_H

class SW_par_____buildMatrixL0F0;

#ifndef SW_PAR_____BUILDMATRIXL0F0_H_NODEPS
#define SW_PAR_____BUILDMATRIXL0F0_H_NODEPS
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/Header.h>
#include <x10/lang/Int.h>
#ifndef SW_PAR_____BUILDMATRIXL0F0_H_GENERICS
#define SW_PAR_____BUILDMATRIXL0F0_H_GENERICS
#endif // SW_PAR_____BUILDMATRIXL0F0_H_GENERICS
#endif // __SW_PAR_____BUILDMATRIXL0F0_H_NODEPS
