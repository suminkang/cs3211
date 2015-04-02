/*************************************************/
/* START of SW */
#include <SW.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/lang/Boolean.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/io/InputStreamReader.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 6 "/Users/sundeep/Downloads/x10/SW/SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 7 "/Users/sundeep/Downloads/x10/SW/SW.x10"
    ::x10::lang::String* f_name = (&::SW_Strings::sl__57);
    
    //#line 8 "/Users/sundeep/Downloads/x10/SW/SW.x10"
    ::x10::io::File* file = ::x10::io::File::_make(f_name);
    
    //#line 9 "/Users/sundeep/Downloads/x10/SW/SW.x10"
    if (file->exists()) {
        
        //#line 10 "/Users/sundeep/Downloads/x10/SW/SW.x10"
        ::x10::io::FileReader* reader = file->openRead();
        
        //#line 11 "/Users/sundeep/Downloads/x10/SW/SW.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* s__56;
            for (s__56 = ::x10aux::nullCheck(::x10aux::nullCheck(reader)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(s__56));
                 ) {
                ::x10::lang::String* s = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(s__56));
                
                //#line 12 "/Users/sundeep/Downloads/x10/SW/SW.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(s));
                
                //#line 13 "/Users/sundeep/Downloads/x10/SW/SW.x10"
                break;
            }
        }
        
        //#line 15 "/Users/sundeep/Downloads/x10/SW/SW.x10"
        ::x10aux::nullCheck(reader)->close();
    }
    
}

//#line 5 "/Users/sundeep/Downloads/x10/SW/SW.x10"
::SW* SW::SW____this__SW() {
    return this;
    
}
void SW::_constructor() {
    this->SW::__fieldInitializers_SW();
}
::SW* SW::_make() {
    ::SW* this_ = new (::x10aux::alloc_z< ::SW>()) ::SW();
    this_->_constructor();
    return this_;
}


void SW::__fieldInitializers_SW() {
 
}
const ::x10aux::serialization_id_t SW::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::SW::_deserializer);

void SW::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::SW::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::SW* this_ = new (::x10aux::alloc_z< ::SW>()) ::SW();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void SW::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType SW::rtt;
void SW::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("SW",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String SW_Strings::sl__57("BLOSUM62");

/* END of SW */
/*************************************************/
