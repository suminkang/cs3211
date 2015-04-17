#ifndef __SW_PAR_____COMPUTEDIAGRANGE_H
#define __SW_PAR_____COMPUTEDIAGRANGE_H

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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_CHAR_H_NODEPS
#include <x10/lang/Char.h>
#undef X10_LANG_CHAR_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
class SW_par;
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
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
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace compiler { 
class SuppressTransientError;
} } 
namespace x10 { namespace compiler { 
class Header;
} } 

class SW_par_____computeDiagRange : public ::x10::compiler::ws::RegularFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(_pc);
    
    x10_boolean FMGL(_returnF);
    
    ::x10::lang::String* FMGL(seq1);
    
    ::x10::lang::String* FMGL(seq2);
    
    ::x10::util::HashMap<x10_char, x10_int>* FMGL(alphabet_to_index);
    
    ::x10::array::Array_2<x10_int>* FMGL(sim_score_matrix);
    
    x10_int FMGL(open);
    
    x10_int FMGL(extend);
    
    ::x10::array::Array_2<x10_int>* FMGL(matrix);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_M);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_I);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_J);
    
    ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* FMGL(diag);
    
    x10_int FMGL(start);
    
    x10_int FMGL(nelems);
    
    x10_int FMGL(i__54593min__54594);
    
    x10_int FMGL(i__54593max__54595);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff,
                      ::x10::lang::String* seq1, ::x10::lang::String* seq2,
                      ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                      ::x10::array::Array_2<x10_int>* sim_score_matrix,
                      x10_int open, x10_int extend, ::x10::array::Array_2<x10_int>* matrix,
                      ::x10::array::Array_2<x10_int>* mat_M,
                      ::x10::array::Array_2<x10_int>* mat_I,
                      ::x10::array::Array_2<x10_int>* mat_J,
                      ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag,
                      x10_int start, x10_int nelems) {
        (this)->::x10::compiler::ws::RegularFrame::_constructor(
          up, ff);
        this->FMGL(seq1) = seq1;
        this->FMGL(seq2) = seq2;
        this->FMGL(alphabet_to_index) = alphabet_to_index;
        this->FMGL(sim_score_matrix) = sim_score_matrix;
        this->FMGL(open) = open;
        this->FMGL(extend) = extend;
        this->FMGL(matrix) = matrix;
        this->FMGL(mat_M) = mat_M;
        this->FMGL(mat_I) = mat_I;
        this->FMGL(mat_J) = mat_J;
        this->FMGL(diag) = diag;
        this->FMGL(start) = start;
        this->FMGL(nelems) = nelems;
    }
    static ::SW_par_____computeDiagRange* _make(::x10::compiler::ws::Frame* up,
                                                ::x10::compiler::ws::FinishFrame* ff,
                                                ::x10::lang::String* seq1,
                                                ::x10::lang::String* seq2,
                                                ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                                                ::x10::array::Array_2<x10_int>* sim_score_matrix,
                                                x10_int open,
                                                x10_int extend,
                                                ::x10::array::Array_2<x10_int>* matrix,
                                                ::x10::array::Array_2<x10_int>* mat_M,
                                                ::x10::array::Array_2<x10_int>* mat_I,
                                                ::x10::array::Array_2<x10_int>* mat_J,
                                                ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag,
                                                x10_int start,
                                                x10_int nelems)
    {
        ::SW_par_____computeDiagRange* this_ = new (::x10aux::alloc_z< ::SW_par_____computeDiagRange>()) ::SW_par_____computeDiagRange();
        this_->_constructor(up, ff, seq1, seq2, alphabet_to_index,
        sim_score_matrix, open, extend, matrix, mat_M, mat_I,
        mat_J, diag, start, nelems);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____computeDiagRange* o);
    
    static ::SW_par_____computeDiagRange* _make(x10_int x,
                                                ::SW_par_____computeDiagRange* o);
    
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

#endif // SW_PAR_____COMPUTEDIAGRANGE_H

class SW_par_____computeDiagRange;

#ifndef SW_PAR_____COMPUTEDIAGRANGE_H_NODEPS
#define SW_PAR_____COMPUTEDIAGRANGE_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/util/Pair.h>
#include <x10/compiler/ws/Worker.h>
#include <SW_par.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <x10/array/Array_2.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/SuppressTransientError.h>
#include <x10/compiler/Header.h>
#ifndef SW_PAR_____COMPUTEDIAGRANGE_H_GENERICS
#define SW_PAR_____COMPUTEDIAGRANGE_H_GENERICS
#endif // SW_PAR_____COMPUTEDIAGRANGE_H_GENERICS
#endif // __SW_PAR_____COMPUTEDIAGRANGE_H_NODEPS
