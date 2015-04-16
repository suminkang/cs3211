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
        
        //#line 197 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int x__4245 = ((elem_p__4244->FMGL(first)) + (((x10_int) (((x10_long)1ll)))));
        
        //#line 198 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int y__4246 = ((elem_p__4244->FMGL(second)) + (((x10_int) (((x10_long)1ll)))));
        
        //#line 199 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        max = ((x10_int) (((x10_long)0ll)));
        
        //#line 202 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long xCharacterIndex__4247 = ::SW_par::getCharacterIndex(::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                                                       x__4245),
                                                                     alphabet_to_index);
        
        //#line 203 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long yCharacterIndex__4248 = ::SW_par::getCharacterIndex(
                                           ::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                             y__4246), alphabet_to_index);
        
        //#line 204 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int sim__4249 = ::x10aux::nullCheck(sim_score_matrix)->x10::array::Array_2<x10_int>::__apply(
                              xCharacterIndex__4247, yCharacterIndex__4248);
        
        //#line 208 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
          ((x10_long)(x__4245)), ((x10_long)(y__4246)), ::x10::lang::Math::max(
                                                          ::x10::lang::Math::max(
                                                            ((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                                                ((((x10_long)(x__4245))) - (((x10_long)1ll))),
                                                                ((((x10_long)(y__4246))) - (((x10_long)1ll))))) + (sim__4249)),
                                                            ((::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                                                ((((x10_long)(x__4245))) - (((x10_long)1ll))),
                                                                ((((x10_long)(y__4246))) - (((x10_long)1ll))))) + (sim__4249))),
                                                          ((::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                                              ((((x10_long)(x__4245))) - (((x10_long)1ll))),
                                                              ((((x10_long)(y__4246))) - (((x10_long)1ll))))) + (sim__4249))));
        
        //#line 209 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
          ((x10_long)(x__4245)), ((x10_long)(y__4246)), ::x10::lang::Math::max(
                                                          ((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                                              ((((x10_long)(x__4245))) - (((x10_long)1ll))),
                                                              ((x10_long)(y__4246)))) - (open)),
                                                          ((::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                                              ((((x10_long)(x__4245))) - (((x10_long)1ll))),
                                                              ((x10_long)(y__4246)))) - (extend))));
        
        //#line 210 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__set(
          ((x10_long)(x__4245)), ((x10_long)(y__4246)), ::x10::lang::Math::max(
                                                          ((::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                                              ((x10_long)(x__4245)),
                                                              ((((x10_long)(y__4246))) - (((x10_long)1ll))))) - (open)),
                                                          ((::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                                              ((x10_long)(x__4245)),
                                                              ((((x10_long)(y__4246))) - (((x10_long)1ll))))) - (extend))));
        
        //#line 212 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__set(
          ((x10_long)(x__4245)), ((x10_long)(y__4246)), ::x10::lang::Math::max(
                                                          ::x10::lang::Math::max(
                                                            ::x10::lang::Math::max(
                                                              ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__apply(
                                                                ((x10_long)(x__4245)),
                                                                ((x10_long)(y__4246))),
                                                              ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__apply(
                                                                ((x10_long)(x__4245)),
                                                                ((x10_long)(y__4246)))),
                                                            ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__apply(
                                                              ((x10_long)(x__4245)),
                                                              ((x10_long)(y__4246)))),
                                                          ((x10_int) (((x10_long)0ll)))));
    }
    
    // captured environment
    ::x10::util::Pair<x10_int, x10_int> elem_p__4244;
    x10aux::captured_struct_lval<x10_int> max;
    ::x10::lang::String* seq1;
    ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index;
    ::x10::lang::String* seq2;
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
        buf.write(this->elem_p__4244);
        buf.write(this->max);
        buf.write(this->seq1);
        buf.write(this->alphabet_to_index);
        buf.write(this->seq2);
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
        ::x10::util::Pair<x10_int, x10_int> that_elem_p__4244 = buf.read< ::x10::util::Pair<x10_int, x10_int> >();
        x10aux::captured_struct_lval<x10_int> that_max = buf.read<x10aux::captured_struct_lval<x10_int> >();
        ::x10::lang::String* that_seq1 = buf.read< ::x10::lang::String*>();
        ::x10::util::HashMap<x10_char, x10_int>* that_alphabet_to_index = buf.read< ::x10::util::HashMap<x10_char, x10_int>*>();
        ::x10::lang::String* that_seq2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_int>* that_sim_score_matrix = buf.read< ::x10::array::Array_2<x10_int>*>();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_M = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_I = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > that_mat_J = buf.read<x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > >();
        x10_int that_open = buf.read<x10_int>();
        x10_int that_extend = buf.read<x10_int>();
        ::x10::array::Array_2<x10_int>* that_matrix = buf.read< ::x10::array::Array_2<x10_int>*>();
        SW_par__closure__1* this_ = new (storage) SW_par__closure__1(that_elem_p__4244, that_max, that_seq1, that_alphabet_to_index, that_seq2, that_sim_score_matrix, that_mat_M, that_mat_I, that_mat_J, that_open, that_extend, that_matrix);
        return this_;
    }
    
    SW_par__closure__1(::x10::util::Pair<x10_int, x10_int> elem_p__4244, x10aux::captured_struct_lval<x10_int> max, ::x10::lang::String* seq1, ::x10::util::HashMap<x10_char, x10_int>* alphabet_to_index, ::x10::lang::String* seq2, ::x10::array::Array_2<x10_int>* sim_score_matrix, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_M, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_I, x10aux::captured_ref_lval< ::x10::array::Array_2<x10_int> > mat_J, x10_int open, x10_int extend, ::x10::array::Array_2<x10_int>* matrix) : elem_p__4244(elem_p__4244), max(max), seq1(seq1), alphabet_to_index(alphabet_to_index), seq2(seq2), sim_score_matrix(sim_score_matrix), mat_M(mat_M), mat_I(mat_I), mat_J(mat_J), open(open), extend(extend), matrix(matrix) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/Users/sundeep/Downloads/x10/SW/SW_par.x10:196-213";
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
        seq = (&::SW_par_Strings::sl__4310);
        
        //#line 19 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10aux::nullCheck(reader)->readLine();
        
        //#line 20 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3949;
            for (line__3949 = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3949));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3949));
                
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
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4311), seq1)));
    
    //#line 32 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__3969min__4229 = ((x10_long)0ll);
    x10_long i__3969max__4230 = len2;
    {
        x10_long i__4231;
        for (i__4231 = i__3969min__4229; ((i__4231) <= (i__3969max__4230));
             i__4231 = ((i__4231) + (((x10_long)1ll)))) {
            x10_long row__4232 = i__4231;
            
            //#line 33 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::lang::String* rowStr__4228 = ::x10::lang::String::_make();
            
            //#line 34 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            rowStr__4228 = ::x10::lang::String::__plus(::x10aux::to_string(::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                                             ((x10_int) (row__4232)))), (&::SW_par_Strings::sl__4312));
            
            //#line 35 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            x10_long i__3951min__4224 = ((x10_long)0ll);
            x10_long i__3951max__4225 = len1;
            {
                x10_long i__4226;
                for (i__4226 = i__3951min__4224; ((i__4226) <= (i__3951max__4225));
                     i__4226 = ((i__4226) + (((x10_long)1ll))))
                {
                    x10_long col__4227 = i__4226;
                    
                    //#line 36 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                    rowStr__4228 = ::x10::lang::String::__plus(::x10::lang::String::__plus(rowStr__4228, (&::SW_par_Strings::sl__4312)), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                                                                                                                                           col__4227,
                                                                                                                                           row__4232));
                }
            }
            
            //#line 38 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(rowStr__4228));
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
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4313)));
        
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
          ::x10::lang::StringHelper::split((&::SW_par_Strings::sl__4311), first_line);
        
        //#line 78 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long size = (x10_long)(::x10aux::nullCheck(elements)->FMGL(size));
        
        //#line 80 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__3987min__4238 = ((x10_long)0ll);
        x10_long i__3987max__4239 = ((size) - (((x10_long)1ll)));
        {
            x10_long i__4240;
            for (i__4240 = i__3987min__4238; ((i__4240) <= (i__3987max__4239));
                 i__4240 = ((i__4240) + (((x10_long)1ll))))
            {
                x10_long i__4241 = i__4240;
                
                //#line 82 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                alphabet_to_index->put(::x10aux::nullCheck(::x10aux::nullCheck(elements)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                             i__4241))->x10::lang::String::charAt(
                                         ((x10_int) (((x10_long)0ll)))),
                                       ((x10_int) (i__4241)));
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
            ::x10::lang::Iterator< ::x10::lang::String*>* s__4023;
            for (s__4023 = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(s__4023));
                 ) {
                ::x10::lang::String* s = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(s__4023));
                
                //#line 97 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10::lang::Rail< ::x10::lang::String* >* split_line =
                  ::x10::lang::StringHelper::split((&::SW_par_Strings::sl__4312), s);
                
                //#line 98 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long s_size = (x10_long)(::x10aux::nullCheck(split_line)->FMGL(size));
                
                //#line 99 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long colNum = ((x10_long)0ll);
                
                //#line 101 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                x10_long i__4005min__4234 = ((x10_long)0ll);
                x10_long i__4005max__4235 = ((s_size) - (((x10_long)1ll)));
                {
                    x10_long i__4236;
                    for (i__4236 = i__4005min__4234; ((i__4236) <= (i__4005max__4235));
                         i__4236 = ((i__4236) + (((x10_long)1ll))))
                    {
                        x10_long i__4237 = i__4236;
                        
                        //#line 102 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                        if ((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(split_line)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                           i__4237))->x10::lang::String::length(),
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
                                                                                   i__4237), ((x10_int) (((x10_long)10ll)))));
                            
                            //#line 107 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                            colNum = ((colNum) + (((x10_long)1ll)));
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3) {
                            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc3)) {
                                ::x10::lang::Exception* e__4233 =
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
    x10_long i__4025min__4250 = ((x10_long)1ll);
    x10_long i__4025max__4251 = ((x10_long)(width));
    {
        x10_long i__4252;
        for (i__4252 = i__4025min__4250; ((i__4252) <= (i__4025max__4251));
             i__4252 = ((i__4252) + (((x10_long)1ll)))) {
            x10_long i__4253 = i__4252;
            
            //#line 140 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
              i__4253, ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
        }
    }
    
    //#line 141 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4043min__4254 = ((x10_long)1ll);
    x10_long i__4043max__4255 = ((x10_long)(height));
    {
        x10_long i__4256;
        for (i__4256 = i__4043min__4254; ((i__4256) <= (i__4043max__4255));
             i__4256 = ((i__4256) + (((x10_long)1ll)))) {
            x10_long j__4257 = i__4256;
            
            //#line 142 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_M)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4257, (-(((x10_int) (((x10_long)1000000ll))))));
        }
    }
    
    //#line 143 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::SW_par::printMatrix(seq1, seq2, ((x10_long)(width)),
                          ((x10_long)(height)), mat_M);
    
    //#line 145 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* mat_I = ::x10::array::Array_2<x10_int>::_make(((((x10_long)(width))) + (((x10_long)1ll))),
                                                                                  ((((x10_long)(height))) + (((x10_long)1ll))));
    
    //#line 146 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
      ((x10_long)0ll), ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
    
    //#line 147 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4061min__4258 = ((x10_long)1ll);
    x10_long i__4061max__4259 = ((x10_long)(height));
    {
        x10_long i__4260;
        for (i__4260 = i__4061min__4258; ((i__4260) <= (i__4061max__4259));
             i__4260 = ((i__4260) + (((x10_long)1ll)))) {
            x10_long j__4261 = i__4260;
            
            //#line 148 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4261, (-(((x10_int) (((x10_long)1000000ll))))));
            
            //#line 149 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)1ll), j__4261, (-(open)));
        }
    }
    
    //#line 151 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4079min__4262 = ((x10_long)1ll);
    x10_long i__4079max__4263 = ((x10_long)(width));
    {
        x10_long i__4264;
        for (i__4264 = i__4079min__4262; ((i__4264) <= (i__4079max__4263));
             i__4264 = ((i__4264) + (((x10_long)1ll)))) {
            x10_long i__4265 = i__4264;
            
            //#line 152 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4265, ((x10_long)0ll), (-(::SW_par::affineGap(
                                             open, extend,
                                             ((x10_int) (((i__4265) - (((x10_long)1ll)))))))));
        }
    }
    
    //#line 154 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::array::Array_2<x10_int>* mat_J = ::x10::array::Array_2<x10_int>::_make(((((x10_long)(width))) + (((x10_long)1ll))),
                                                                                  ((((x10_long)(height))) + (((x10_long)1ll))));
    
    //#line 155 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10aux::nullCheck(mat_J)->x10::array::Array_2<x10_int>::__set(
      ((x10_long)0ll), ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
    
    //#line 156 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4097min__4266 = ((x10_long)1ll);
    x10_long i__4097max__4267 = ((x10_long)(width));
    {
        x10_long i__4268;
        for (i__4268 = i__4097min__4266; ((i__4268) <= (i__4097max__4267));
             i__4268 = ((i__4268) + (((x10_long)1ll)))) {
            x10_long i__4269 = i__4268;
            
            //#line 157 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4269, ((x10_long)0ll), (-(((x10_int) (((x10_long)1000000ll))))));
            
            //#line 158 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              i__4269, ((x10_long)1ll), (-(open)));
        }
    }
    
    //#line 160 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4115min__4270 = ((x10_long)1ll);
    x10_long i__4115max__4271 = ((x10_long)(height));
    {
        x10_long i__4272;
        for (i__4272 = i__4115min__4270; ((i__4272) <= (i__4115max__4271));
             i__4272 = ((i__4272) + (((x10_long)1ll)))) {
            x10_long j__4273 = i__4272;
            
            //#line 161 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(mat_I)->x10::array::Array_2<x10_int>::__set(
              ((x10_long)0ll), j__4273, (-(::SW_par::affineGap(
                                             open, extend,
                                             ((x10_int) (((j__4273) - (((x10_long)1ll)))))))));
        }
    }
    
    //#line 163 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int max = ((x10_int) (((x10_long)0ll)));
    
    //#line 164 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int k = ((x10_int) (((x10_long)0ll)));
    
    //#line 190 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int diagonals = ((((height) + (width))) - (((x10_int) (((x10_long)1ll)))));
    
    //#line 191 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i__4135min__4274 = ((x10_long)0ll);
    x10_long i__4135max__4275 = ((((x10_long)(diagonals))) - (((x10_long)1ll)));
    {
        x10_long i__4276;
        for (i__4276 = i__4135min__4274; ((i__4276) <= (i__4135max__4275));
             i__4276 = ((i__4276) + (((x10_long)1ll)))) {
            x10_long d__4277 = i__4276;
            
            //#line 192 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* diag__4242 =
              ::SW_par::generateDiagonal(((x10_int) (d__4277)),
                                         height, width);
            
            //#line 193 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(diag__4242));
            {
                
                //#line 195 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4297 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        
                        //#line 196 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                        {
                            ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >* elem_p__4243;
                            for (elem_p__4243 = reinterpret_cast< ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >*>(::x10aux::nullCheck(diag__4242)->iterator());
                                 ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >::hasNext(::x10aux::nullCheck(elem_p__4243));
                                 ) {
                                ::x10::util::Pair<x10_int, x10_int> elem_p__4244 =
                                  ::x10::util::ListIterator< ::x10::util::Pair<x10_int, x10_int> >::next(::x10aux::nullCheck(elem_p__4243));
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW_par__closure__1)))SW_par__closure__1(elem_p__4244, &(max), seq1, alphabet_to_index, seq2, sim_score_matrix, &(mat_M), &(mat_I), &(mat_J), open, extend, matrix))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4295 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4295);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4297);
            }
        }
    }
    
}

