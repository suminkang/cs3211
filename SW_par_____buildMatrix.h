#ifndef __SW_PAR_____BUILDMATRIX_H
#define __SW_PAR_____BUILDMATRIX_H

#include <x10rt.h>


#define X10_COMPILER_WS_REGULARFRAME_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#undef X10_COMPILER_WS_REGULARFRAME_H_NODEPS
#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
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
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class SW_par_____buildMatrixL0;
namespace x10 { namespace compiler { 
class StackAllocate;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
class SW_par;
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
class SW_par_____buildMatrixL0IFF0;
class SW_par_____buildMatrixL0IFF0F0;
class SW_par_____buildMatrixL0IFF0F0B0;
class SW_par_____buildMatrixL0IFF0F0B0L0;
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0;
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0;
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0A0;
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { namespace ws { 
class AsyncFrame;
} } } 
class SW_par_____buildMatrixL0IFF0F0B0L0IFT0A1;
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
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

class SW_par_____buildMatrix : public ::x10::compiler::ws::RegularFrame   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_0<x10_int>::itable< ::SW_par_____buildMatrix > _itable_0;
    
    static ::x10::lang::Any::itable< ::SW_par_____buildMatrix > _itable_1;
    
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    x10_int FMGL(_pc);
    
    x10_boolean FMGL(_returnF);
    
    x10_int FMGL(_returnV);
    
    ::x10::lang::String* FMGL(seq1);
    
    ::x10::lang::String* FMGL(seq2);
    
    ::x10::array::Array_2<x10_int>* FMGL(matrix);
    
    x10_int FMGL(width);
    
    x10_int FMGL(height);
    
    ::x10::util::HashMap<x10_char, x10_int>* FMGL(alphabet_to_index);
    
    ::x10::array::Array_2<x10_int>* FMGL(sim_score_matrix);
    
    x10_int FMGL(open);
    
    x10_int FMGL(extend);
    
    virtual x10_int __apply();
    x10_int FMGL(MAX_THREADS);
    
    x10_int FMGL(MIN_WORK_PER_THREAD);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_M);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_I);
    
    ::x10::array::Array_2<x10_int>* FMGL(mat_J);
    
    x10_int FMGL(max);
    
    x10_int FMGL(diagonals);
    
    x10_int FMGL(index);
    
    x10_int FMGL(amount);
    
    x10_long FMGL(i__54575min__54576);
    
    x10_long FMGL(i__54575max__54577);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff,
                      ::x10::lang::String* seq1, ::x10::lang::String* seq2,
                      ::x10::array::Array_2<x10_int>* matrix, x10_int width,
                      x10_int height, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                      ::x10::array::Array_2<x10_int>* sim_score_matrix,
                      x10_int open, x10_int extend) {
        (this)->::x10::compiler::ws::RegularFrame::_constructor(
          up, ff);
        this->FMGL(seq1) = seq1;
        this->FMGL(seq2) = seq2;
        this->FMGL(matrix) = matrix;
        this->FMGL(width) = width;
        this->FMGL(height) = height;
        this->FMGL(alphabet_to_index) = alphabet_to_index;
        this->FMGL(sim_score_matrix) = sim_score_matrix;
        this->FMGL(open) = open;
        this->FMGL(extend) = extend;
    }
    static ::SW_par_____buildMatrix* _make(::x10::compiler::ws::Frame* up,
                                           ::x10::compiler::ws::FinishFrame* ff,
                                           ::x10::lang::String* seq1,
                                           ::x10::lang::String* seq2,
                                           ::x10::array::Array_2<x10_int>* matrix,
                                           x10_int width,
                                           x10_int height,
                                           ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                                           ::x10::array::Array_2<x10_int>* sim_score_matrix,
                                           x10_int open, x10_int extend)
    {
        ::SW_par_____buildMatrix* this_ = new (::x10aux::alloc_z< ::SW_par_____buildMatrix>()) ::SW_par_____buildMatrix();
        this_->_constructor(up, ff, seq1, seq2, matrix, width,
        height, alphabet_to_index, sim_score_matrix, open,
        extend);
        return this_;
    }
    
    void _constructor(x10_int x, ::SW_par_____buildMatrix* o);
    
    static ::SW_par_____buildMatrix* _make(x10_int x, ::SW_par_____buildMatrix* o);
    
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

#endif // SW_PAR_____BUILDMATRIX_H

class SW_par_____buildMatrix;

#ifndef SW_PAR_____BUILDMATRIX_H_NODEPS
#define SW_PAR_____BUILDMATRIX_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/lang/Long.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Rail.h>
#include <SW_par_____buildMatrixL0.h>
#include <x10/compiler/StackAllocate.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <SW_par.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <SW_par_____buildMatrixL0IFF0.h>
#include <SW_par_____buildMatrixL0IFF0F0.h>
#include <SW_par_____buildMatrixL0IFF0F0B0.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0.h>
#include <x10/xrx/Deque.h>
#include <x10/lang/Any.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0IFT0A0.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/ws/AsyncFrame.h>
#include <SW_par_____buildMatrixL0IFF0F0B0L0IFT0A1.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/GrowableRail.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/SuppressTransientError.h>
#include <x10/compiler/Header.h>
#ifndef SW_PAR_____BUILDMATRIX_H_GENERICS
#define SW_PAR_____BUILDMATRIX_H_GENERICS
#endif // SW_PAR_____BUILDMATRIX_H_GENERICS
#endif // __SW_PAR_____BUILDMATRIX_H_NODEPS
