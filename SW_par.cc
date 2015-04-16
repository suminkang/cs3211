/*************************************************/
/* START of SW_par */
#include <SW_par.h>

#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/lang/Boolean.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Int.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/io/InputStreamReader.h>
#include <x10/lang/Long.h>
#include <x10/array/Array_2.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Char.h>
#include <x10/lang/Rail.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Exception.h>
#include <x10/util/ArrayList.h>
#include <x10/util/Pair.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Math.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/Stack.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef SW_PAR__CLOSURE__1_CLOSURE
#define SW_PAR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SW_par__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SW_par__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 196 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int x__4537 = ((elem_p__4536->FMGL(first)) + (((x10_int) (((x10_long)1ll)))));
        
        //#line 197 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int y__4538 = ((elem_p__4536->FMGL(second)) + (((x10_int) (((x10_long)1ll)))));
        
        //#line 198 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((((((x__4537) + (((x10_int) (((x10_long)1ll)))))) <= (::x10aux::nullCheck(seq1)->x10::lang::String::length())) &&
            ((((x__4537) + (((x10_int) (((x10_long)1ll)))))) <= (::x10aux::nullCheck(seq2)->x10::lang::String::length()))) &&
            ((((y__4538) + (((x10_int) (((x10_long)1ll)))))) <= (::x10aux::nullCheck(seq1)->x10::lang::String::length()))) &&
            ((((y__4538) + (((x10_int) (((x10_long)1ll)))))) <= (::x10aux::nullCheck(seq2)->x10::lang::String::length()))))
        {
            
            //#line 199 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            max = ((x10_int) (((x10_long)0ll)));
            
            //#line 202 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_long xCharacterIndex__4539 = ::SW_par::getCharacterIndex(
                                               ::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                                 x__4537),
                                               alphabet_to_index);
            
            //#line 203 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_long yCharacterIndex__4540 = ::SW_par::getCharacterIndex(
                                               ::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                 y__4538),
                                               alphabet_to_index);
            
            //#line 204 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_int sim__4541 = ::x10aux::nullCheck(sim_score_matrix)->x10::array::Array_2<x10_int>::__apply(
                                  xCharacterIndex__4539, yCharacterIndex__4540);
            
            //#line 208 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)(x__4537)), ((x10_long)(y__4538)),
              ::x10::lang::Math::max(::x10::lang::Math::max(
                                       ((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                           ((((x10_long)(x__4537))) - (((x10_long)1ll))),
                                           ((((x10_long)(y__4538))) - (((x10_long)1ll))))) + (sim__4541)),
                                       ((::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                           ((((x10_long)(x__4537))) - (((x10_long)1ll))),
                                           ((((x10_long)(y__4538))) - (((x10_long)1ll))))) + (sim__4541))),
                                     ((::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                         ((((x10_long)(x__4537))) - (((x10_long)1ll))),
                                         ((((x10_long)(y__4538))) - (((x10_long)1ll))))) + (sim__4541))));
            
            //#line 209 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)(x__4537)), ((x10_long)(y__4538)),
              ::x10::lang::Math::max(((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                         ((((x10_long)(x__4537))) - (((x10_long)1ll))),
                                         ((x10_long)(y__4538)))) - (open)),
                                     ((::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                         ((((x10_long)(x__4537))) - (((x10_long)1ll))),
                                         ((x10_long)(y__4538)))) - (extend))));
            
            //#line 210 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)(x__4537)), ((x10_long)(y__4538)),
              ::x10::lang::Math::max(((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                         ((x10_long)(x__4537)),
                                         ((((x10_long)(y__4538))) - (((x10_long)1ll))))) - (open)),
                                     ((::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                         ((x10_long)(x__4537)),
                                         ((((x10_long)(y__4538))) - (((x10_long)1ll))))) - (extend))));
            
            //#line 212 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)(x__4537)), ((x10_long)(y__4538)),
              ::x10::lang::Math::max(::x10::lang::Math::max(
                                       ::x10::lang::Math::max(
                                         ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                           ((x10_long)(x__4537)),
                                           ((x10_long)(y__4538))),
                                         ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                           ((x10_long)(x__4537)),
                                           ((x10_long)(y__4538)))),
                                       ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                         ((x10_long)(x__4537)),
                                         ((x10_long)(y__4538)))),
                                     ((x10_int) (((x10_long)0ll)))));
        }
        
    }
    
    // captured environment
    ::x10::util::Pair<x10_int, x10_int> elem_p__4536;
    ::x10::lang::String* seq1;
    ::x10::lang::String* seq2;
    x10aux::captured_struct_lval<x10_int> max;
    ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index;
    ::x10::array::Array_2<x10_int>* sim_score_matrix;
    x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_M;
    x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_I;
    x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_J;
    x10_int open;
    x10_int extend;
    ::x10::array::Array_2<x10_int>* matrix;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->elem_p__4536);
        buf.write(this->seq1);
        buf.write(this->seq2);
        buf.write(this->max);
        buf.write(this->alphabet_to_index);
        buf.write(this->sim_score_matrix);
        buf.write(this->mat_M);
        buf.write(this->mat_I);
        buf.write(this->mat_J);
        buf.write(this->open);
        buf.write(this->extend);
        buf.write(this->matrix);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        SW_par__closure__1* storage = ::x10aux::alloc_z<SW_par__closure__1>();
        buf.record_reference(storage);
        ::x10::util::Pair<x10_int, x10_int> that_elem_p__4536 = buf.read< ::x10::util::Pair<x10_int, x10_int> >();
        ::x10::lang::String* that_seq1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_seq2 = buf.read< ::x10::lang::String*>();
        x10aux::captured_struct_lval<x10_int> that_max = buf.read<x10aux::captured_struct_lval<x10_int> >();
        ::x10::util::HashMap<x10_char, x10_int>* that_alphabet_to_index = buf.read< ::x10::util::HashMap<x10_char, x10_int>*>();
        ::x10::array::Array_2<x10_int>* that_sim_score_matrix = buf.read< ::x10::array::Array_2<x10_int>*>();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_M = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_I = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_J = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10_int that_open = buf.read<x10_int>();
        x10_int that_extend = buf.read<x10_int>();
        ::x10::array::Array_2<x10_int>* that_matrix = buf.read< ::x10::array::Array_2<x10_int>*>();
        SW_par__closure__1* this_ = new (storage) SW_par__closure__1(that_elem_p__4536, that_seq1, that_seq2, that_max, that_alphabet_to_index, that_sim_score_matrix, that_mat_M, that_mat_I, that_mat_J, that_open, that_extend, that_matrix);
        return this_;
    }
    
    SW_par__closure__1(::x10::util::Pair<x10_int, x10_int> elem_p__4536, ::x10::lang::String* seq1, ::x10::lang::String* seq2, x10aux::captured_struct_lval<x10_int> max, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index, ::x10::array::Array_2<x10_int>* sim_score_matrix, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_M, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_I, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_J, x10_int open, x10_int extend, ::x10::array::Array_2<x10_int>* matrix) : elem_p__4536(elem_p__4536), seq1(seq1), seq2(seq2), max(max), alphabet_to_index(alphabet_to_index), sim_score_matrix(sim_score_matrix), mat_M(mat_M), mat_I(mat_I), mat_J(mat_J), open(open), extend(extend), matrix(matrix) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/Users/sundeep/Downloads/x10/SW/SW_par.x10:195-214";
    }

};