//#line 219 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >*
  SW_par::generateDiagonal(x10_int diag, x10_int height, x10_int width) {
    
    //#line 220 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >* elements =
      ::x10::util::ArrayList< ::x10::util::Pair<x10_int, x10_int> >::_make();
    
    //#line 221 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int numDiags = ((((height) + (width))) - (((x10_int) (((x10_long)1ll)))));
    
    //#line 223 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (((diag) < (::x10::lang::Math::min(height, width))))
    {
        
        //#line 224 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4314)));
        
        //#line 225 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4153min__4278 = ((x10_long)0ll);
        x10_long i__4153max__4279 = ((x10_long)(diag));
        {
            x10_long i__4280;
            for (i__4280 = i__4153min__4278; ((i__4280) <= (i__4153max__4279));
                 i__4280 = ((i__4280) + (((x10_long)1ll))))
            {
                x10_long i__4281 = i__4280;
                
                //#line 226 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((x10_long)(diag))) - (i__4281)))),
                                                                                              ((x10_int) (i__4281))));
            }
        }
        
    } else 
    //#line 227 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if (((diag) >= (::x10::lang::Math::max(height, width))))
    {
        
        //#line 228 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4315)));
        
        //#line 229 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4171min__4282 = ((x10_long)0ll);
        x10_long i__4171max__4283 = ((((x10_long)(((numDiags) - (diag))))) - (((x10_long)1ll)));
        {
            x10_long i__4284;
            for (i__4284 = i__4171min__4282; ((i__4284) <= (i__4171max__4283));
                 i__4284 = ((i__4284) + (((x10_long)1ll))))
            {
                x10_long i__4285 = i__4284;
                
                //#line 230 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((((x10_long)(height))) - (((x10_long)1ll)))) - (i__4285)))),
                                                                                              ((x10_int) (((((((i__4285) + (((x10_long)(diag))))) + (((x10_long)1ll)))) - (((x10_long)(height))))))));
            }
        }
        
    } else 
    //#line 231 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if ((((diag) >= (width)) && ((diag) < (height)))) {
        
        //#line 232 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4316)));
        
        //#line 233 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4189min__4286 = ((x10_long)0ll);
        x10_long i__4189max__4287 = ((((x10_long)(width))) - (((x10_long)1ll)));
        {
            x10_long i__4288;
            for (i__4288 = i__4189min__4286; ((i__4288) <= (i__4189max__4287));
                 i__4288 = ((i__4288) + (((x10_long)1ll))))
            {
                x10_long i__4289 = i__4288;
                
                //#line 234 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((x10_long)(diag))) - (i__4289)))),
                                                                                              ((x10_int) (i__4289))));
            }
        }
        
    } else 
    //#line 235 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    if ((((diag) < (height)) && ((diag) >= (width)))) {
        
        //#line 236 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::SW_par_Strings::sl__4317)));
        
        //#line 237 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long i__4207min__4290 = ((x10_long)0ll);
        x10_long i__4207max__4291 = ((((x10_long)(height))) - (((x10_long)1ll)));
        {
            x10_long i__4292;
            for (i__4292 = i__4207min__4290; ((i__4292) <= (i__4207max__4291));
                 i__4292 = ((i__4292) + (((x10_long)1ll))))
            {
                x10_long i__4293 = i__4292;
                
                //#line 238 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
                ::x10aux::nullCheck(elements)->add(::x10::util::Pair<x10_int, x10_int>::_make(((x10_int) (((((((x10_long)(height))) - (((x10_long)1ll)))) - (i__4293)))),
                                                                                              ((x10_int) (((((((i__4293) + (((x10_long)(diag))))) + (((x10_long)1ll)))) - (((x10_long)(height))))))));
            }
        }
        
    }
    
    //#line 241 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    return elements;
    
}

