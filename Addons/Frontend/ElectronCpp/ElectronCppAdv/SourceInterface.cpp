#include <nan.h>
#include "ElectronCpp1.h"
#include "TestHeader.h"
//A method to call External Dll
NAN_METHOD(Add){
    TestDll::TestDllClass* AddObj = new TestDll::TestDllClass();
    info.GetReturnValue().Set(Nan::New(AddObj->TestDllFunc(2, 3)));
};
NAN_METHOD(HelloWorld){
    ElectronCpp1::ElectronCpp1Class* Obj;
    info.GetReturnValue().Set(Nan::New(Obj->HelloWorld()).ToLocalChecked());
};

NAN_MODULE_INIT(Initialize) {
    NAN_EXPORT(target, Add);
    NAN_EXPORT(target, HelloWorld);
};

NODE_MODULE(addon, Initialize);