#endif // SW_PAR__CLOSURE__1_CLOSURE

//#line 10 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
::x10::lang::String* SW_par::readSeq(::x10::lang::String* fileName) {
    
    //#line 11 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::File* file = ::x10::io::File::_make(fileName);
    
    //#line 12 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* seq = ::x10::lang::String::_make();
    
    //#line 14 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (file->exists()) {
        
        //#line 15 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::FileReader* reader = file->openRead();
        
        //#line 16 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int lineNum = ((x10_int) (((x10_long)0ll)));
        
        //#line 17 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        seq = (&::SW_par_Strings::sl__4602);
        
        //#line 19 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(reader)->readLine();
        
        //#line 20 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__4241;
            for (line__4241 = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__4241));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__4241));
                
                //#line 21 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                seq = ::x10::lang::String::__plus(seq, line);
                
                //#line 22 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                lineNum = ((lineNum) + (((x10_int) (((x10_long)1ll)))));
            }
        }
        
        //#line 24 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(reader)->close();
    }
    
    //#line 26 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    return seq;
    
}

//#line 29 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
void SW_par::printMatrix(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                         x10_long len1, x10_long len2, ::x10::array::Array_2<x10_int>* matrix) {
    
    //#line 31 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4603), seq1)));
    
    //#line 32 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4261min__4521 = ((x10_long)0ll);
    x10_long i__4261max__4522 = len2;
    {
        x10_long i__4523;
        for (i__4523 = i__4261min__4521; ((i__4523) <= (i__4261max__4522));
             i__4523 = ((i__4523) + (((x10_long)1ll)))) {
            x10_long row__4524 = i__4523;
            
            //#line 33 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::lang::String* rowStr__4520 = ::x10::lang::String::_make();
            
            //#line 34 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            rowStr__4520 = ::x10::lang::String::__plus(::x10aux::to_string(::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                                             ((x10_int) (row__4524)))), (&::SW_par_Strings::sl__4604));
            
            //#line 35 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_long i__4243min__4516 = ((x10_long)0ll);
            x10_long i__4243max__4517 = len1;
            {
                x10_long i__4518;
                for (i__4518 = i__4243min__4516; ((i__4518) <= (i__4243max__4517));
                     i__4518 = ((i__4518) + (((x10_long)1ll))))
                {
                    x10_long col__4519 = i__4518;
                    
                    //#line 36 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                    rowStr__4520 = ::x10::lang::String::__plus(::x10::lang::String::__plus(rowStr__4520, (&::SW_par_Strings::sl__4604)), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                                                                                                                                           col__4519,
                                                                                                                                           row__4524));
                }
            }
            
            //#line 38 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(rowStr__4520));
        }
    }
    
}

//#line 42 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
void SW_par::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 44 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) < (((x10_long)5ll))))
    {
        
        //#line 45 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4605)));
        
        //#line 46 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        return;
    }
    
    //#line 49 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* seqFile1 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                      ((x10_long)0ll));
    
    //#line 50 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* seqFile2 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                      ((x10_long)1ll));
    
    //#line 51 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 52 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int opening = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                          ((x10_long)3ll)), ((x10_int) (((x10_long)10ll))));
    
    //#line 53 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int extension = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)4ll)), ((x10_int) (((x10_long)10ll))));
    
    //#line 55 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* seq1 = ::SW_par::readSeq(seqFile1);
    
    //#line 56 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* seq2 = ::SW_par::readSeq(seqFile2);
    
    //#line 57 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long len1 = ((((x10_long)(::x10aux::nullCheck(seq1)->x10::lang::String::length()))) - (((x10_long)1ll)));
    
    //#line 58 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long len2 = ((((x10_long)(::x10aux::nullCheck(seq2)->x10::lang::String::length()))) - (((x10_long)1ll)));
    
    //#line 63 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* matrix = ::x10::array::Array_2<x10_int>::_make(((len1) + (((x10_long)1ll))),
                                                                                   ((len2) + (((x10_long)1ll))));
    
    //#line 70 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index =
      ::x10::util::HashMap<x10_char, x10_int>::_make();
    
    //#line 71 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::File* file = ::x10::io::File::_make(matchFile);
    
    //#line 72 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (file->exists()) {
        
        //#line 73 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::FileReader* reader = file->openRead();
        
        //#line 76 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::lang::String* first_line = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->readLine())->x10::lang::String::trim();
        
        //#line 77 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::lang::Rail< ::x10::lang::String* >* elements =
          ::x10::lang::StringHelper::split((&::SW_par_Strings::sl__4603), first_line);
        
        //#line 78 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long size = (x10_long)(::x10aux::nullCheck(elements)->FMGL(size));
        
        //#line 80 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4279min__4530 = ((x10_long)0ll);
        x10_long i__4279max__4531 = ((size) - (((x10_long)1ll)));
        {
            x10_long i__4532;
            for (i__4532 = i__4279min__4530; ((i__4532) <= (i__4279max__4531));
                 i__4532 = ((i__4532) + (((x10_long)1ll))))
            {
                x10_long i__4533 = i__4532;
                
                //#line 82 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                alphabet_to_index->put(::x10aux::nullCheck(::x10aux::nullCheck(elements)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                             i__4533))->x10::lang::String::charAt(
                                         ((x10_int) (((x10_long)0ll)))),
                                       ((x10_int) (i__4533)));
            }
        }
        
        //#line 91 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::array::Array_2<x10_int>* sim_score_matrix =
          ::x10::array::Array_2<x10_int>::_make(((x10_long)(((x10_int) (size)))),
                                                ((x10_long)(((x10_int) (size)))));
        
        //#line 95 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long lineNum = ((x10_long)0ll);
        
        //#line 96 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* s__4315;
            for (s__4315 = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(s__4315));
                 ) {
                ::x10::lang::String* s = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(s__4315));
                
                //#line 97 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10::lang::Rail< ::x10::lang::String* >* split_line =
                  ::x10::lang::StringHelper::split((&::SW_par_Strings::sl__4604), s);
                
                //#line 98 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long s_size = (x10_long)(::x10aux::nullCheck(split_line)->FMGL(size));
                
                //#line 99 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long colNum = ((x10_long)0ll);
                
                //#line 101 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long i__4297min__4526 = ((x10_long)0ll);
                x10_long i__4297max__4527 = ((s_size) - (((x10_long)1ll)));
                {
                    x10_long i__4528;
                    for (i__4528 = i__4297min__4526; ((i__4528) <= (i__4297max__4527));
                         i__4528 = ((i__4528) + (((x10_long)1ll))))
                    {
                        x10_long i__4529 = i__4528;
                        
                        //#line 102 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                        if ((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(split_line)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                           i__4529))->x10::lang::String::length(),
                                                     ((x10_int) (((x10_long)0ll))))))
                        {
                            
                            //#line 103 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                            continue;
                        }
                        
                        //#line 104 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                        try {
                            
                            //#line 105 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                            ::x10aux::nullCheck(sim_score_matrix)->x10::array::Array_2<x10_int>::__set(
                              lineNum, colNum, ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(split_line)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                   i__4529), ((x10_int) (((x10_long)10ll)))));
                            
                            //#line 107 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                            colNum = ((colNum) + (((x10_long)1ll)));
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3) {
                            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc3)) {
                                ::x10::lang::Exception* e__4525 =
                                  static_cast< ::x10::lang::Exception*>(__exc3);
                                {
                                    
                                    //#line 111 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                                    continue;
                                }
                            } else {
                                throw;
                            }
                        }
                    }
                }
                
                //#line 114 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                lineNum = ((lineNum) + (((x10_long)1ll)));
            }
        }
        
        //#line 116 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(reader)->close();
        
        //#line 119 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::SW_par::buildMatrix(seq1, seq2, matrix, ((x10_int) (len1)),
                              ((x10_int) (len2)), alphabet_to_index,
                              sim_score_matrix, opening, extension);
        
        //#line 120 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::SW_par::printMatrix(seq1, seq2, len1, len2, matrix);
        
        //#line 122 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::SW_par::backtrack(seq1, seq2, len1, len2, matrix);
    }
    
}