//#line 244 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
void SW_par::backtrack(::x10::lang::String* seq1, ::x10::lang::String* seq2,
                       x10_long len1, x10_long len2, ::x10::array::Array_2<x10_int>* matrix) {
    
    //#line 245 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long i = len1;
    
    //#line 246 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_long j = len2;
    
    //#line 248 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::util::Stack<x10_long>* actions = ::x10::util::Stack<x10_long>::_make();
    
    //#line 250 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    while (((!::x10aux::struct_equals(i, ((x10_long)0ll))) ||
           (!::x10aux::struct_equals(j, ((x10_long)0ll)))))
    {
        
        //#line 251 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(i, ((x10_long)0ll))))
        {
            
            //#line 253 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 254 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)1ll));
            
            //#line 255 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            continue;
        } else 
        //#line 257 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(j, ((x10_long)0ll))))
        {
            
            //#line 259 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 260 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)2ll));
            
            //#line 261 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            continue;
        }
        
        //#line 265 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int diag = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                         ((i) - (((x10_long)1ll))), ((j) - (((x10_long)1ll))));
        
        //#line 266 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int left = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                         ((i) - (((x10_long)1ll))), j);
        
        //#line 267 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_int up = ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_int>::__apply(
                       i, ((j) - (((x10_long)1ll))));
        
        //#line 270 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((diag) >= (left)) && ((diag) >= (up)))) {
            
            //#line 272 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 273 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 274 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)0ll));
        } else 
        //#line 276 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((up) > (diag)) && ((up) > (left)))) {
            
            //#line 278 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 279 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)1ll));
        } else 
        //#line 281 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((((left) > (diag)) && ((left) >= (up)))) {
            
            //#line 283 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 284 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            ::x10aux::nullCheck(actions)->push(((x10_long)2ll));
        }
        
    }
    
    //#line 289 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* align1 = ::x10::lang::String::_make();
    
    //#line 290 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::lang::String* align2 = ::x10::lang::String::_make();
    
    //#line 293 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int s1Index = ((x10_int) (((x10_long)1ll)));
    
    //#line 294 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    x10_int s2Index = ((x10_int) (((x10_long)1ll)));
    
    //#line 296 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    while (!(::x10aux::nullCheck(actions)->isEmpty())) {
        
        //#line 297 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        x10_long action = ::x10aux::nullCheck(actions)->pop();
        
        //#line 299 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)0ll))))
        {
            
            //#line 300 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, ::x10aux::to_string(::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                                                               s1Index)));
            
            //#line 301 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, ::x10aux::to_string(::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                                               s2Index)));
            
            //#line 302 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s1Index = ((s1Index) + (((x10_int)1)));
            
            //#line 303 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s2Index = ((s2Index) + (((x10_int)1)));
        } else 
        //#line 304 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)1ll))))
        {
            
            //#line 305 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, (&::SW_par_Strings::sl__4310));
            
            //#line 306 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, ::x10aux::to_string(::x10aux::nullCheck(seq2)->x10::lang::String::charAt(
                                                                               s2Index)));
            
            //#line 307 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s2Index = ((s2Index) + (((x10_int)1)));
        } else 
        //#line 308 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
        if ((::x10aux::struct_equals(action, ((x10_long)2ll))))
        {
            
            //#line 309 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align1 = ::x10::lang::String::__plus(align1, ::x10aux::to_string(::x10aux::nullCheck(seq1)->x10::lang::String::charAt(
                                                                               s1Index)));
            
            //#line 310 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            align2 = ::x10::lang::String::__plus(align2, (&::SW_par_Strings::sl__4310));
            
            //#line 311 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
            s1Index = ((s1Index) + (((x10_int)1)));
        }
        
    }
    
    //#line 315 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4318), align1)));
    
    //#line 316 "/Users/sundeep/Downloads/x10/SW/SW_par.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_par_Strings::sl__4319), align2)));
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

::x10::lang::String SW_par_Strings::sl__4311("  ");
::x10::lang::String SW_par_Strings::sl__4312(" ");
::x10::lang::String SW_par_Strings::sl__4314("1");
::x10::lang::String SW_par_Strings::sl__4315("2");
::x10::lang::String SW_par_Strings::sl__4316("3");
::x10::lang::String SW_par_Strings::sl__4317("4");
::x10::lang::String SW_par_Strings::sl__4313("Usage: not enough arguments");
::x10::lang::String SW_par_Strings::sl__4318("align1: ");
::x10::lang::String SW_par_Strings::sl__4310("-");
::x10::lang::String SW_par_Strings::sl__4319("align2: ");

::x10::lang::VoidFun_0_0::itable<SW_par__closure__1>SW_par__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW_par__closure__1::__apply, &SW_par__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW_par__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW_par__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW_par__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW_par__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW_par__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW_par__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW_par */
/*************************************************/
