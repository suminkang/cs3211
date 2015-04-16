#ifndef __SW_PAR_H
#define __SW_PAR_H

#include <x10rt.h>


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
class InputStreamReader;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
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
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Stack;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class SW_par_Strings {
  public:
    static ::x10::lang::String sl__4311;
    static ::x10::lang::String sl__4312;
    static ::x10::lang::String sl__4314;
    static ::x10::lang::String sl__4315;
    static ::x10::lang::String sl__4316;
    static ::x10::lang::String sl__4317;
    static ::x10::lang::String sl__4313;
    static ::x10::lang::String sl__4318;
    static ::x10::lang::String sl__4310;
    static ::x10::lang::String sl__4319;
};

class SW_par : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::String* readSeq(::x10::lang::String* fileName);
    static void printMatrix(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                            x10_long len1, x10_long len2, ::x10::array::Array_2<x10_int>* matrix);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    static x10_int affineGap(x10_int open, x10_int extend, x10_int length);
    static x10_long getCharacterIndex(x10_char c, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index);
    static void buildMatrix(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                            ::x10::array::Array_2<x10_int>* matrix,
                            x10_int width, x10_int height,
                            ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                            ::x10::array::Array_2<x10_int>* sim_score_matrix,
                            x10_int open, x10_int extend);
    static ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >*
      generateDiagonal(x10_int diag, x10_int height, x10_int width);
    static void backtrack(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                          x10_long len1, x10_long len2, ::x10::array::Array_2<x10_int>* matrix);
    virtual ::SW_par* SW_par____this__SW_par();
    void _constructor();
    
    static ::SW_par* _make();
    
    virtual void __fieldInitializers_SW_par();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SW_PAR_H

class SW_par;

#ifndef SW_PAR_H_NODEPS
#define SW_PAR_H_NODEPS
#ifndef SW_PAR_H_GENERICS
#define SW_PAR_H_GENERICS
#endif // SW_PAR_H_GENERICS
#endif // __SW_PAR_H_NODEPS