//#line 126 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
x10_int SW_par::affineGap(x10_int open, x10_int extend, x10_int length) {
    
    //#line 127 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    return ((open) + (((length) * (extend))));
    
}

//#line 130 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
x10_long SW_par::getCharacterIndex(x10_char c, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index) {
    
    //#line 131 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (::x10aux::nullCheck(alphabet_to_index)->containsKey(
          c)) {
        
        //#line 132 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        return ((x10_long)(::x10aux::nullCheck(alphabet_to_index)->get(
                             c)));
        
    }
    
    //#line 134 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    return ((x10_long)(::x10aux::nullCheck(alphabet_to_index)->get(
                         ((x10_char)'*'))));
    
}

//#line 137 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
void SW_par::buildMatrix(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                         ::x10::array::Array_2<x10_int>* matrix,
                         x10_int width, x10_int height, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index,
                         ::x10::array::Array_2<x10_int>* sim_score_matrix,
                         x10_int open, x10_int extend) {
    
    //#line 138 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* mat_M = ::x10::array::Array_2<x10_int>::_make(((((x10_long)(width))) + (((x10_long)1ll))),
                                                                                  ((((x10_long)(height))) + (((x10_long)1ll))));
    
    //#line 139 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4317min__4542 = ((x10_long)1ll);
    x10_long i__4317max__4543 = ((x10_long)(width));
    {
        x10_long i__4544;
        for (i__4544 = i__4317min__4542; ((i__4544) <= (i__4317max__4543));
             i__4544 = ((i__4544) + (((x10_long)1ll)))) {
            x10_long i__4545 = i__4544;
            
            //#line 140 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
              i__4545, ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
        }
    }
    
    //#line 141 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4335min__4546 = ((x10_long)1ll);
    x10_long i__4335max__4547 = ((x10_long)(height));
    {
        x10_long i__4548;
        for (i__4548 = i__4335min__4546; ((i__4548) <= (i__4335max__4547));
             i__4548 = ((i__4548) + (((x10_long)1ll)))) {
            x10_long j__4549 = i__4548;
            
            //#line 142 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4549, (-(((x10_int) (((x10_long)1000000ll))))));
        }
    }
    
    //#line 144 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* mat_I = ::x10::array::Array_2<x10_int>::_make(((((x10_long)(width))) + (((x10_long)1ll))),
                                                                                  ((((x10_long)(height))) + (((x10_long)1ll))));
    
    //#line 145 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
      ((x10_long)0ll), ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
    
    //#line 146 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4353min__4550 = ((x10_long)1ll);
    x10_long i__4353max__4551 = ((x10_long)(height));
    {
        x10_long i__4552;
        for (i__4552 = i__4353min__4550; ((i__4552) <= (i__4353max__4551));
             i__4552 = ((i__4552) + (((x10_long)1ll)))) {
            x10_long j__4553 = i__4552;
            
            //#line 147 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4553, (-(((x10_int) (((x10_long)1000000ll))))));
            
            //#line 148 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)1ll), j__4553, (-(open)));
        }
    }
    
    //#line 150 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4371min__4554 = ((x10_long)1ll);
    x10_long i__4371max__4555 = ((x10_long)(width));
    {
        x10_long i__4556;
        for (i__4556 = i__4371min__4554; ((i__4556) <= (i__4371max__4555));
             i__4556 = ((i__4556) + (((x10_long)1ll)))) {
            x10_long i__4557 = i__4556;
            
            //#line 151 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4557, ((x10_long)0ll), (-(::SW_par::affineGap(
                                             open, extend,
                                             ((x10_int) (((i__4557) - (((x10_long)1ll)))))))));
        }
    }
    
    //#line 153 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* mat_J = ::x10::array::Array_2<x10_int>::_make(((((x10_long)(width))) + (((x10_long)1ll))),
                                                                                  ((((x10_long)(height))) + (((x10_long)1ll))));
    
    //#line 154 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__set(
      ((x10_long)0ll), ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
    
    //#line 155 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4389min__4558 = ((x10_long)1ll);
    x10_long i__4389max__4559 = ((x10_long)(width));
    {
        x10_long i__4560;
        for (i__4560 = i__4389min__4558; ((i__4560) <= (i__4389max__4559));
             i__4560 = ((i__4560) + (((x10_long)1ll)))) {
            x10_long i__4561 = i__4560;
            
            //#line 156 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4561, ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
            
            //#line 157 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4561, ((x10_long)1ll), (-(open)));
        }
    }
    
    //#line 159 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4407min__4562 = ((x10_long)1ll);
    x10_long i__4407max__4563 = ((x10_long)(height));
    {
        x10_long i__4564;
        for (i__4564 = i__4407min__4562; ((i__4564) <= (i__4407max__4563));
             i__4564 = ((i__4564) + (((x10_long)1ll)))) {
            x10_long j__4565 = i__4564;
            
            //#line 160 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4565, (-(::SW_par::affineGap(
                                             open, extend,
                                             ((x10_int) (((j__4565) - (((x10_long)1ll)))))))));
        }
    }
    
    //#line 162 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int max = ((x10_int) (((x10_long)0ll)));
    
    //#line 163 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int k = ((x10_int) (((x10_long)0ll)));
    
    //#line 189 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int diagonals = ((((height) + (width))) - (((x10_int) (((x10_long)1ll)))));
    
    //#line 190 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4427min__4566 = ((x10_long)0ll);
    x10_long i__4427max__4567 = ((((x10_long)(diagonals))) - (((x10_long)1ll)));
    {
        x10_long i__4568;
        for (i__4568 = i__4427min__4566; ((i__4568) <= (i__4427max__4567));
             i__4568 = ((i__4568) + (((x10_long)1ll)))) {
            x10_long d__4569 = i__4568;
            
            //#line 191 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag__4534 =
              ::SW_par::generateDiagonal(((x10_int) (d__4569)),
                                         height, width);
            
            //#line 192 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(diag__4534));
            {
                
                //#line 194 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4589 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        
                        //#line 195 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                        {
                            ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >* elem_p__4535;
                            for (elem_p__4535 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >*>(::x10aux::nullCheck(diag__4534)->iterator());
                                 ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >::hasNext(::x10aux::nullCheck(elem_p__4535));
                                 ) {
                                ::x10::util::Pair<x10_int, x10_int> elem_p__4536 =
                                  ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >::next(::x10aux::nullCheck(elem_p__4535));
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW_par__closure__1)))SW_par__closure__1(elem_p__4536, seq1, seq2, &(max), alphabet_to_index, sim_score_matrix, &(mat_M), &(mat_I), &(mat_J), open, extend, matrix))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4587 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4587);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4589);
            }
        }
    }
    
}

