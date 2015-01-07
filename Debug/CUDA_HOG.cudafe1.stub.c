#define __NV_MODULE_ID _16_CUDA_HOG_cpp1_ii_04c76ffe
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#include "crt/host_runtime.h"
#include "CUDA_HOG.fatbin.c"
extern void __device_stub__ZN4CUDA15computeGradientEPK6Image3P4Vec2(const struct Image3 *, struct Vec2 *);
extern void __device_stub__ZN4CUDA16computeHistogramEPK4Vec2P13HOGDescriptor5uint2(const struct Vec2 *, HOGDescriptor *, const struct uint2&);
extern void __device_stub__ZN4CUDA18normalizeHistogramEP13HOGDescriptor(HOGDescriptor *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll_16_CUDA_HOG_cpp1_ii_04c76ffe(void) __attribute__((__constructor__));
void __device_stub__ZN4CUDA15computeGradientEPK6Image3P4Vec2(const struct Image3 *__par0, struct Vec2 *__par1){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(const struct Image3 *, struct Vec2 *))CUDA::computeGradient)));}
# 28 "../src/CUDA_HOG.cu"
void CUDA::computeGradient( const struct Image3 *__cuda_0,struct Vec2 *__cuda_1)
# 28 "../src/CUDA_HOG.cu"
{__device_stub__ZN4CUDA15computeGradientEPK6Image3P4Vec2( __cuda_0,__cuda_1);
# 95 "../src/CUDA_HOG.cu"
}
# 1 "CUDA_HOG.cudafe1.stub.c"
void __device_stub__ZN4CUDA16computeHistogramEPK4Vec2P13HOGDescriptor5uint2( const struct Vec2 *__par0,  HOGDescriptor *__par1,  const struct uint2&__par2) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArg(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(const struct Vec2 *, HOGDescriptor *, const struct uint2))CUDA::computeHistogram))); }
# 135 "../src/CUDA_HOG.cu"
void CUDA::computeHistogram( const struct Vec2 *__cuda_0,HOGDescriptor *__cuda_1,const struct uint2 __cuda_2)
# 136 "../src/CUDA_HOG.cu"
{__device_stub__ZN4CUDA16computeHistogramEPK4Vec2P13HOGDescriptor5uint2( __cuda_0,__cuda_1,__cuda_2);
# 245 "../src/CUDA_HOG.cu"
}
# 1 "CUDA_HOG.cudafe1.stub.c"
void __device_stub__ZN4CUDA18normalizeHistogramEP13HOGDescriptor( HOGDescriptor *__par0) {  __cudaSetupArgSimple(__par0, 0UL); __cudaLaunch(((char *)((void ( *)(HOGDescriptor *))CUDA::normalizeHistogram))); }
# 246 "../src/CUDA_HOG.cu"
void CUDA::normalizeHistogram( HOGDescriptor *__cuda_0)
# 246 "../src/CUDA_HOG.cu"
{__device_stub__ZN4CUDA18normalizeHistogramEP13HOGDescriptor( __cuda_0);
# 310 "../src/CUDA_HOG.cu"
}
# 1 "CUDA_HOG.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T2109) {  __nv_dummy_param_ref(__T2109); __nv_save_fatbinhandle_for_managed_rt(__T2109); __cudaRegisterEntry(__T2109, ((void ( *)(HOGDescriptor *))CUDA::normalizeHistogram), _ZN4CUDA18normalizeHistogramEP13HOGDescriptor, (-1)); __cudaRegisterEntry(__T2109, ((void ( *)(const struct Vec2 *, HOGDescriptor *, const struct uint2))CUDA::computeHistogram), _ZN4CUDA16computeHistogramEPK4Vec2P13HOGDescriptor5uint2, (-1)); __cudaRegisterEntry(__T2109, ((void ( *)(const struct Image3 *, struct Vec2 *))CUDA::computeGradient), _ZN4CUDA15computeGradientEPK6Image3P4Vec2, (-1)); }
static void __sti____cudaRegisterAll_16_CUDA_HOG_cpp1_ii_04c76ffe(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }
