#include <nan.h>

Nan::MaybeLocal<v8::Function> fn;
v8::Local<v8::Value> argv[] {Nan::Null()};
Nan::Callback cb;

NAN_METHOD(Register) {
  const v8::Local<v8::Function> val = Nan::To<v8::Function>(info[0]).ToLocalChecked();
  cb.Reset(val);
}

NAN_METHOD(Invoke) {
  cb.Call(1, argv);
}

NAN_MODULE_INIT(Init) {
Nan::Set(target
    , Nan::New<v8::String>("register").ToLocalChecked()
    , Nan::New<v8::FunctionTemplate>(Register)->GetFunction()
  );
Nan::Set(target
    , Nan::New<v8::String>("invoke").ToLocalChecked()
    , Nan::New<v8::FunctionTemplate>(Invoke)->GetFunction()
  );
}

NODE_MODULE(addon, Init)