//#line 220 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >*
  SW_par::generateDiagonal(x10_int diag, x10_int height, x10_int width) {
    
    //#line 221 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* elements =
      ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >::_make();
    
    //#line 222 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int numDiags = ((((height) + (width))) - (((x10_int) (((x10_long)1ll)))));
    
    //#line 224 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (((diag) < (::x10::lang::Math::min(height, width))))
    {
        
        //#line 225 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4606)));
        
        //#line 226 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4445min__4570 = ((x10_long)0ll);
        x10_long i__4445max__4571 = ((x10_long)(diag));
        {
            x10_long i__4572;
            for (i__4572 = i__4445min__4570; ((i__4572) <= (i__4445max__4571));
                 i__4572 = ((i__4572) + (((x10_long)1ll))))
            {
                x10_long i__4573 = i__4572;
                
                //#line 227 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((x10_long)(diag))) - (i__4573)))),
                                                                                              ((x10_int) (i__4573))));
            }
        }
        
    } else 
    //#line 228 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (((diag) >= (::x10::lang::Math::max(height, width))))
    {
        
        //#line 229 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4607)));
        
        //#line 230 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4463min__4574 = ((x10_long)0ll);
        x10_long i__4463max__4575 = ((((x10_long)(((numDiags) - (diag))))) - (((x10_long)1ll)));
        {
            x10_long i__4576;
            for (i__4576 = i__4463min__4574; ((i__4576) <= (i__4463max__4575));
                 i__4576 = ((i__4576) + (((x10_long)1ll))))
            {
                x10_long i__4577 = i__4576;
                
                //#line 231 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((((x10_long)(height))) - (((x10_long)1ll)))) - (i__4577)))),
                                                                                              ((x10_int) (((((((i__4577) + (((x10_long)(diag))))) + (((x10_long)1ll)))) - (((x10_long)(height))))))));
            }
        }
        
    } else 
    //#line 232 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if ((((diag) >= (width)) && ((diag) < (height)))) {
        
        //#line 233 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4608)));
        
        //#line 234 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4481min__4578 = ((x10_long)0ll);
        x10_long i__4481max__4579 = ((((x10_long)(width))) - (((x10_long)1ll)));
        {
            x10_long i__4580;
            for (i__4580 = i__4481min__4578; ((i__4580) <= (i__4481max__4579));
                 i__4580 = ((i__4580) + (((x10_long)1ll))))
            {
                x10_long i__4581 = i__4580;
                
                //#line 235 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((x10_long)(diag))) - (i__4581)))),
                                                                                              ((x10_int) (i__4581))));
            }
        }
        
    } else 
    //#line 236 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if ((((diag) < (height)) && ((diag) >= (width)))) {
        
        //#line 237 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4609)));
        
        //#line 238 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4499min__4582 = ((x10_long)0ll);
        x10_long i__4499max__4583 = ((((x10_long)(height))) - (((x10_long)1ll)));
        {
            x10_long i__4584;
            for (i__4584 = i__4499min__4582; ((i__4584) <= (i__4499max__4583));
                 i__4584 = ((i__4584) + (((x10_long)1ll))))
            {
                x10_long i__4585 = i__4584;
                
                //#line 239 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((((x10_long)(height))) - (((x10_long)1ll)))) - (i__4585)))),
                                                                                              ((x10_int) (((((((i__4585) + (((x10_long)(diag))))) + (((x10_long)1ll)))) - (((x10_long)(height))))))));
            }
        }
        
    }
    
    //#line 242 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    return elements;
    
}

