#define __NV_MODULE_ID _12_main_cpp1_ii_main
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#include "crt/host_runtime.h"
#include "main.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll_12_main_cpp1_ii_main(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T21276){__nv_dummy_param_ref(__T21276);__nv_save_fatbinhandle_for_managed_rt(__T21276);}
static void __sti____cudaRegisterAll_12_main_cpp1_ii_main(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}
