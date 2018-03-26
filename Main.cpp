#include <nan.h>
#include "OptimusPrime.h"

void InitAll(v8::Local<v8::Object> exports) {
  OptimusPrime::Init(exports);
}

NODE_MODULE(Main, InitAll)
