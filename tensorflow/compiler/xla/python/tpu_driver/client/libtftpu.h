/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_XLA_PYTHON_TPU_DRIVER_CLIENT_LIBTFTPU_H_
#define TENSORFLOW_COMPILER_XLA_PYTHON_TPU_DRIVER_CLIENT_LIBTFTPU_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TfTpuDriver_CompileOp TfTpuDriver_CompileOp;

TfTpuDriver_CompileOp* TfTpuDriver_CompileOpConstructor(void* ctx);

void TfTpuDriver_CompileOpExecute(TfTpuDriver_CompileOp* op, void* ctx);

void TfTpuDriver_CompileOpFree(TfTpuDriver_CompileOp* op);

#ifdef __cplusplus
}
#endif

#endif  // TENSORFLOW_COMPILER_XLA_PYTHON_TPU_DRIVER_CLIENT_LIBTFTPU_H_