//#line 245 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
void SW_par::backtrack(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                       x10_long len1, x10_long len2, ::x10::array::Array_2<x10_int>* matrix) {
    
    //#line 246 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i = len1;
    
    //#line 247 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long j = len2;
    
    //#line 248 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int maxScore = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                         len1, len2);
    
    //#line 249 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::util::Stack<x10_long>* actions = ::x10::util::Stack<x10_long>::_make();
    
    //#line 251 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    while (((!::x10aux::struct_equals(i, ((x10_long)0ll))) ||
           (!::x10aux::struct_equals(j, ((x10_long)0ll)))))
    {
        
        //#line 252 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(i, ((x10_long)0ll))))
        {
            
            //#line 253 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 254 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)1ll));
            
            //#line 255 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            continue;
        } else 
        //#line 256 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(j, ((x10_long)0ll))))
        {
            
            //#line 257 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 258 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)2ll));
            
            //#line 259 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            continue;
        }
        
        //#line 262 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int diag = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                         ((i) - (((x10_long)1ll))), ((j) - (((x10_long)1ll))));
        
        //#line 263 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int left = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                         ((i) - (((x10_long)1ll))), j);
        
        //#line 264 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int up = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                       i, ((j) - (((x10_long)1ll))));
        
        //#line 265 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int tmpMax = ((x10_int) (((x10_long)0ll)));
        
        //#line 267 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((diag) >= (left)) && ((diag) >= (up)))) {
            
            //#line 269 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 270 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 271 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)0ll));
            
            //#line 272 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            tmpMax = diag;
        } else 
        //#line 273 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((up) > (diag)) && ((up) > (left)))) {
            
            //#line 275 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 276 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)1ll));
            
            //#line 277 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            tmpMax = up;
        } else 
        //#line 278 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((left) > (diag)) && ((left) >= (up)))) {
            
            //#line 280 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 281 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)2ll));
            
            //#line 282 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            tmpMax = left;
        }
        
        //#line 285 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if (((maxScore) < (tmpMax))) {
            
            //#line 286 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            maxScore = tmpMax;
        }
        
    }
    
    //#line 290 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* align1 = ::x10::lang::String::_make();
    
    //#line 291 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* align2 = ::x10::lang::String::_make();
    
    //#line 294 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int s1Index = ((x10_int) (((x10_long)1ll)));
    
    //#line 295 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int s2Index = ((x10_int) (((x10_long)1ll)));
    
    //#line 296 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long numGaps = ((x10_long)0ll);
    
    //#line 297 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long numMatches = ((x10_long)0ll);
    
    //#line 299 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    while (!(::x10aux::nullCheck(actions)->isEmpty())) {
        
        //#line 300 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long action = ::x10aux::nullCheck(actions)->pop();
        
        //#line 302 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)0ll))))
        {
            
            //#line 304 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_char s1char = ::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                s1Index);
            
            //#line 305 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_char s2char = ::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                s2Index);
            
            //#line 307 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            if ((::x10aux::struct_equals(s1char, s2char)))
            {
                
                //#line 308 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                numMatches = ((numMatches) + (((x10_long)1ll)));
            }
            
            //#line 311 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, ::x10aux::to_string(s1char));
            
            //#line 312 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, ::x10aux::to_string(s2char));
            
            //#line 313 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s1Index = ((s1Index) + (((x10_int)1)));
            
            //#line 314 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s2Index = ((s2Index) + (((x10_int)1)));
        } else 
        //#line 315 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)1ll))))
        {
            
            //#line 316 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, (&::SW_par_Strings::sl__4602));
            
            //#line 317 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, ::x10aux::to_string(::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                                               s2Index)));
            
            //#line 318 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s2Index = ((s2Index) + (((x10_int)1)));
            
            //#line 319 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            numGaps = ((numGaps) + (((x10_long)1ll)));
        } else 
        //#line 320 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)2ll))))
        {
            
            //#line 321 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, ::x10aux::to_string(::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                                                               s1Index)));
            
            //#line 322 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, (&::SW_par_Strings::sl__4602));
            
            //#line 323 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s1Index = ((s1Index) + (((x10_int)1)));
            
            //#line 324 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            numGaps = ((numGaps) + (((x10_long)1ll)));
        }
        
    }
    
    //#line 328 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long maxLen = ((x10_long)(::x10aux::nullCheck(align1)->x10::lang::String::length()));
    
    //#line 329 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_double identity = ((((((x10_double) (numMatches))) / (((x10_double) (maxLen))))) * (((x10_double) (((x10_long)100ll)))));
    
    //#line 330 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_double gap = ((((((x10_double) (numGaps))) / (((x10_double) (maxLen))))) * (((x10_double) (((x10_long)100ll)))));
    
    //#line 332 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::SW_par_Strings::sl__4610),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(numMatches),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(maxLen),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(identity));
    
    //#line 333 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->printf((&::SW_par_Strings::sl__4611),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(numGaps),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(maxLen),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
    
    //#line 334 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4612), maxScore)));
    
    //#line 335 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4613), align1)));
    
    //#line 336 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4614), align2)));
}

