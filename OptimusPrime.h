#ifndef OPTIMUS_INCLUDEED
#define OPTIMUS_INCLUDEED

#include <nan.h>

class OptimusPrime : public Nan::ObjectWrap
{
  public:
    static void Init(v8::Local<v8::Object> exports);

  private:
    explicit OptimusPrime();
    ~OptimusPrime();

    static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);
    static void IsThatAPrimeNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
    static void Clean(const Nan::FunctionCallbackInfo<v8::Value>& info);
    static Nan::Persistent<v8::Function> constructor;
    bool isPrime(int p);
};

#endif
