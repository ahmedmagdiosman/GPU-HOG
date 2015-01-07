# 1 "CUDA_HOG.cudafe1.gpu"
# 29 "../src/Image3.hpp"
struct Image3;
# 27 "../src/Vec2.hpp"
struct Vec2;
# 52 "../src/CUDA_HOG.hpp"
struct HOGDescriptor;
# 56 "../src/CUDA_HOG.hpp"
struct CUDA_HOG;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 29 "../src/Image3.hpp"
struct Image3 {
# 50 "../src/Image3.hpp"
struct uchar3 *data;
# 51 "../src/Image3.hpp"
int imWidth;
# 52 "../src/Image3.hpp"
int imHeight;
# 53 "../src/Image3.hpp"
size_t imSize;};
# 27 "../src/Vec2.hpp"
struct Vec2 {
# 46 "../src/Vec2.hpp"
struct float2 *data;
# 47 "../src/Vec2.hpp"
int imWidth;
# 48 "../src/Vec2.hpp"
int imHeight;
# 49 "../src/Vec2.hpp"
size_t imSize;};
# 52 "../src/CUDA_HOG.hpp"
struct HOGDescriptor {
# 53 "../src/CUDA_HOG.hpp"
float bin[36];};
# 54 "../src/CUDA_HOG.hpp"
typedef struct HOGDescriptor HOGDescriptor;
# 56 "../src/CUDA_HOG.hpp"
struct CUDA_HOG {
# 66 "../src/CUDA_HOG.hpp"
struct Image3 img;
# 67 "../src/CUDA_HOG.hpp"
struct Vec2 imgGradient;
# 68 "../src/CUDA_HOG.hpp"
HOGDescriptor *hogDsc;
# 69 "../src/CUDA_HOG.hpp"
unsigned numWindowsX;
# 70 "../src/CUDA_HOG.hpp"
unsigned numWindowsY;
# 71 "../src/CUDA_HOG.hpp"
unsigned ftrSize; char __nv_no_debug_dummy_end_padding_0[4];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 74 "../src/CUDA_HOG.cu"
extern int fdivide();
# 162 "../src/CUDA_HOG.cu"
extern int __float2int_rz();
# 162 "../src/CUDA_HOG.cu"
extern int fdividef();
# 311 "../src/CUDA_HOG.cu"
__asm(".align 2");
# 420 "/usr/local/cuda-6.5/bin/..//include/vector_types.h"
__asm(".align 2");

__asm(".align 2");
# 85 "../src/Image3.hpp"
__asm(".align 2");
# 88 "../src/Image3.hpp"
__asm(".align 2");
# 91 "../src/Image3.hpp"
__asm(".align 2");
# 95 "../src/Image3.hpp"
__asm(".align 2");
# 106 "../src/Image3.hpp"
__asm(".align 2");
# 63 "../src/Vec2.hpp"
__asm(".align 2");
# 66 "../src/Vec2.hpp"
__asm(".align 2");
# 69 "../src/Vec2.hpp"
__asm(".align 2");
# 81 "../src/Vec2.hpp"
__asm(".align 2");
# 84 "../src/Vec2.hpp"
__asm(".align 2");
# 324 "../src/CUDA_HOG.cu"
__asm(".align 2");

__asm(".align 2");
# 503 "../src/CUDA_HOG.cu"
__asm(".align 2");

#include "CUDA_HOG.cudafe2.stub.c"
