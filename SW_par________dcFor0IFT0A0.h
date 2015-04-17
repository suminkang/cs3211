#ifndef __SW_PAR________DCFOR0IFT0A0_H
#define __SW_PAR________DCFOR0IFT0A0_H

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
#define X10_LANG_CHAR_H_NODEPS
#include <x10/lang/Char.h>
#undef X10_LANG_CHAR_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par________dcFor0IFT0A0 : public ::x10::compiler::ws::AsyncFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(___lower);
    
    x10_int FMGL(x10____var0);
    
    x10_int FMGL(x10____var1);
    
    ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* FMGL(diag);
    
    ::x10::lang::String* FMGL(seq1);
    
    ::x10::util::HashMap<x10_char, x10_int>* FMGL(alphabet_to_index);
    
    ::x10::lang::String* FMGL(seq2);
    
    ::x10::array::Array_2<x10_int>* FMGL(sim_score_matrix);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_M);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_I);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_J);
    
    x10_int FMGL(open);
    
    x10_int FMGL(extend);
    
    ::x10::array::Array_2<x10_int>* FMGL(matrix);
    
    virtual void move(::x10::compiler::ws::FinishFrame* ff);
    void _constructor(::x10::compiler::ws::Frame* up, x10_int ___lower, x10_int x10____var0,
                      x10_int x10____var1, ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag,
                      ::x10::lang::String* seq1, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                      ::x10::lang::String* seq2, ::x10::array::Array_2<x10_int>* sim_score_matrix,
                      ::x10::array::Array_2<x10_int>* mat_M,
                      ::x10::array::Array_2<x10_int>* mat_I,
                      ::x10::array::Array_2<x10_int>* mat_J,
                      x10_int open, x10_int extend, ::x10::array::Array_2<x10_int>* matrix) {
        (this)->::x10::compiler::ws::AsyncFrame::_constructor(
          up);
        this->FMGL(___lower) = ___lower;
        this->FMGL(x10____var0) = x10____var0;
        this->FMGL(x10____var1) = x10____var1;
        this->FMGL(diag) = diag;
        this->FMGL(seq1) = seq1;
        this->FMGL(alphabet_to_index) = alphabet_to_index;
        this->FMGL(seq2) = seq2;
        this->FMGL(sim_score_matrix) = sim_score_matrix;
        this->FMGL(mat_M) = mat_M;
        this->FMGL(mat_I) = mat_I;
        this->FMGL(mat_J) = mat_J;
        this->FMGL(open) = open;
        this->FMGL(extend) = extend;
        this->FMGL(matrix) = matrix;
    }
    static ::SW_par________dcFor0IFT0A0* _make(::x10::compiler::ws::Frame* up,
                                               x10_int ___lower,
                                               x10_int x10____var0,
                                               x10_int x10____var1,
                                               ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag,
                                               ::x10::lang::String* seq1,
                                               ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                                               ::x10::lang::String* seq2,
                                               ::x10::array::Array_2<x10_int>* sim_score_matrix,
                                               ::x10::array::Array_2<x10_int>* mat_M,
                                               ::x10::array::Array_2<x10_int>* mat_I,
                                               ::x10::array::Array_2<x10_int>* mat_J,
                                               x10_int open,
                                               x10_int extend,
                                               ::x10::array::Array_2<x10_int>* matrix)
    {
        ::SW_par________dcFor0IFT0A0* this_ = new (::x10aux::alloc_z< ::SW_par________dcFor0IFT0A0>()) ::SW_par________dcFor0IFT0A0();
        this_->_constructor(up, ___lower, x10____var0, x10____var1,
        diag, seq1, alphabet_to_index, seq2, sim_score_matrix,
        mat_M, mat_I, mat_J, open, extend, matrix);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par________dcFor0IFT0A0* o);
    
    static ::SW_par________dcFor0IFT0A0* _make(x10_int x,
                                               ::SW_par________dcFor0IFT0A0* o);
    
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

#endif // SW_PAR________DCFOR0IFT0A0_H

class SW_par________dcFor0IFT0A0;

#ifndef SW_PAR________DCFOR0IFT0A0_H_NODEPS
#define SW_PAR________DCFOR0IFT0A0_H_NODEPS
#include <x10/compiler/ws/AsyncFrame.h>
#include <x10/lang/Int.h>
#include <x10/util/Pair.h>
#include <x10/lang/Char.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <x10/array/Array_2.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/Header.h>
#ifndef SW_PAR________DCFOR0IFT0A0_H_GENERICS
#define SW_PAR________DCFOR0IFT0A0_H_GENERICS
#endif // SW_PAR________DCFOR0IFT0A0_H_GENERICS
#endif // __SW_PAR________DCFOR0IFT0A0_H_NODEPS