//#line 9 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
::SW_par* SW_par::SW_par____this__SW_par() {
    return this;
    
}
void SW_par::_constructor() {
    this->SW_par::__fieldInitializers_SW_par();
}
::SW_par* SW_par::_make() {
    ::SW_par* this_ = new (::x10aux::alloc_z< ::SW_par>()) ::SW_par();
    this_->_constructor();
    return this_;
}


void SW_par::__fieldInitializers_SW_par() {
 
}
const ::x10aux::serialization_id_t SW_par::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::SW_par::_deserializer);

void SW_par::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::SW_par::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::SW_par* this_ = new (::x10aux::alloc_z< ::SW_par>()) ::SW_par();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void SW_par::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType SW_par::rtt;
void SW_par::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("SW_par",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String SW_par_Strings::sl__4603("  ");
::x10::lang::String SW_par_Strings::sl__4604(" ");
::x10::lang::String SW_par_Strings::sl__4605("Usage: not enough arguments");
::x10::lang::String SW_par_Strings::sl__4611("Gaps: %d/%d (%.2f%%)\n");
::x10::lang::String SW_par_Strings::sl__4602("-");
::x10::lang::String SW_par_Strings::sl__4606("1");
::x10::lang::String SW_par_Strings::sl__4607("2");
::x10::lang::String SW_par_Strings::sl__4608("3");
::x10::lang::String SW_par_Strings::sl__4609("4");
::x10::lang::String SW_par_Strings::sl__4613("1: ");
::x10::lang::String SW_par_Strings::sl__4614("2: ");
::x10::lang::String SW_par_Strings::sl__4612("Score: ");
::x10::lang::String SW_par_Strings::sl__4610("Identity: %d/%d (%.2f%%)\n");

::x10::lang::VoidFun_0_0::itable<SW_par__closure__1>SW_par__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW_par__closure__1::__apply, &SW_par__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW_par__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW_par__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW_par__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW_par__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW_par__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW_par__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW_par */
/*************************************************/
