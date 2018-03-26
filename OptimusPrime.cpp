#include "OptimusPrime.h"
#include <math.h>

Nan::Persistent<v8::Function> OptimusPrime::constructor;

OptimusPrime::OptimusPrime()
{
}

OptimusPrime::~OptimusPrime() {
}

void OptimusPrime::Init(v8::Local<v8::Object> exports) {
  Nan::HandleScope scope;

  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("OptimusPrime").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Nan::SetPrototypeMethod(tpl, "isThatAPrimeNumber", IsThatAPrimeNumber);
  Nan::SetPrototypeMethod(tpl, "clean", Clean);

  constructor.Reset(tpl->GetFunction());
  exports->Set(Nan::New("OptimusPrime").ToLocalChecked(), tpl->GetFunction());
}

void OptimusPrime::Clean(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  OptimusPrime* obj = ObjectWrap::Unwrap<OptimusPrime>(info.Holder());
  obj->~OptimusPrime();
}

void OptimusPrime::New(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  if (info.IsConstructCall()) {
    // `new OptimusPrime(...)`
    OptimusPrime* obj = new OptimusPrime();
    obj->Wrap(info.This());
    info.GetReturnValue().Set(info.This());
  }
}

void OptimusPrime::IsThatAPrimeNumber(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  OptimusPrime* obj = ObjectWrap::Unwrap<OptimusPrime>(info.Holder());
  bool testResult = obj->isPrime(123);

  info.GetReturnValue().Set(Nan::New(testResult));
}

bool OptimusPrime::isPrime(int p) {
    int upper = sqrt(p);
    for(int i = 2; i <= upper; i++) {
        if (p % i == 0 ) {
            return false;
        }
    }
    return true;
}
