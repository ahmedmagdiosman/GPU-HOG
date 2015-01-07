# 1 "Vec2.cudafe1.gpu"
# 27 "../src/Vec2.hpp"
struct Vec2;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
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
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 3407 "../src/Vec2.cu"
__asm(".align 2");
# 63 "../src/Vec2.hpp"
__asm(".align 2");
# 66 "../src/Vec2.hpp"
__asm(".align 2");
# 73 "../src/Vec2.hpp"
__asm(".align 2");
# 49 "../src/Vec2.cu"
__asm(".align 2");

__asm(".align 2");
# 22 "../src/Vec2.cu"
__asm(".align 2");

__asm(".align 2");
# 30 "../src/Vec2.cu"
__asm(".align 2");

__asm(".align 2");
# 54 "../src/Vec2.cu"
__asm(".align 2");

#include "Vec2.cudafe2.stub.c"
