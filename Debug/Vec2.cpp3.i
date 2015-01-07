# 1 "Vec2.cudafe2.gpu"
# 1 "/home/doni/Documents/Research/CUDA_Workspace/HOGCUDA/Debug//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "Vec2.cudafe2.gpu"
# 27 "../src/Vec2.hpp"
struct Vec2;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 1 3
# 38 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 3
# 1 "/usr/local/cuda-6.5/bin/..//include/host_defines.h" 1 3
# 39 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 2 3





typedef unsigned long long __texture_type__;
typedef unsigned long long __surface_type__;
# 249 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 3
# 1 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 1 3
# 56 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 3
# 1 "/usr/local/cuda-6.5/include/device_types.h" 1 3
# 53 "/usr/local/cuda-6.5/include/device_types.h" 3
# 1 "/usr/local/cuda-6.5/include/host_defines.h" 1 3
# 54 "/usr/local/cuda-6.5/include/device_types.h" 2 3







enum cudaRoundMode
{
    cudaRoundNearest,
    cudaRoundZero,
    cudaRoundPosInf,
    cudaRoundMinInf
};
# 57 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/driver_types.h" 1 3
# 128 "/usr/local/cuda-6.5/include/driver_types.h" 3
enum cudaError
{





    cudaSuccess = 0,





    cudaErrorMissingConfiguration = 1,





    cudaErrorMemoryAllocation = 2,





    cudaErrorInitializationError = 3,
# 163 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorLaunchFailure = 4,
# 172 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorPriorLaunchFailure = 5,
# 182 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorLaunchTimeout = 6,
# 191 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorLaunchOutOfResources = 7,





    cudaErrorInvalidDeviceFunction = 8,
# 206 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorInvalidConfiguration = 9,





    cudaErrorInvalidDevice = 10,





    cudaErrorInvalidValue = 11,





    cudaErrorInvalidPitchValue = 12,





    cudaErrorInvalidSymbol = 13,




    cudaErrorMapBufferObjectFailed = 14,




    cudaErrorUnmapBufferObjectFailed = 15,





    cudaErrorInvalidHostPointer = 16,





    cudaErrorInvalidDevicePointer = 17,





    cudaErrorInvalidTexture = 18,





    cudaErrorInvalidTextureBinding = 19,






    cudaErrorInvalidChannelDescriptor = 20,





    cudaErrorInvalidMemcpyDirection = 21,
# 287 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorAddressOfConstant = 22,
# 296 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorTextureFetchFailed = 23,
# 305 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorTextureNotBound = 24,
# 314 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorSynchronizationError = 25,





    cudaErrorInvalidFilterSetting = 26,





    cudaErrorInvalidNormSetting = 27,







    cudaErrorMixedDeviceExecution = 28,






    cudaErrorCudartUnloading = 29,




    cudaErrorUnknown = 30,







    cudaErrorNotYetImplemented = 31,
# 363 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorMemoryValueTooLarge = 32,






    cudaErrorInvalidResourceHandle = 33,







    cudaErrorNotReady = 34,






    cudaErrorInsufficientDriver = 35,
# 398 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorSetOnActiveProcess = 36,





    cudaErrorInvalidSurface = 37,





    cudaErrorNoDevice = 38,





    cudaErrorECCUncorrectable = 39,




    cudaErrorSharedObjectSymbolNotFound = 40,




    cudaErrorSharedObjectInitFailed = 41,





    cudaErrorUnsupportedLimit = 42,





    cudaErrorDuplicateVariableName = 43,





    cudaErrorDuplicateTextureName = 44,





    cudaErrorDuplicateSurfaceName = 45,
# 460 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorDevicesUnavailable = 46,




    cudaErrorInvalidKernelImage = 47,







    cudaErrorNoKernelImageForDevice = 48,
# 486 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorIncompatibleDriverContext = 49,






    cudaErrorPeerAccessAlreadyEnabled = 50,






    cudaErrorPeerAccessNotEnabled = 51,





    cudaErrorDeviceAlreadyInUse = 54,






    cudaErrorProfilerDisabled = 55,







    cudaErrorProfilerNotInitialized = 56,






    cudaErrorProfilerAlreadyStarted = 57,






     cudaErrorProfilerAlreadyStopped = 58,







    cudaErrorAssert = 59,






    cudaErrorTooManyPeers = 60,





    cudaErrorHostMemoryAlreadyRegistered = 61,





    cudaErrorHostMemoryNotRegistered = 62,




    cudaErrorOperatingSystem = 63,





    cudaErrorPeerAccessUnsupported = 64,






    cudaErrorLaunchMaxDepthExceeded = 65,







    cudaErrorLaunchFileScopedTex = 66,







    cudaErrorLaunchFileScopedSurf = 67,
# 611 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorSyncDepthExceeded = 68,
# 623 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorLaunchPendingCountExceeded = 69,




    cudaErrorNotPermitted = 70,





    cudaErrorNotSupported = 71,
# 643 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorHardwareStackError = 72,







    cudaErrorIllegalInstruction = 73,
# 660 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorMisalignedAddress = 74,
# 671 "/usr/local/cuda-6.5/include/driver_types.h" 3
    cudaErrorInvalidAddressSpace = 75,







    cudaErrorInvalidPc = 76,







    cudaErrorIllegalAddress = 77,





    cudaErrorInvalidPtx = 78,




    cudaErrorInvalidGraphicsContext = 79,





    cudaErrorStartupFailure = 0x7f,







    cudaErrorApiFailureBase = 10000
};




enum cudaChannelFormatKind
{
    cudaChannelFormatKindSigned = 0,
    cudaChannelFormatKindUnsigned = 1,
    cudaChannelFormatKindFloat = 2,
    cudaChannelFormatKindNone = 3
};




struct cudaChannelFormatDesc
{
    int x;
    int y;
    int z;
    int w;
    enum cudaChannelFormatKind f;
};




typedef struct cudaArray *cudaArray_t;




typedef const struct cudaArray *cudaArray_const_t;

struct cudaArray;




typedef struct cudaMipmappedArray *cudaMipmappedArray_t;




typedef const struct cudaMipmappedArray *cudaMipmappedArray_const_t;

struct cudaMipmappedArray;




enum cudaMemoryType
{
    cudaMemoryTypeHost = 1,
    cudaMemoryTypeDevice = 2
};




enum cudaMemcpyKind
{
    cudaMemcpyHostToHost = 0,
    cudaMemcpyHostToDevice = 1,
    cudaMemcpyDeviceToHost = 2,
    cudaMemcpyDeviceToDevice = 3,
    cudaMemcpyDefault = 4
};






struct cudaPitchedPtr
{
    void *ptr;
    size_t pitch;
    size_t xsize;
    size_t ysize;
};






struct cudaExtent
{
    size_t width;
    size_t height;
    size_t depth;
};






struct cudaPos
{
    size_t x;
    size_t y;
    size_t z;
};




struct cudaMemcpy3DParms
{
    cudaArray_t srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;

    cudaArray_t dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;

    struct cudaExtent extent;
    enum cudaMemcpyKind kind;
};




struct cudaMemcpy3DPeerParms
{
    cudaArray_t srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;
    int srcDevice;

    cudaArray_t dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;
    int dstDevice;

    struct cudaExtent extent;
};




struct cudaGraphicsResource;




enum cudaGraphicsRegisterFlags
{
    cudaGraphicsRegisterFlagsNone = 0,
    cudaGraphicsRegisterFlagsReadOnly = 1,
    cudaGraphicsRegisterFlagsWriteDiscard = 2,
    cudaGraphicsRegisterFlagsSurfaceLoadStore = 4,
    cudaGraphicsRegisterFlagsTextureGather = 8
};




enum cudaGraphicsMapFlags
{
    cudaGraphicsMapFlagsNone = 0,
    cudaGraphicsMapFlagsReadOnly = 1,
    cudaGraphicsMapFlagsWriteDiscard = 2
};




enum cudaGraphicsCubeFace
{
    cudaGraphicsCubeFacePositiveX = 0x00,
    cudaGraphicsCubeFaceNegativeX = 0x01,
    cudaGraphicsCubeFacePositiveY = 0x02,
    cudaGraphicsCubeFaceNegativeY = 0x03,
    cudaGraphicsCubeFacePositiveZ = 0x04,
    cudaGraphicsCubeFaceNegativeZ = 0x05
};




enum cudaResourceType
{
    cudaResourceTypeArray = 0x00,
    cudaResourceTypeMipmappedArray = 0x01,
    cudaResourceTypeLinear = 0x02,
    cudaResourceTypePitch2D = 0x03
};




enum cudaResourceViewFormat
{
    cudaResViewFormatNone = 0x00,
    cudaResViewFormatUnsignedChar1 = 0x01,
    cudaResViewFormatUnsignedChar2 = 0x02,
    cudaResViewFormatUnsignedChar4 = 0x03,
    cudaResViewFormatSignedChar1 = 0x04,
    cudaResViewFormatSignedChar2 = 0x05,
    cudaResViewFormatSignedChar4 = 0x06,
    cudaResViewFormatUnsignedShort1 = 0x07,
    cudaResViewFormatUnsignedShort2 = 0x08,
    cudaResViewFormatUnsignedShort4 = 0x09,
    cudaResViewFormatSignedShort1 = 0x0a,
    cudaResViewFormatSignedShort2 = 0x0b,
    cudaResViewFormatSignedShort4 = 0x0c,
    cudaResViewFormatUnsignedInt1 = 0x0d,
    cudaResViewFormatUnsignedInt2 = 0x0e,
    cudaResViewFormatUnsignedInt4 = 0x0f,
    cudaResViewFormatSignedInt1 = 0x10,
    cudaResViewFormatSignedInt2 = 0x11,
    cudaResViewFormatSignedInt4 = 0x12,
    cudaResViewFormatHalf1 = 0x13,
    cudaResViewFormatHalf2 = 0x14,
    cudaResViewFormatHalf4 = 0x15,
    cudaResViewFormatFloat1 = 0x16,
    cudaResViewFormatFloat2 = 0x17,
    cudaResViewFormatFloat4 = 0x18,
    cudaResViewFormatUnsignedBlockCompressed1 = 0x19,
    cudaResViewFormatUnsignedBlockCompressed2 = 0x1a,
    cudaResViewFormatUnsignedBlockCompressed3 = 0x1b,
    cudaResViewFormatUnsignedBlockCompressed4 = 0x1c,
    cudaResViewFormatSignedBlockCompressed4 = 0x1d,
    cudaResViewFormatUnsignedBlockCompressed5 = 0x1e,
    cudaResViewFormatSignedBlockCompressed5 = 0x1f,
    cudaResViewFormatUnsignedBlockCompressed6H = 0x20,
    cudaResViewFormatSignedBlockCompressed6H = 0x21,
    cudaResViewFormatUnsignedBlockCompressed7 = 0x22
};




struct cudaResourceDesc {
 enum cudaResourceType resType;

 union {
  struct {
   cudaArray_t array;
  } array;
        struct {
            cudaMipmappedArray_t mipmap;
        } mipmap;
  struct {
   void *devPtr;
   struct cudaChannelFormatDesc desc;
   size_t sizeInBytes;
  } linear;
  struct {
   void *devPtr;
   struct cudaChannelFormatDesc desc;
   size_t width;
   size_t height;
   size_t pitchInBytes;
  } pitch2D;
 } res;
};




struct cudaResourceViewDesc
{
    enum cudaResourceViewFormat format;
    size_t width;
    size_t height;
    size_t depth;
    unsigned int firstMipmapLevel;
    unsigned int lastMipmapLevel;
    unsigned int firstLayer;
    unsigned int lastLayer;
};




struct cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 1011 "/usr/local/cuda-6.5/include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;




    int isManaged;
};




struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;





   int cacheModeCA;
};




enum cudaFuncCache
{
    cudaFuncCachePreferNone = 0,
    cudaFuncCachePreferShared = 1,
    cudaFuncCachePreferL1 = 2,
    cudaFuncCachePreferEqual = 3
};





enum cudaSharedMemConfig
{
    cudaSharedMemBankSizeDefault = 0,
    cudaSharedMemBankSizeFourByte = 1,
    cudaSharedMemBankSizeEightByte = 2
};




enum cudaComputeMode
{
    cudaComputeModeDefault = 0,
    cudaComputeModeExclusive = 1,
    cudaComputeModeProhibited = 2,
    cudaComputeModeExclusiveProcess = 3
};




enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02,
    cudaLimitDevRuntimeSyncDepth = 0x03,
    cudaLimitDevRuntimePendingLaunchCount = 0x04
};




enum cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};




enum cudaDeviceAttr
{
    cudaDevAttrMaxThreadsPerBlock = 1,
    cudaDevAttrMaxBlockDimX = 2,
    cudaDevAttrMaxBlockDimY = 3,
    cudaDevAttrMaxBlockDimZ = 4,
    cudaDevAttrMaxGridDimX = 5,
    cudaDevAttrMaxGridDimY = 6,
    cudaDevAttrMaxGridDimZ = 7,
    cudaDevAttrMaxSharedMemoryPerBlock = 8,
    cudaDevAttrTotalConstantMemory = 9,
    cudaDevAttrWarpSize = 10,
    cudaDevAttrMaxPitch = 11,
    cudaDevAttrMaxRegistersPerBlock = 12,
    cudaDevAttrClockRate = 13,
    cudaDevAttrTextureAlignment = 14,
    cudaDevAttrGpuOverlap = 15,
    cudaDevAttrMultiProcessorCount = 16,
    cudaDevAttrKernelExecTimeout = 17,
    cudaDevAttrIntegrated = 18,
    cudaDevAttrCanMapHostMemory = 19,
    cudaDevAttrComputeMode = 20,
    cudaDevAttrMaxTexture1DWidth = 21,
    cudaDevAttrMaxTexture2DWidth = 22,
    cudaDevAttrMaxTexture2DHeight = 23,
    cudaDevAttrMaxTexture3DWidth = 24,
    cudaDevAttrMaxTexture3DHeight = 25,
    cudaDevAttrMaxTexture3DDepth = 26,
    cudaDevAttrMaxTexture2DLayeredWidth = 27,
    cudaDevAttrMaxTexture2DLayeredHeight = 28,
    cudaDevAttrMaxTexture2DLayeredLayers = 29,
    cudaDevAttrSurfaceAlignment = 30,
    cudaDevAttrConcurrentKernels = 31,
    cudaDevAttrEccEnabled = 32,
    cudaDevAttrPciBusId = 33,
    cudaDevAttrPciDeviceId = 34,
    cudaDevAttrTccDriver = 35,
    cudaDevAttrMemoryClockRate = 36,
    cudaDevAttrGlobalMemoryBusWidth = 37,
    cudaDevAttrL2CacheSize = 38,
    cudaDevAttrMaxThreadsPerMultiProcessor = 39,
    cudaDevAttrAsyncEngineCount = 40,
    cudaDevAttrUnifiedAddressing = 41,
    cudaDevAttrMaxTexture1DLayeredWidth = 42,
    cudaDevAttrMaxTexture1DLayeredLayers = 43,
    cudaDevAttrMaxTexture2DGatherWidth = 45,
    cudaDevAttrMaxTexture2DGatherHeight = 46,
    cudaDevAttrMaxTexture3DWidthAlt = 47,
    cudaDevAttrMaxTexture3DHeightAlt = 48,
    cudaDevAttrMaxTexture3DDepthAlt = 49,
    cudaDevAttrPciDomainId = 50,
    cudaDevAttrTexturePitchAlignment = 51,
    cudaDevAttrMaxTextureCubemapWidth = 52,
    cudaDevAttrMaxTextureCubemapLayeredWidth = 53,
    cudaDevAttrMaxTextureCubemapLayeredLayers = 54,
    cudaDevAttrMaxSurface1DWidth = 55,
    cudaDevAttrMaxSurface2DWidth = 56,
    cudaDevAttrMaxSurface2DHeight = 57,
    cudaDevAttrMaxSurface3DWidth = 58,
    cudaDevAttrMaxSurface3DHeight = 59,
    cudaDevAttrMaxSurface3DDepth = 60,
    cudaDevAttrMaxSurface1DLayeredWidth = 61,
    cudaDevAttrMaxSurface1DLayeredLayers = 62,
    cudaDevAttrMaxSurface2DLayeredWidth = 63,
    cudaDevAttrMaxSurface2DLayeredHeight = 64,
    cudaDevAttrMaxSurface2DLayeredLayers = 65,
    cudaDevAttrMaxSurfaceCubemapWidth = 66,
    cudaDevAttrMaxSurfaceCubemapLayeredWidth = 67,
    cudaDevAttrMaxSurfaceCubemapLayeredLayers = 68,
    cudaDevAttrMaxTexture1DLinearWidth = 69,
    cudaDevAttrMaxTexture2DLinearWidth = 70,
    cudaDevAttrMaxTexture2DLinearHeight = 71,
    cudaDevAttrMaxTexture2DLinearPitch = 72,
    cudaDevAttrMaxTexture2DMipmappedWidth = 73,
    cudaDevAttrMaxTexture2DMipmappedHeight = 74,
    cudaDevAttrComputeCapabilityMajor = 75,
    cudaDevAttrComputeCapabilityMinor = 76,
    cudaDevAttrMaxTexture1DMipmappedWidth = 77,
    cudaDevAttrStreamPrioritiesSupported = 78,
    cudaDevAttrGlobalL1CacheSupported = 79,
    cudaDevAttrLocalL1CacheSupported = 80,
    cudaDevAttrMaxSharedMemoryPerMultiprocessor = 81,
    cudaDevAttrMaxRegistersPerMultiprocessor = 82,
    cudaDevAttrManagedMemory = 83,
    cudaDevAttrIsMultiGpuBoard = 84,
    cudaDevAttrMultiGpuBoardGroupID = 85
};




struct cudaDeviceProp
{
    char name[256];
    size_t totalGlobalMem;
    size_t sharedMemPerBlock;
    int regsPerBlock;
    int warpSize;
    size_t memPitch;
    int maxThreadsPerBlock;
    int maxThreadsDim[3];
    int maxGridSize[3];
    int clockRate;
    size_t totalConstMem;
    int major;
    int minor;
    size_t textureAlignment;
    size_t texturePitchAlignment;
    int deviceOverlap;
    int multiProcessorCount;
    int kernelExecTimeoutEnabled;
    int integrated;
    int canMapHostMemory;
    int computeMode;
    int maxTexture1D;
    int maxTexture1DMipmap;
    int maxTexture1DLinear;
    int maxTexture2D[2];
    int maxTexture2DMipmap[2];
    int maxTexture2DLinear[3];
    int maxTexture2DGather[2];
    int maxTexture3D[3];
    int maxTexture3DAlt[3];
    int maxTextureCubemap;
    int maxTexture1DLayered[2];
    int maxTexture2DLayered[3];
    int maxTextureCubemapLayered[2];
    int maxSurface1D;
    int maxSurface2D[2];
    int maxSurface3D[3];
    int maxSurface1DLayered[2];
    int maxSurface2DLayered[3];
    int maxSurfaceCubemap;
    int maxSurfaceCubemapLayered[2];
    size_t surfaceAlignment;
    int concurrentKernels;
    int ECCEnabled;
    int pciBusID;
    int pciDeviceID;
    int pciDomainID;
    int tccDriver;
    int asyncEngineCount;
    int unifiedAddressing;
    int memoryClockRate;
    int memoryBusWidth;
    int l2CacheSize;
    int maxThreadsPerMultiProcessor;
    int streamPrioritiesSupported;
    int globalL1CacheSupported;
    int localL1CacheSupported;
    size_t sharedMemPerMultiprocessor;
    int regsPerMultiprocessor;
    int managedMemory;
    int isMultiGpuBoard;
    int multiGpuBoardGroupID;
};
# 1375 "/usr/local/cuda-6.5/include/driver_types.h" 3
typedef struct cudaIpcEventHandle_st
{
    char reserved[64];
}cudaIpcEventHandle_t;




typedef struct cudaIpcMemHandle_st
{
    char reserved[64];
}cudaIpcMemHandle_t;
# 1397 "/usr/local/cuda-6.5/include/driver_types.h" 3
typedef enum cudaError cudaError_t;




typedef struct CUstream_st *cudaStream_t;




typedef struct CUevent_st *cudaEvent_t;




typedef struct cudaGraphicsResource *cudaGraphicsResource_t;




typedef struct CUuuid_st cudaUUID_t;




typedef enum cudaOutputMode cudaOutputMode_t;
# 58 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/surface_types.h" 1 3
# 59 "/usr/local/cuda-6.5/include/surface_types.h" 3
# 1 "/usr/local/cuda-6.5/include/driver_types.h" 1 3
# 60 "/usr/local/cuda-6.5/include/surface_types.h" 2 3
# 84 "/usr/local/cuda-6.5/include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
    cudaBoundaryModeZero = 0,
    cudaBoundaryModeClamp = 1,
    cudaBoundaryModeTrap = 2
};




enum cudaSurfaceFormatMode
{
    cudaFormatModeForced = 0,
    cudaFormatModeAuto = 1
};




struct surfaceReference
{



    struct cudaChannelFormatDesc channelDesc;
};




typedef unsigned long long cudaSurfaceObject_t;
# 59 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/texture_types.h" 1 3
# 84 "/usr/local/cuda-6.5/include/texture_types.h" 3
enum cudaTextureAddressMode
{
    cudaAddressModeWrap = 0,
    cudaAddressModeClamp = 1,
    cudaAddressModeMirror = 2,
    cudaAddressModeBorder = 3
};




enum cudaTextureFilterMode
{
    cudaFilterModePoint = 0,
    cudaFilterModeLinear = 1
};




enum cudaTextureReadMode
{
    cudaReadModeElementType = 0,
    cudaReadModeNormalizedFloat = 1
};




struct textureReference
{



    int normalized;



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureAddressMode addressMode[3];



    struct cudaChannelFormatDesc channelDesc;



    int sRGB;



    unsigned int maxAnisotropy;



    enum cudaTextureFilterMode mipmapFilterMode;



    float mipmapLevelBias;



    float minMipmapLevelClamp;



    float maxMipmapLevelClamp;
    int __cudaReserved[15];
};




struct cudaTextureDesc
{



    enum cudaTextureAddressMode addressMode[3];



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureReadMode readMode;



    int sRGB;



    int normalizedCoords;



    unsigned int maxAnisotropy;



    enum cudaTextureFilterMode mipmapFilterMode;



    float mipmapLevelBias;



    float minMipmapLevelClamp;



    float maxMipmapLevelClamp;
};




typedef unsigned long long cudaTextureObject_t;
# 60 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/vector_types.h" 1 3
# 60 "/usr/local/cuda-6.5/include/vector_types.h" 3
# 1 "/usr/local/cuda-6.5/include/builtin_types.h" 1 3
# 56 "/usr/local/cuda-6.5/include/builtin_types.h" 3
# 1 "/usr/local/cuda-6.5/include/device_types.h" 1 3
# 57 "/usr/local/cuda-6.5/include/builtin_types.h" 2 3

# 1 "/usr/local/cuda-6.5/include/surface_types.h" 1 3
# 59 "/usr/local/cuda-6.5/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/texture_types.h" 1 3
# 60 "/usr/local/cuda-6.5/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda-6.5/include/vector_types.h" 1 3
# 60 "/usr/local/cuda-6.5/include/builtin_types.h" 2 3
# 61 "/usr/local/cuda-6.5/include/vector_types.h" 2 3
# 96 "/usr/local/cuda-6.5/include/vector_types.h" 3
struct char1
{
    signed char x;
};

struct uchar1
{
    unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
    signed char x, y;
};

struct __attribute__((aligned(2))) uchar2
{
    unsigned char x, y;
};

struct char3
{
    signed char x, y, z;
};

struct uchar3
{
    unsigned char x, y, z;
};

struct __attribute__((aligned(4))) char4
{
    signed char x, y, z, w;
};

struct __attribute__((aligned(4))) uchar4
{
    unsigned char x, y, z, w;
};

struct short1
{
    short x;
};

struct ushort1
{
    unsigned short x;
};

struct __attribute__((aligned(4))) short2
{
    short x, y;
};

struct __attribute__((aligned(4))) ushort2
{
    unsigned short x, y;
};

struct short3
{
    short x, y, z;
};

struct ushort3
{
    unsigned short x, y, z;
};

struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };
struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };

struct int1
{
    int x;
};

struct uint1
{
    unsigned int x;
};

struct __attribute__((aligned(8))) int2 { int x; int y; };
struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };

struct int3
{
    int x, y, z;
};

struct uint3
{
    unsigned int x, y, z;
};

struct __attribute__((aligned(16))) int4
{
    int x, y, z, w;
};

struct __attribute__((aligned(16))) uint4
{
    unsigned int x, y, z, w;
};

struct long1
{
    long int x;
};

struct ulong1
{
    unsigned long x;
};






struct __attribute__((aligned(2*sizeof(long int)))) long2
{
    long int x, y;
};

struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
    unsigned long int x, y;
};



struct long3
{
    long int x, y, z;
};

struct ulong3
{
    unsigned long int x, y, z;
};

struct __attribute__((aligned(16))) long4
{
    long int x, y, z, w;
};

struct __attribute__((aligned(16))) ulong4
{
    unsigned long int x, y, z, w;
};

struct float1
{
    float x;
};
# 272 "/usr/local/cuda-6.5/include/vector_types.h" 3
struct __attribute__((aligned(8))) float2 { float x; float y; };




struct float3
{
    float x, y, z;
};

struct __attribute__((aligned(16))) float4
{
    float x, y, z, w;
};

struct longlong1
{
    long long int x;
};

struct ulonglong1
{
    unsigned long long int x;
};

struct __attribute__((aligned(16))) longlong2
{
    long long int x, y;
};

struct __attribute__((aligned(16))) ulonglong2
{
    unsigned long long int x, y;
};

struct longlong3
{
    long long int x, y, z;
};

struct ulonglong3
{
    unsigned long long int x, y, z;
};

struct __attribute__((aligned(16))) longlong4
{
    long long int x, y, z ,w;
};

struct __attribute__((aligned(16))) ulonglong4
{
    unsigned long long int x, y, z, w;
};

struct double1
{
    double x;
};

struct __attribute__((aligned(16))) double2
{
    double x, y;
};

struct double3
{
    double x, y, z;
};

struct __attribute__((aligned(16))) double4
{
    double x, y, z, w;
};
# 360 "/usr/local/cuda-6.5/include/vector_types.h" 3
typedef struct char1 char1;
typedef struct uchar1 uchar1;
typedef struct char2 char2;
typedef struct uchar2 uchar2;
typedef struct char3 char3;
typedef struct uchar3 uchar3;
typedef struct char4 char4;
typedef struct uchar4 uchar4;
typedef struct short1 short1;
typedef struct ushort1 ushort1;
typedef struct short2 short2;
typedef struct ushort2 ushort2;
typedef struct short3 short3;
typedef struct ushort3 ushort3;
typedef struct short4 short4;
typedef struct ushort4 ushort4;
typedef struct int1 int1;
typedef struct uint1 uint1;
typedef struct int2 int2;
typedef struct uint2 uint2;
typedef struct int3 int3;
typedef struct uint3 uint3;
typedef struct int4 int4;
typedef struct uint4 uint4;
typedef struct long1 long1;
typedef struct ulong1 ulong1;
typedef struct long2 long2;
typedef struct ulong2 ulong2;
typedef struct long3 long3;
typedef struct ulong3 ulong3;
typedef struct long4 long4;
typedef struct ulong4 ulong4;
typedef struct float1 float1;
typedef struct float2 float2;
typedef struct float3 float3;
typedef struct float4 float4;
typedef struct longlong1 longlong1;
typedef struct ulonglong1 ulonglong1;
typedef struct longlong2 longlong2;
typedef struct ulonglong2 ulonglong2;
typedef struct longlong3 longlong3;
typedef struct ulonglong3 ulonglong3;
typedef struct longlong4 longlong4;
typedef struct ulonglong4 ulonglong4;
typedef struct double1 double1;
typedef struct double2 double2;
typedef struct double3 double3;
typedef struct double4 double4;







struct dim3
{
    unsigned int x, y, z;





};

typedef struct dim3 dim3;
# 60 "/usr/local/cuda-6.5/bin/..//include/builtin_types.h" 2 3
# 250 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 2 3
# 1 "/usr/local/cuda-6.5/bin/..//include/device_launch_parameters.h" 1 3
# 66 "/usr/local/cuda-6.5/bin/..//include/device_launch_parameters.h" 3
uint3 extern const threadIdx;
uint3 extern const blockIdx;
dim3 extern const blockDim;
dim3 extern const gridDim;
int extern const warpSize;
# 251 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 2 3
# 1 "/usr/local/cuda-6.5/include/crt/storage_class.h" 1 3
# 251 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 2 3
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 2 3
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
# 180 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 3
extern __attribute__((__externally_visible__)) __attribute__((visibility("default"))) void *malloc(size_t);
# 181 "/usr/local/cuda-6.5/bin/..//include/crt/device_runtime.h" 3
extern __attribute__((__externally_visible__)) __attribute__((__nothrow__)) __attribute__((visibility("default"))) void free(void *);
# 60 "../src/Vec2.hpp"
extern __inline__ int _ZNK4Vec25widthEv(const struct Vec2 *const);
# 63 "../src/Vec2.hpp"
extern __inline__ int _ZNK4Vec26heightEv(const struct Vec2 *const);
# 70 "../src/Vec2.hpp"
extern __inline__ struct float2 *_ZNK4Vec211getConstPtrEv(const struct Vec2 *const);
# 31 "../src/Vec2.cu"
extern void _ZN4Vec2C1ERKS_(struct Vec2 *const, const struct Vec2 *);
# 50 "../src/Vec2.cu"
extern void _ZN4Vec2C2ERKS_(struct Vec2 *const, const struct Vec2 *);
# 16 "../src/Vec2.cu"
extern void _ZN4Vec2C1Eii(struct Vec2 *const, int, int);
# 23 "../src/Vec2.cu"
extern void _ZN4Vec2C2Eii(struct Vec2 *const, int, int);
# 23 "../src/Vec2.cu"
extern void _ZN4Vec2C1Ev(struct Vec2 *const);
# 31 "../src/Vec2.cu"
extern void _ZN4Vec2C2Ev(struct Vec2 *const);
# 50 "../src/Vec2.cu"
extern void _ZN4Vec2D1Ev(struct Vec2 *const);
# 55 "../src/Vec2.cu"
extern void _ZN4Vec2D2Ev(struct Vec2 *const);
# 1 "/usr/local/cuda-6.5/bin/..//include/common_functions.h" 1
# 166 "/usr/local/cuda-6.5/bin/..//include/common_functions.h"
# 1 "/usr/local/cuda-6.5/include/cuda_device_runtime_api.h" 1 3
# 62 "/usr/local/cuda-6.5/include/cuda_device_runtime_api.h" 3
struct cudaFuncAttributes;

__attribute__((device)) __attribute__((nv_weak)) cudaError_t cudaMalloc(void **p, size_t s)
{
  return cudaErrorUnknown;
}

__attribute__((device)) __attribute__((nv_weak)) cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *p, const void *c)
{
  return cudaErrorUnknown;
}

__attribute__((device)) __attribute__((nv_weak)) cudaError_t cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device)
{
  return cudaErrorUnknown;
}

__attribute__((device)) __attribute__((nv_weak)) cudaError_t cudaGetDevice(int *device)
{
  return cudaErrorUnknown;
}

__attribute__((device)) __attribute__((nv_weak)) cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func, int blockSize, size_t dynamicSmemSize)
{
  return cudaErrorUnknown;
}
# 167 "/usr/local/cuda-6.5/bin/..//include/common_functions.h" 2


# 1 "/usr/local/cuda-6.5/include/math_functions.h" 1 3
# 9109 "/usr/local/cuda-6.5/include/math_functions.h" 3
# 1 "/usr/local/cuda-6.5/include/math_constants.h" 1 3
# 9110 "/usr/local/cuda-6.5/include/math_functions.h" 2 3







# 1 "/usr/local/cuda-6.5/include/device_functions_decls.h" 1 3
# 65 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_sinf(float x);
# 78 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_cosf(float x);
# 105 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_log2f(float x);
# 120 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_tanf(float x);
# 136 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
void __nv_fast_sincosf(float x, float *sptr, float *cptr);
# 187 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_expf(float x);
# 220 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_exp10f(float x);
# 249 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_log10f(float x);
# 294 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_logf(float x);
# 338 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_powf(float x, float y);
# 351 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_hadd(int x, int y);
# 365 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_rhadd(int x, int y);
# 378 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_uhadd(unsigned int x, unsigned int y);
# 392 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_urhadd(unsigned int x, unsigned int y);
# 405 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsub_rn (float x, float y);
# 418 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsub_rz (float x, float y);
# 431 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsub_rd (float x, float y);
# 444 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsub_ru (float x, float y);
# 484 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frsqrt_rn (float x);
# 496 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_ffs(int x);
# 508 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_ffsll(long long int x);
# 520 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_rintf(float x);
# 533 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long int __nv_llrintf(float x);
# 583 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_nearbyintf(float x);
# 596 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_signbitf(float x);
# 606 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_copysignf(float x, float y);
# 617 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_finitef(float x);
# 630 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_isinff(float x);
# 642 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_isnanf(float x);
# 675 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_nextafterf(float x, float y);
# 688 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_nanf(const signed char *tagp);
# 730 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_sinf(float x);
# 764 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_cosf(float x);
# 780 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
void __nv_sincosf(float x, float *sptr, float *cptr);
# 841 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_sinpif(float x);
# 894 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_cospif(float x);
# 925 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
void __nv_sincospif(float x, float *sptr, float *cptr);
# 967 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_tanf(float x);
# 1019 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_log2f(float x);
# 1059 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_expf(float x);
# 1081 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_exp10f(float x);
# 1113 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_coshf(float x);
# 1144 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_sinhf(float x);
# 1175 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_tanhf(float x);
# 1209 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_atan2f(float x, float y);
# 1241 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_atanf(float x);
# 1274 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_asinf(float x);
# 1298 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_acosf(float x);
# 1370 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_logf(float x);
# 1422 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_log10f(float x);
# 1516 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_log1pf(float x);
# 1551 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_acoshf(float x);
# 1564 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_asinhf(float x);
# 1615 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_atanhf(float x);
# 1657 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_expm1f(float x);
# 1697 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_hypotf(float x, float y);
# 1744 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_rhypotf(float x, float y);
# 1826 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_cbrtf(float x);
# 1876 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_rcbrtf(float x);
# 1915 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_j0f(float x);
# 1973 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_j1f(float x);
# 2022 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_y0f(float x);
# 2071 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_y1f(float x);
# 2121 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ynf(int n, float x);
# 2161 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_jnf(int n, float x);
# 2188 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_cyl_bessel_i0f(float x);
# 2215 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_cyl_bessel_i1f(float x);
# 2294 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_erff(float x);
# 2352 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_erfinvf(float x);
# 2387 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_erfcf(float x);
# 2463 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_erfcxf(float x);
# 2520 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_erfcinvf(float x);
# 2579 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_normcdfinvf(float x);
# 2623 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_normcdff(float x);
# 2748 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_lgammaf(float x);
# 2805 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ldexpf(float x, int y);
# 2878 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_scalbnf(float x, int y);
# 2954 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frexpf(float x, int *b);
# 3011 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_modff(float x, float *b);
# 3071 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmodf(float x, float y);
# 3157 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_remainderf(float x, float y);
# 3208 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_remquof(float x, float y, int* quo);
# 3363 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaf(float x, float y, float z);
# 3672 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_powif(float x, int y);
# 3981 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_powi(double x, int y);
# 4290 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_powf(float x, float y);
# 4396 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_tgammaf(float x);
# 4410 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_roundf(float x);
# 4425 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long int __nv_llroundf(float x);
# 4448 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fdimf(float x, float y);
# 4475 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_ilogbf(float x);
# 4527 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_logbf(float x);
# 4539 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_rint(double x);
# 4552 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long int __nv_llrint(double x);
# 4602 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_nearbyint(double x);
# 4615 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_signbitd(double x);
# 4628 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_isfinited(double x);
# 4641 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_isinfd(double x);
# 4653 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_isnand(double x);
# 4663 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_copysign(double x, double y);
# 4679 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
void __nv_sincos(double x, double *sptr, double *cptr);
# 4710 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
void __nv_sincospi(double x, double *sptr, double *cptr);
# 4752 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_sin(double x);
# 4786 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cos(double x);
# 4847 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_sinpi(double x);
# 4900 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cospi(double x);
# 4942 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_tan(double x);
# 5014 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_log(double x);
# 5066 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_log2(double x);
# 5118 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_log10(double x);
# 5212 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_log1p(double x);
# 5252 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_exp(double x);
# 5274 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_exp2(double x);
# 5296 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_exp10(double x);
# 5338 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_expm1(double x);
# 5370 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cosh(double x);
# 5401 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_sinh(double x);
# 5432 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_tanh(double x);
# 5466 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_atan2(double x, double y);
# 5498 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_atan(double x);
# 5531 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_asin(double x);
# 5555 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_acos(double x);
# 5590 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_acosh(double x);
# 5603 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_asinh(double x);
# 5654 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_atanh(double x);
# 5694 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_hypot(double x, double y);
# 5739 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_rhypot(double x, double y);
# 5821 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cbrt(double x);
# 5871 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_rcbrt(double x);
# 6180 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_pow(double x, double y);
# 6219 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_j0(double x);
# 6277 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_j1(double x);
# 6326 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_y0(double x);
# 6375 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_y1(double x);
# 6425 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_yn(int n, double x);
# 6465 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_jn(int n, double x);
# 6492 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cyl_bessel_i0(double x);
# 6519 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_cyl_bessel_i1(double x);
# 6598 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_erf(double x);
# 6656 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_erfinv(double x);
# 6713 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_erfcinv(double x);
# 6772 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_normcdfinv(double x);
# 6807 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_erfc(double x);
# 6883 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_erfcx(double x);
# 6927 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_normcdf(double x);
# 7033 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_tgamma(double x);
# 7158 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_lgamma(double x);
# 7215 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ldexp(double x, int y);
# 7288 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_scalbn(double x, int y);
# 7364 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_frexp(double x, int *b);
# 7421 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_modf(double x, double *b);
# 7481 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fmod(double x, double y);
# 7567 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_remainder(double x, double y);
# 7618 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_remquo(double x, double y, int *c);
# 7651 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_nextafter(double x, double y);
# 7664 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_nan(const signed char *tagp);
# 7678 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_round(double x);
# 7693 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long int __nv_llround(double x);
# 7716 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fdim(double x, double y);
# 7743 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_ilogb(double x);
# 7795 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_logb(double x);
# 7950 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fma(double x, double y, double z);
# 7960 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_clz(int x);
# 7969 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_clzll(long long x);
# 7979 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_popc(int x);
# 7988 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_popcll(long long x);
# 8013 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_byte_perm(unsigned int x, unsigned int y, unsigned int z);
# 8024 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_min(int x, int y);
# 8034 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_umin(unsigned int x, unsigned int y);
# 8044 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_llmin(long long x, long long y);
# 8054 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_ullmin(unsigned long long x, unsigned long long y);
# 8065 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_max(int x, int y);
# 8075 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_umax(unsigned int x, unsigned int y);
# 8085 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_llmax(long long x, long long y);
# 8095 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_ullmax(unsigned long long x, unsigned long long y);
# 8106 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_mulhi(int x, int y);
# 8116 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_umulhi(unsigned int x, unsigned int y);
# 8126 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_mul64hi(long long x, long long y);
# 8136 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_umul64hi(unsigned long long x, unsigned long long y);
# 8147 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_mul24(int x, int y);
# 8157 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_umul24(unsigned int x, unsigned int y);
# 8167 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_brev(unsigned int x);
# 8177 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_brevll(unsigned long long x);
# 8246 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_sad(int x, int y, int z);
# 8315 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_usad(unsigned int x, unsigned int y, unsigned int z);
# 8325 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_abs(int x);
# 8336 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_llabs(long long x);
# 8409 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_floorf(float f);
# 8482 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_floor(double f);
# 8524 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fabsf(float f);
# 8566 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fabs(double f);


double __nv_rcp64h(double d);
# 8586 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fminf(float x, float y);
# 8603 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaxf(float x, float y);
# 8673 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_rsqrtf(float x);
# 8690 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fmin(double x, double y);
# 8707 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fmax(double x, double y);
# 8777 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_rsqrt(double x);
# 8837 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ceil(double x);
# 8849 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_trunc(double x);
# 8871 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_exp2f(float x);
# 8883 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_truncf(float x);
# 8943 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ceilf(float x);
# 8967 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_saturatef(float x);
# 9121 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaf_rn(float x, float y, float z);
# 9274 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaf_rz(float x, float y, float z);
# 9427 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaf_rd(float x, float y, float z);
# 9580 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmaf_ru(float x, float y, float z);


float __nv_fmaf_ieee_rn(float x, float y, float z);

float __nv_fmaf_ieee_rz(float x, float y, float z);

float __nv_fmaf_ieee_rd(float x, float y, float z);

float __nv_fmaf_ieee_ru(float x, float y, float z);
# 9747 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fma_rn(double x, double y, double z);
# 9904 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fma_rz(double x, double y, double z);
# 10061 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fma_rd(double x, double y, double z);
# 10218 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_fma_ru(double x, double y, double z);
# 10294 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fast_fdividef(float x, float y);
# 10306 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fdiv_rn(float x, float y);
# 10317 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fdiv_rz(float x, float y);
# 10328 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fdiv_rd(float x, float y);
# 10339 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fdiv_ru(float x, float y);
# 10373 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frcp_rn(float x);
# 10406 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frcp_rz(float x);
# 10439 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frcp_rd(float x);
# 10472 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_frcp_ru(float x);
# 10504 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsqrt_rn(float x);
# 10535 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsqrt_rz(float x);
# 10566 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsqrt_rd(float x);
# 10597 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fsqrt_ru(float x);
# 10610 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ddiv_rn(double x, double y);
# 10622 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ddiv_rz(double x, double y);
# 10634 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ddiv_rd(double x, double y);
# 10646 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ddiv_ru(double x, double y);
# 10681 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_drcp_rn(double x);
# 10715 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_drcp_rz(double x);
# 10749 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_drcp_rd(double x);
# 10783 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_drcp_ru(double x);
# 10816 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dsqrt_rn(double x);
# 10849 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dsqrt_rz(double x);
# 10881 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dsqrt_rd(double x);
# 10913 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dsqrt_ru(double x);
# 10983 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_sqrtf(float x);
# 11053 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_sqrt(double x);
# 11066 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dadd_rn(double x, double y);
# 11078 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dadd_rz(double x, double y);
# 11090 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dadd_rd(double x, double y);
# 11102 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dadd_ru(double x, double y);
# 11115 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dmul_rn(double x, double y);
# 11127 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dmul_rz(double x, double y);
# 11139 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dmul_rd(double x, double y);
# 11151 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_dmul_ru(double x, double y);
# 11164 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fadd_rd(float x, float y);
# 11176 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fadd_ru(float x, float y);
# 11189 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmul_rd(float x, float y);
# 11201 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmul_ru(float x, float y);
# 11214 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fadd_rn(float x, float y);
# 11226 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fadd_rz(float x, float y);
# 11239 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmul_rn(float x, float y);
# 11251 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_fmul_rz(float x, float y);
# 11261 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_double2float_rn(double d);
# 11270 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_double2float_rz(double d);
# 11279 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_double2float_rd(double d);
# 11288 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_double2float_ru(double d);
# 11298 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2int_rn(double d);
# 11307 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2int_rz(double d);
# 11316 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2int_rd(double d);
# 11325 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2int_ru(double d);
# 11335 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_double2uint_rn(double d);
# 11344 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_double2uint_rz(double d);
# 11353 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_double2uint_rd(double d);
# 11362 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_double2uint_ru(double d);
# 11371 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_int2double_rn(int i);
# 11380 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_uint2double_rn(unsigned int i);
# 11390 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_float2int_rn(float in);
# 11399 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_float2int_rz(float in);
# 11408 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_float2int_rd(float in);
# 11417 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_float2int_ru(float in);
# 11426 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_float2uint_rn(float in);
# 11435 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_float2uint_rz(float in);
# 11444 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_float2uint_rd(float in);
# 11453 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned int __nv_float2uint_ru(float in);
# 11463 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_int2float_rn(int in);
# 11472 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_int2float_rz(int in);
# 11481 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_int2float_rd(int in);
# 11490 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_int2float_ru(int in);
# 11500 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_uint2float_rn(unsigned int in);
# 11509 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_uint2float_rz(unsigned int in);
# 11518 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_uint2float_rd(unsigned int in);
# 11527 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_uint2float_ru(unsigned int in);
# 11538 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_hiloint2double(int x, int y);
# 11547 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2loint(double d);
# 11556 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_double2hiint(double d);
# 11566 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_float2ll_rn(float f);
# 11575 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_float2ll_rz(float f);
# 11584 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_float2ll_rd(float f);
# 11593 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_float2ll_ru(float f);
# 11602 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_float2ull_rn(float f);
# 11611 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_float2ull_rz(float f);
# 11620 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_float2ull_rd(float f);
# 11629 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_float2ull_ru(float f);
# 11639 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_double2ll_rn(double f);
# 11648 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_double2ll_rz(double f);
# 11657 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_double2ll_rd(double f);
# 11666 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_double2ll_ru(double f);
# 11676 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_double2ull_rn(double f);
# 11685 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_double2ull_rz(double f);
# 11694 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_double2ull_rd(double f);
# 11703 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned long long __nv_double2ull_ru(double f);
# 11713 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ll2float_rn(long long l);
# 11722 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ll2float_rz(long long l);
# 11731 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ll2float_rd(long long l);
# 11740 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ll2float_ru(long long l);
# 11750 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ull2float_rn(unsigned long long l);
# 11759 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ull2float_rz(unsigned long long l);
# 11768 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ull2float_rd(unsigned long long l);
# 11777 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_ull2float_ru(unsigned long long l);
# 11787 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ll2double_rn(long long l);
# 11796 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ll2double_rz(long long l);
# 11805 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ll2double_rd(long long l);
# 11814 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ll2double_ru(long long l);
# 11824 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ull2double_rn(unsigned long long l);
# 11833 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ull2double_rz(unsigned long long l);
# 11842 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ull2double_rd(unsigned long long l);
# 11851 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_ull2double_ru(unsigned long long l);
# 11861 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
unsigned short __nv_float2half_rn(float f);
# 11870 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_half2float(unsigned short h);
# 11879 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
float __nv_int_as_float(int x);
# 11889 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
int __nv_float_as_int(float x);
# 11899 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
double __nv_longlong_as_double(long long x);
# 11909 "/usr/local/cuda-6.5/include/device_functions_decls.h" 3
long long __nv_double_as_longlong (double x);
# 9118 "/usr/local/cuda-6.5/include/math_functions.h" 2 3


# 1 "/usr/local/cuda-6.5/include/device_functions.h" 1 3
# 3341 "/usr/local/cuda-6.5/include/device_functions.h" 3
static __inline__ __attribute__((always_inline)) int __syncthreads_count(int predicate)
{
  return __nvvm_bar0_popc(predicate);
}

static __inline__ __attribute__((always_inline)) int __syncthreads_and(int predicate)
{
  return __nvvm_bar0_and(predicate);
}

static __inline__ __attribute__((always_inline)) int __syncthreads_or(int predicate)
{
  return __nvvm_bar0_or(predicate);
}






static __inline__ __attribute__((always_inline)) void __threadfence_block()
{
  __nvvm_membar_cta();
}

static __inline__ __attribute__((always_inline)) void __threadfence()
{
  __nvvm_membar_gl();
}

static __inline__ __attribute__((always_inline)) void __threadfence_system()
{
  __nvvm_membar_sys();
}






static __inline__ __attribute__((always_inline)) int __all(int a)
{
  int result;
  asm __volatile__ ("{ \n\t"
        ".reg .pred \t%%p1; \n\t"
        ".reg .pred \t%%p2; \n\t"
        "setp.ne.u32 \t%%p1, %1, 0; \n\t"
        "vote.all.pred \t%%p2, %%p1; \n\t"
        "selp.s32 \t%0, 1, 0, %%p2; \n\t"
        "}" : "=r"(result) : "r"(a));
  return result;
}

static __inline__ __attribute__((always_inline)) int __any(int a)
{
  int result;
  asm __volatile__ ("{ \n\t"
        ".reg .pred \t%%p1; \n\t"
        ".reg .pred \t%%p2; \n\t"
        "setp.ne.u32 \t%%p1, %1, 0; \n\t"
        "vote.any.pred \t%%p2, %%p1; \n\t"
        "selp.s32 \t%0, 1, 0, %%p2; \n\t"
        "}" : "=r"(result) : "r"(a));
  return result;
}

static __inline__ __attribute__((always_inline)) int __ballot(int a)
{
  int result;
  asm __volatile__ ("{ \n\t"
        ".reg .pred \t%%p1; \n\t"
        "setp.ne.u32 \t%%p1, %1, 0; \n\t"
        "vote.ballot.b32 \t%0, %%p1; \n\t"
        "}" : "=r"(result) : "r"(a));
  return result;
}






static __inline__ __attribute__((always_inline)) void __brkpt()
{
  asm __volatile__ ("brkpt;");
}

static __inline__ __attribute__((always_inline)) int clock()
{
  int r;
  asm __volatile__ ("mov.u32 \t%0, %%clock;" : "=r"(r));
  return r;
}

static __inline__ __attribute__((always_inline)) long long clock64()
{
  long long z;
  asm __volatile__ ("mov.u64 \t%0, %%clock64;" : "=l"(z));
  return z;
}



static __inline__ __attribute__((always_inline)) unsigned int __pm0(void)
{
  unsigned int r;
  asm("mov.u32 \t%0, %%pm0;" : "=r"(r));
  return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __pm1(void)
{
  unsigned int r;
  asm("mov.u32 \t%0, %%pm1;" : "=r"(r));
  return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __pm2(void)
{
  unsigned int r;
  asm("mov.u32 \t%0, %%pm2;" : "=r"(r));
  return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __pm3(void)
{
  unsigned int r;
  asm("mov.u32 \t%0, %%pm3;" : "=r"(r));
  return r;
}

static __inline__ __attribute__((always_inline)) void __trap(void)
{
  asm __volatile__ ("trap;");
}

static __inline__ __attribute__((always_inline)) void* memcpy(void *dest, const void *src, size_t n)
{
  __nvvm_memcpy((unsigned char *)dest, (unsigned char *)src, n,
                               1);
  return dest;
}

static __inline__ __attribute__((always_inline)) void* memset(void *dest, int c, size_t n)
{
  __nvvm_memset((unsigned char *)dest, (unsigned char)c, n,
                              1);
  return dest;
}






static __inline__ __attribute__((always_inline)) int __clz(int x)
{
  return __nv_clz(x);
}

static __inline__ __attribute__((always_inline)) int __clzll(long long x)
{
  return __nv_clzll(x);
}

static __inline__ __attribute__((always_inline)) int __popc(int x)
{
  return __nv_popc(x);
}

static __inline__ __attribute__((always_inline)) int __popcll(long long x)
{
  return __nv_popcll(x);
}

static __inline__ __attribute__((always_inline)) unsigned int __byte_perm(unsigned int a,
                                                unsigned int b,
                                                unsigned int c)
{
  return __nv_byte_perm(a, b, c);
}






static __inline__ __attribute__((always_inline)) int min(int x, int y)
{
  return __nv_min(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned int umin(unsigned int x, unsigned int y)
{
  return __nv_umin(x, y);
}

static __inline__ __attribute__((always_inline)) long long llmin(long long x, long long y)
{
  return __nv_llmin(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned long long ullmin(unsigned long long x,
                                                 unsigned long long y)
{
  return __nv_ullmin(x, y);
}

static __inline__ __attribute__((always_inline)) int max(int x, int y)
{
  return __nv_max(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned int umax(unsigned int x, unsigned int y)
{
  return __nv_umax(x, y);
}

static __inline__ __attribute__((always_inline)) long long llmax(long long x, long long y)
{
  return __nv_llmax(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned long long ullmax(unsigned long long x,
                                                 unsigned long long y)
{
  return __nv_ullmax(x, y);
}

static __inline__ __attribute__((always_inline)) int __mulhi(int x, int y)
{
  return __nv_mulhi(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned int __umulhi(unsigned int x, unsigned int y)
{
  return __nv_umulhi(x, y);
}

static __inline__ __attribute__((always_inline)) long long __mul64hi(long long x, long long y)
{
  return __nv_mul64hi(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned long long __umul64hi(unsigned long long x,
                                                     unsigned long long y)
{
  return __nv_umul64hi(x, y);
}

static __inline__ __attribute__((always_inline)) int __mul24(int x, int y)
{
  return __nv_mul24(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned int __umul24(unsigned int x, unsigned int y)
{
  return __nv_umul24(x, y);
}

static __inline__ __attribute__((always_inline)) unsigned int __brev(unsigned int x)
{
  return __nv_brev(x);
}

static __inline__ __attribute__((always_inline)) unsigned long long __brevll(unsigned long long x)
{
  return __nv_brevll(x);
}

static __inline__ __attribute__((always_inline)) int __sad(int x, int y, int z)
{
  return __nv_sad(x, y, z);
}

static __inline__ __attribute__((always_inline)) unsigned int __usad(unsigned int x,
                                           unsigned int y,
                                           unsigned int z)
{
  return __nv_usad(x, y, z);
}

static __inline__ __attribute__((always_inline)) int abs(int x)
{
  return __nv_abs(x);
}

static __inline__ __attribute__((always_inline)) long labs(long x)
{

  return __nv_llabs((long long) x);



}

static __inline__ __attribute__((always_inline)) long long llabs(long long x)
{
  return __nv_llabs(x);
}






static __inline__ __attribute__((always_inline)) float floorf(float f)
{
  return __nv_floorf(f);
}

static __inline__ __attribute__((always_inline)) double floor(double f)
{
  return __nv_floor(f);
}

static __inline__ __attribute__((always_inline)) float fabsf(float f)
{
  return __nv_fabsf(f);
}

static __inline__ __attribute__((always_inline)) double fabs(double f)
{
  return __nv_fabs(f);
}

static __inline__ __attribute__((always_inline)) double __rcp64h(double d)
{
  return __nv_rcp64h(d);
}

static __inline__ __attribute__((always_inline)) float fminf(float x, float y)
{
  return __nv_fminf(x, y);
}

static __inline__ __attribute__((always_inline)) float fmaxf(float x, float y)
{
  return __nv_fmaxf(x, y);
}

static __inline__ __attribute__((always_inline)) float rsqrtf(float x)
{
  return __nv_rsqrtf(x);
}

static __inline__ __attribute__((always_inline)) double fmin(double x, double y)
{
  return __nv_fmin(x, y);
}

static __inline__ __attribute__((always_inline)) double fmax(double x, double y)
{
  return __nv_fmax(x, y);
}

static __inline__ __attribute__((always_inline)) double rsqrt(double x)
{
  return __nv_rsqrt(x);
}

static __inline__ __attribute__((always_inline)) double ceil(double x)
{
  return __nv_ceil(x);
}

static __inline__ __attribute__((always_inline)) double trunc(double x)
{
  return __nv_trunc(x);
}

static __inline__ __attribute__((always_inline)) float exp2f(float x)
{
  return __nv_exp2f(x);
}

static __inline__ __attribute__((always_inline)) float truncf(float x)
{
  return __nv_truncf(x);
}

static __inline__ __attribute__((always_inline)) float ceilf(float x)
{
  return __nv_ceilf(x);
}

static __inline__ __attribute__((always_inline)) float __saturatef(float x)
{
  return __nv_saturatef(x);
}






static __inline__ __attribute__((always_inline)) float __fmaf_rn(float x, float y, float z)
{
  return __nv_fmaf_rn(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_rz(float x, float y, float z)
{
  return __nv_fmaf_rz(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_rd(float x, float y, float z)
{
  return __nv_fmaf_rd(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_ru(float x, float y, float z)
{
  return __nv_fmaf_ru(x, y, z);
}






static __inline__ __attribute__((always_inline)) float __fmaf_ieee_rn(float x, float y, float z)
{
  return __nv_fmaf_ieee_rn(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_ieee_rz(float x, float y, float z)
{
  return __nv_fmaf_ieee_rz(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_ieee_rd(float x, float y, float z)
{
  return __nv_fmaf_ieee_rd(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fmaf_ieee_ru(float x, float y, float z)
{
  return __nv_fmaf_ieee_ru(x, y, z);
}






static __inline__ __attribute__((always_inline)) double __fma_rn(double x, double y, double z)
{
  return __nv_fma_rn(x, y, z);
}

static __inline__ __attribute__((always_inline)) double __fma_rz(double x, double y, double z)
{
  return __nv_fma_rz(x, y, z);
}

static __inline__ __attribute__((always_inline)) double __fma_rd(double x, double y, double z)
{
  return __nv_fma_rd(x, y, z);
}

static __inline__ __attribute__((always_inline)) double __fma_ru(double x, double y, double z)
{
  return __nv_fma_ru(x, y, z);
}

static __inline__ __attribute__((always_inline)) float __fdividef(float x, float y)
{
  return __nv_fast_fdividef(x, y);
}






static __inline__ __attribute__((always_inline)) float __fdiv_rn(float x, float y)
{
  return __nv_fdiv_rn(x, y);
}

static __inline__ __attribute__((always_inline)) float __fdiv_rz(float x, float y)
{
  return __nv_fdiv_rz(x, y);
}

static __inline__ __attribute__((always_inline)) float __fdiv_rd(float x, float y)
{
  return __nv_fdiv_rd(x, y);
}

static __inline__ __attribute__((always_inline)) float __fdiv_ru(float x, float y)
{
  return __nv_fdiv_ru(x, y);
}






static __inline__ __attribute__((always_inline)) float __frcp_rn(float x)
{
  return __nv_frcp_rn(x);
}

static __inline__ __attribute__((always_inline)) float __frcp_rz(float x)
{
  return __nv_frcp_rz(x);
}

static __inline__ __attribute__((always_inline)) float __frcp_rd(float x)
{
  return __nv_frcp_rd(x);
}

static __inline__ __attribute__((always_inline)) float __frcp_ru(float x)
{
  return __nv_frcp_ru(x);
}






static __inline__ __attribute__((always_inline)) float __fsqrt_rn(float x)
{
  return __nv_fsqrt_rn(x);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_rz(float x)
{
  return __nv_fsqrt_rz(x);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_rd(float x)
{
  return __nv_fsqrt_rd(x);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_ru(float x)
{
  return __nv_fsqrt_ru(x);
}






static __inline__ __attribute__((always_inline)) double __ddiv_rn(double x, double y)
{
  return __nv_ddiv_rn(x, y);
}

static __inline__ __attribute__((always_inline)) double __ddiv_rz(double x, double y)
{
  return __nv_ddiv_rz(x, y);
}

static __inline__ __attribute__((always_inline)) double __ddiv_rd(double x, double y)
{
  return __nv_ddiv_rd(x, y);
}

static __inline__ __attribute__((always_inline)) double __ddiv_ru(double x, double y)
{
  return __nv_ddiv_ru(x, y);
}






static __inline__ __attribute__((always_inline)) double __drcp_rn(double x)
{
  return __nv_drcp_rn(x);
}

static __inline__ __attribute__((always_inline)) double __drcp_rz(double x)
{
  return __nv_drcp_rz(x);
}

static __inline__ __attribute__((always_inline)) double __drcp_rd(double x)
{
  return __nv_drcp_rd(x);
}

static __inline__ __attribute__((always_inline)) double __drcp_ru(double x)
{
  return __nv_drcp_ru(x);
}






static __inline__ __attribute__((always_inline)) double __dsqrt_rn(double x)
{
  return __nv_dsqrt_rn(x);
}

static __inline__ __attribute__((always_inline)) double __dsqrt_rz(double x)
{
  return __nv_dsqrt_rz(x);
}

static __inline__ __attribute__((always_inline)) double __dsqrt_rd(double x)
{
  return __nv_dsqrt_rd(x);
}

static __inline__ __attribute__((always_inline)) double __dsqrt_ru(double x)
{
  return __nv_dsqrt_ru(x);
}

static __inline__ __attribute__((always_inline)) float sqrtf(float x)
{
  return __nv_sqrtf(x);
}

static __inline__ __attribute__((always_inline)) double sqrt(double x)
{
  return __nv_sqrt(x);
}






static __inline__ __attribute__((always_inline)) double __dadd_rn(double x, double y)
{
  return __nv_dadd_rn(x, y);
}

static __inline__ __attribute__((always_inline)) double __dadd_rz(double x, double y)
{
  return __nv_dadd_rz(x, y);
}

static __inline__ __attribute__((always_inline)) double __dadd_rd(double x, double y)
{
  return __nv_dadd_rd(x, y);
}

static __inline__ __attribute__((always_inline)) double __dadd_ru(double x, double y)
{
  return __nv_dadd_ru(x, y);
}






static __inline__ __attribute__((always_inline)) double __dmul_rn(double x, double y)
{
  return __nv_dmul_rn(x, y);
}

static __inline__ __attribute__((always_inline)) double __dmul_rz(double x, double y)
{
  return __nv_dmul_rz(x, y);
}

static __inline__ __attribute__((always_inline)) double __dmul_rd(double x, double y)
{
  return __nv_dmul_rd(x, y);
}

static __inline__ __attribute__((always_inline)) double __dmul_ru(double x, double y)
{
  return __nv_dmul_ru(x, y);
}






static __inline__ __attribute__((always_inline)) float __fadd_rd(float x, float y)
{
  return __nv_fadd_rd(x, y);
}

static __inline__ __attribute__((always_inline)) float __fadd_ru(float x, float y)
{
  return __nv_fadd_ru(x, y);
}

static __inline__ __attribute__((always_inline)) float __fadd_rn(float x, float y)
{
  return __nv_fadd_rn(x, y);
}

static __inline__ __attribute__((always_inline)) float __fadd_rz(float x, float y)
{
  return __nv_fadd_rz(x, y);
}






static __inline__ __attribute__((always_inline)) float __fmul_rd(float x, float y)
{
  return __nv_fmul_rd(x, y);
}

static __inline__ __attribute__((always_inline)) float __fmul_ru(float x, float y)
{
  return __nv_fmul_ru(x, y);
}

static __inline__ __attribute__((always_inline)) float __fmul_rn(float x, float y)
{
  return __nv_fmul_rn(x, y);
}

static __inline__ __attribute__((always_inline)) float __fmul_rz(float x, float y)
{
  return __nv_fmul_rz(x, y);
}







static __inline__ __attribute__((always_inline)) float __double2float_rn(double d)
{
  return __nv_double2float_rn(d);
}

static __inline__ __attribute__((always_inline)) float __double2float_rz(double d)
{
  return __nv_double2float_rz(d);
}

static __inline__ __attribute__((always_inline)) float __double2float_rd(double d)
{
  return __nv_double2float_rd(d);
}

static __inline__ __attribute__((always_inline)) float __double2float_ru(double d)
{
  return __nv_double2float_ru(d);
}


static __inline__ __attribute__((always_inline)) int __double2int_rn(double d)
{
  return __nv_double2int_rn(d);
}

static __inline__ __attribute__((always_inline)) int __double2int_rz(double d)
{
  return __nv_double2int_rz(d);
}

static __inline__ __attribute__((always_inline)) int __double2int_rd(double d)
{
  return __nv_double2int_rd(d);
}

static __inline__ __attribute__((always_inline)) int __double2int_ru(double d)
{
  return __nv_double2int_ru(d);
}


static __inline__ __attribute__((always_inline)) unsigned int __double2uint_rn(double d)
{
  return __nv_double2uint_rn(d);
}

static __inline__ __attribute__((always_inline)) unsigned int __double2uint_rz(double d)
{
  return __nv_double2uint_rz(d);
}

static __inline__ __attribute__((always_inline)) unsigned int __double2uint_rd(double d)
{
  return __nv_double2uint_rd(d);
}

static __inline__ __attribute__((always_inline)) unsigned int __double2uint_ru(double d)
{
  return __nv_double2uint_ru(d);
}


static __inline__ __attribute__((always_inline)) double __int2double_rn(int i)
{
  return __nv_int2double_rn(i);
}


static __inline__ __attribute__((always_inline)) double __uint2double_rn(unsigned int i)
{
  return __nv_uint2double_rn(i);
}


static __inline__ __attribute__((always_inline)) int __float2int_rn(float in)
{
  return __nv_float2int_rn(in);
}

static __inline__ __attribute__((always_inline)) int __float2int_rz(float in)
{
  return __nv_float2int_rz(in);
}

static __inline__ __attribute__((always_inline)) int __float2int_rd(float in)
{
  return __nv_float2int_rd(in);
}

static __inline__ __attribute__((always_inline)) int __float2int_ru(float in)
{
  return __nv_float2int_ru(in);
}


static __inline__ __attribute__((always_inline)) unsigned int __float2uint_rn(float in)
{
  return __nv_float2uint_rn(in);
}

static __inline__ __attribute__((always_inline)) unsigned int __float2uint_rz(float in)
{
  return __nv_float2uint_rz(in);
}

static __inline__ __attribute__((always_inline)) unsigned int __float2uint_rd(float in)
{
  return __nv_float2uint_rd(in);
}

static __inline__ __attribute__((always_inline)) unsigned int __float2uint_ru(float in)
{
  return __nv_float2uint_ru(in);
}


static __inline__ __attribute__((always_inline)) float __int2float_rn(int in)
{
  return __nv_int2float_rn(in);
}

static __inline__ __attribute__((always_inline)) float __int2float_rz(int in)
{
  return __nv_int2float_rz(in);
}

static __inline__ __attribute__((always_inline)) float __int2float_rd(int in)
{
  return __nv_int2float_rd(in);
}

static __inline__ __attribute__((always_inline)) float __int2float_ru(int in)
{
  return __nv_int2float_ru(in);
}


static __inline__ __attribute__((always_inline)) float __uint2float_rn(unsigned int in)
{
  return __nv_uint2float_rn(in);
}

static __inline__ __attribute__((always_inline)) float __uint2float_rz(unsigned int in)
{
  return __nv_uint2float_rz(in);
}

static __inline__ __attribute__((always_inline)) float __uint2float_rd(unsigned int in)
{
  return __nv_uint2float_rd(in);
}

static __inline__ __attribute__((always_inline)) float __uint2float_ru(unsigned int in)
{
  return __nv_uint2float_ru(in);
}


static __inline__ __attribute__((always_inline)) double __hiloint2double(int a, int b)
{
  return __nv_hiloint2double(a, b);
}

static __inline__ __attribute__((always_inline)) int __double2loint(double d)
{
  return __nv_double2loint(d);
}

static __inline__ __attribute__((always_inline)) int __double2hiint(double d)
{
  return __nv_double2hiint(d);
}


static __inline__ __attribute__((always_inline)) long long __float2ll_rn(float f)
{
  return __nv_float2ll_rn(f);
}

static __inline__ __attribute__((always_inline)) long long __float2ll_rz(float f)
{
  return __nv_float2ll_rz(f);
}

static __inline__ __attribute__((always_inline)) long long __float2ll_rd(float f)
{
  return __nv_float2ll_rd(f);
}

static __inline__ __attribute__((always_inline)) long long __float2ll_ru(float f)
{
  return __nv_float2ll_ru(f);
}


static __inline__ __attribute__((always_inline)) unsigned long long __float2ull_rn(float f)
{
  return __nv_float2ull_rn(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __float2ull_rz(float f)
{
  return __nv_float2ull_rz(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __float2ull_rd(float f)
{
  return __nv_float2ull_rd(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __float2ull_ru(float f)
{
  return __nv_float2ull_ru(f);
}


static __inline__ __attribute__((always_inline)) long long __double2ll_rn(double f)
{
  return __nv_double2ll_rn(f);
}

static __inline__ __attribute__((always_inline)) long long __double2ll_rz(double f)
{
  return __nv_double2ll_rz(f);
}

static __inline__ __attribute__((always_inline)) long long __double2ll_rd(double f)
{
  return __nv_double2ll_rd(f);
}

static __inline__ __attribute__((always_inline)) long long __double2ll_ru(double f)
{
  return __nv_double2ll_ru(f);
}


static __inline__ __attribute__((always_inline)) unsigned long long __double2ull_rn(double f)
{
  return __nv_double2ull_rn(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __double2ull_rz(double f)
{
  return __nv_double2ull_rz(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __double2ull_rd(double f)
{
  return __nv_double2ull_rd(f);
}

static __inline__ __attribute__((always_inline)) unsigned long long __double2ull_ru(double f)
{
  return __nv_double2ull_ru(f);
}


static __inline__ __attribute__((always_inline)) float __ll2float_rn(long long l)
{
  return __nv_ll2float_rn(l);
}

static __inline__ __attribute__((always_inline)) float __ll2float_rz(long long l)
{
  return __nv_ll2float_rz(l);
}

static __inline__ __attribute__((always_inline)) float __ll2float_rd(long long l)
{
  return __nv_ll2float_rd(l);
}

static __inline__ __attribute__((always_inline)) float __ll2float_ru(long long l)
{
  return __nv_ll2float_ru(l);
}


static __inline__ __attribute__((always_inline)) float __ull2float_rn(unsigned long long l)
{
  return __nv_ull2float_rn(l);
}

static __inline__ __attribute__((always_inline)) float __ull2float_rz(unsigned long long l)
{
  return __nv_ull2float_rz(l);
}

static __inline__ __attribute__((always_inline)) float __ull2float_rd(unsigned long long l)
{
  return __nv_ull2float_rd(l);
}

static __inline__ __attribute__((always_inline)) float __ull2float_ru(unsigned long long l)
{
  return __nv_ull2float_ru(l);
}


static __inline__ __attribute__((always_inline)) double __ll2double_rn(long long l)
{
  return __nv_ll2double_rn(l);
}

static __inline__ __attribute__((always_inline)) double __ll2double_rz(long long l)
{
  return __nv_ll2double_rz(l);
}

static __inline__ __attribute__((always_inline)) double __ll2double_rd(long long l)
{
  return __nv_ll2double_rd(l);
}

static __inline__ __attribute__((always_inline)) double __ll2double_ru(long long l)
{
  return __nv_ll2double_ru(l);
}


static __inline__ __attribute__((always_inline)) double __ull2double_rn(unsigned long long l)
{
  return __nv_ull2double_rn(l);
}

static __inline__ __attribute__((always_inline)) double __ull2double_rz(unsigned long long l)
{
  return __nv_ull2double_rz(l);
}

static __inline__ __attribute__((always_inline)) double __ull2double_rd(unsigned long long l)
{
  return __nv_ull2double_rd(l);
}

static __inline__ __attribute__((always_inline)) double __ull2double_ru(unsigned long long l)
{
  return __nv_ull2double_ru(l);
}

static __inline__ __attribute__((always_inline)) unsigned short __float2half_rn(float f)
{
  return __nv_float2half_rn(f);
}

static __inline__ __attribute__((always_inline)) float __half2float(unsigned short h)
{
  return __nv_half2float(h);
}

static __inline__ __attribute__((always_inline)) float __int_as_float(int x)
{
  return __nv_int_as_float(x);
}

static __inline__ __attribute__((always_inline)) int __float_as_int(float x)
{
  return __nv_float_as_int(x);
}

static __inline__ __attribute__((always_inline)) double __longlong_as_double(long long x)
{
  return __nv_longlong_as_double(x);
}

static __inline__ __attribute__((always_inline)) long long __double_as_longlong (double x)
{
  return __nv_double_as_longlong(x);
}







static __inline__ __attribute__((always_inline)) float __sinf(float a)
{
  return __nv_fast_sinf(a);
}

static __inline__ __attribute__((always_inline)) float __cosf(float a)
{
  return __nv_fast_cosf(a);
}

static __inline__ __attribute__((always_inline)) float __log2f(float a)
{
  return __nv_fast_log2f(a);
}







static __inline__ __attribute__((always_inline)) float __tanf(float a)
{
  return __nv_fast_tanf(a);
}

static __inline__ __attribute__((always_inline)) void __sincosf(float a, float *sptr, float *cptr)
{
  __nv_fast_sincosf(a, sptr, cptr);
}

static __inline__ __attribute__((always_inline)) float __expf(float a)
{
  return __nv_fast_expf(a);
}

static __inline__ __attribute__((always_inline)) float __exp10f(float a)
{
  return __nv_fast_exp10f(a);
}

static __inline__ __attribute__((always_inline)) float __log10f(float a)
{
  return __nv_fast_log10f(a);
}

static __inline__ __attribute__((always_inline)) float __logf(float a)
{
  return __nv_fast_logf(a);
}

static __inline__ __attribute__((always_inline)) float __powf(float a, float b)
{
  return __nv_fast_powf(a, b);
}

static __inline__ __attribute__((always_inline)) float fdividef(float a, float b)
{



  return a / b;

}

static __inline__ __attribute__((always_inline)) double fdivide(double a, double b)
{
  return a / b;
}
# 4553 "/usr/local/cuda-6.5/include/device_functions.h" 3
static __inline__ __attribute__((always_inline)) int __hadd(int a, int b)
{
  return __nv_hadd(a, b);
}

static __inline__ __attribute__((always_inline)) int __rhadd(int a, int b)
{
  return __nv_rhadd(a, b);
}

static __inline__ __attribute__((always_inline)) unsigned int __uhadd(unsigned int a, unsigned int b)
{
  return __nv_uhadd(a, b);
}

static __inline__ __attribute__((always_inline)) unsigned int __urhadd(unsigned int a, unsigned int b)
{
  return __nv_urhadd(a, b);
}

static __inline__ __attribute__((always_inline)) float __fsub_rn (float a, float b)
{
  return __nv_fsub_rn(a, b);
}

static __inline__ __attribute__((always_inline)) float __fsub_rz (float a, float b)
{
  return __nv_fsub_rz(a, b);
}

static __inline__ __attribute__((always_inline)) float __fsub_rd (float a, float b)
{
  return __nv_fsub_rd(a, b);
}

static __inline__ __attribute__((always_inline)) float __fsub_ru (float a, float b)
{
  return __nv_fsub_ru(a, b);
}

static __inline__ __attribute__((always_inline)) float __frsqrt_rn (float a)
{
  return __nv_frsqrt_rn(a);
}

static __inline__ __attribute__((always_inline)) int __ffs(int a)
{
  return __nv_ffs(a);
}

static __inline__ __attribute__((always_inline)) int __ffsll(long long int a)
{
  return __nv_ffsll(a);
}






static __inline__ __attribute__((always_inline))
int __iAtomicAdd(int *p, int val)
{
  return __nvvm_atom_add_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicAdd(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_add_gen_i((volatile int *)p, (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long __ullAtomicAdd(unsigned long long *p, unsigned long long val)
{
  return __nvvm_atom_add_gen_ll((volatile long long *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
float __fAtomicAdd(float *p, float val)
{
  return __nvvm_atom_add_gen_f((volatile float *)p, val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicExch(int *p, int val)
{
  return __nvvm_atom_xchg_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicExch(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_xchg_gen_i((volatile int *)p, (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long __ullAtomicExch(unsigned long long *p,
                                   unsigned long long val)
{
  return __nvvm_atom_xchg_gen_ll((volatile long long *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
float __fAtomicExch(float *p, float val)
{
  int old = __nvvm_atom_xchg_gen_i((volatile int *)p, __float_as_int(val));
  return __int_as_float(old);
}

static __inline__ __attribute__((always_inline))
int __iAtomicMin(int *p, int val)
{
  return __nvvm_atom_min_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
long long __illAtomicMin(long long *p, long long val)
{
  return __nvvm_atom_min_gen_ll((volatile long long *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicMin(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_min_gen_ui((volatile unsigned int *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned long long __ullAtomicMin(unsigned long long *p, unsigned long long val)
{
  return __nvvm_atom_min_gen_ull((volatile unsigned long long *)p, val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicMax(int *p, int val)
{
  return __nvvm_atom_max_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
long long __illAtomicMax(long long *p, long long val)
{
  return __nvvm_atom_max_gen_ll((volatile long long *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicMax(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_max_gen_ui((unsigned int *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned long long __ullAtomicMax(unsigned long long *p, unsigned long long val)
{
  return __nvvm_atom_max_gen_ull((volatile unsigned long long *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicInc(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_inc_gen_ui((unsigned int *)p, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicDec(unsigned int *p, unsigned int val)
{
  return __nvvm_atom_dec_gen_ui((unsigned int *)p, val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicCAS(int *p, int compare, int val)
{
  return __nvvm_atom_cas_gen_i((int *)p, compare, val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicCAS(unsigned int *p, unsigned int compare,
                          unsigned int val)
{
  return (unsigned int)__nvvm_atom_cas_gen_i((volatile int *)p,
                                             (int)compare,
                                             (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long int __ullAtomicCAS(unsigned long long int *p,
                                      unsigned long long int compare,
                                      unsigned long long int val)
{
  return
    (unsigned long long int)__nvvm_atom_cas_gen_ll((volatile long long int *)p,
                                                   (long long int)compare,
                                                   (long long int)val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicAnd(int *p, int val)
{
  return __nvvm_atom_and_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
long long int __llAtomicAnd(long long int *p, long long int val)
{
  return __nvvm_atom_and_gen_ll((volatile long long int *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicAnd(unsigned int *p, unsigned int val)
{
  return (unsigned int)__nvvm_atom_and_gen_i((volatile int *)p, (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long int __ullAtomicAnd(unsigned long long int *p,
                                      unsigned long long int val)
{
  return __nvvm_atom_and_gen_ll((volatile long long int *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicOr(int *p, int val)
{
  return __nvvm_atom_or_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
long long int __llAtomicOr(long long int *p, long long int val)
{
  return __nvvm_atom_or_gen_ll((volatile long long int *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicOr(unsigned int *p, unsigned int val)
{
  return (unsigned int)__nvvm_atom_or_gen_i((volatile int *)p, (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long int __ullAtomicOr(unsigned long long int *p,
                                     unsigned long long int val)
{
  return __nvvm_atom_or_gen_ll((volatile long long int *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
int __iAtomicXor(int *p, int val)
{
  return __nvvm_atom_xor_gen_i((volatile int *)p, val);
}

static __inline__ __attribute__((always_inline))
long long int __llAtomicXor(long long int *p, long long int val)
{
  return __nvvm_atom_xor_gen_ll((volatile long long int *)p, (long long)val);
}

static __inline__ __attribute__((always_inline))
unsigned int __uAtomicXor(unsigned int *p, unsigned int val)
{
  return (unsigned int)__nvvm_atom_xor_gen_i((volatile int *)p, (int)val);
}

static __inline__ __attribute__((always_inline))
unsigned long long int __ullAtomicXor(unsigned long long int *p,
                                      unsigned long long int val)
{
  return __nvvm_atom_xor_gen_ll((volatile long long int *)p, (long long)val);
}
# 7291 "/usr/local/cuda-6.5/include/device_functions.h" 3
static __inline__ __attribute__((always_inline)) unsigned int __vabs2(unsigned int a)
{
    unsigned int r;

    unsigned int b = 0, c = 0;
    asm ("vabsdiff2.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(c));
# 7322 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsss2(unsigned int a)
{
    unsigned int r;

    unsigned int b = 0, c = 0;
    asm("vabsdiff2.s32.s32.s32.sat %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(c));
# 7362 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vadd2(unsigned int a, unsigned int b)
{
    unsigned int s, t;

    s = 0;
    asm ("vadd2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(t) : "r"(a), "r"(b), "r"(s));







    return t;
}

static __inline__ __attribute__((always_inline)) unsigned int __vaddss2 (unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vadd2.s32.s32.s32.sat %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 7406 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vaddus2 (unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vadd2.u32.u32.u32.sat %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 7434 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vavgs2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vavrg2.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 7478 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vavgu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vavrg2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 7496 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vhaddu2(unsigned int a, unsigned int b)
{


    unsigned int r, s;
    s = a ^ b;
    r = a & b;
    s = s & 0xfffefffe;
    s = s >> 1;
    r = r + s;
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpeq2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.eq %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7536 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpges2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7569 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgeu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7592 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgts2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7625 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgtu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7648 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmples2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7681 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpleu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7704 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmplts2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7737 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpltu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7760 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpne2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.ne %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 16;
    r = c - r;
# 7787 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsdiffu2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vabsdiff2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(s));
# 7811 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmaxs2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmax2.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));
# 7830 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmaxu2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmax2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));
# 7849 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmins2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmin2.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));
# 7868 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vminu2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmin2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));
# 7887 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vseteq2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.eq %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 7906 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetges2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 7938 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgeu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgts2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 7985 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgtu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetles2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8032 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetleu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetlts2(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset2.s32.s32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8079 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetltu2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetne2(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset2.u32.u32.ne %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8113 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsadu2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm("vabsdiff2.u32.u32.u32.add %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(s));
# 8141 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsub2(unsigned int a, unsigned int b)
{
    unsigned int s, t;

    s = 0;
    asm ("vsub2.u32.u32.u32 %0,%1,%2,%3;" : "=r"(t) : "r"(a), "r"(b), "r"(s));







    return t;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsubss2 (unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vsub2.s32.s32.s32.sat %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 8189 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsubus2 (unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vsub2.u32.u32.u32.sat %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 8217 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vneg2(unsigned int a)
{
    return __vsub2 (0, a);
}

static __inline__ __attribute__((always_inline)) unsigned int __vnegss2(unsigned int a)
{
    return __vsubss2(0,a);
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsdiffs2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vabsdiff2.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(s));







    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsads2(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm("vabsdiff2.s32.s32.s32.add %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(s));




    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabs4(unsigned int a)
{
    unsigned int r;

    unsigned int b = 0, c = 0;
    asm ("vabsdiff4.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(c));
# 8290 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsss4(unsigned int a)
{
    unsigned int r;

    unsigned int b = 0, c = 0;
    asm("vabsdiff4.s32.s32.s32.sat %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(c));
# 8330 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vadd4(unsigned int a, unsigned int b)
{

    unsigned int r, c = 0;
    asm ("vadd4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8347 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vaddss4 (unsigned int a, unsigned int b)
{

    unsigned int r, c = 0;
    asm ("vadd4.sat.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 8425 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vaddus4 (unsigned int a, unsigned int b)
{

    unsigned int r, c = 0;
    asm ("vadd4.u32.u32.u32.sat %0,%1,%2,%3;" : "=r"(r):"r"(a),"r"(b),"r"(c));
# 8490 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vavgs4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vavrg4.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8534 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vavgu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vavrg4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8552 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vhaddu4(unsigned int a, unsigned int b)
{


    unsigned int r, s;
    s = a ^ b;
    r = a & b;
    s = s & 0xfefefefe;
    s = s >> 1;
    s = r + s;
    return s;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpeq4(unsigned int a, unsigned int b)
{
    unsigned int c, r;

    r = 0;
    asm ("vset4.u32.u32.eq %0,%1,%2,%3;" : "=r"(c) : "r"(a), "r"(b), "r"(r));
    r = c << 8;
    r = r - c;
# 8592 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpges4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8628 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgeu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8651 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgts4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8690 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpgtu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8713 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmples4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8752 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpleu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8775 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmplts4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8813 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpltu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8836 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vcmpne4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.ne %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
    c = r << 8;
    r = c - r;
# 8863 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsdiffu4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vabsdiff4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(s));







    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmaxs4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmax4.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmaxu4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmax4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vmins4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmin4.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vminu4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vmin4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(s));






    return r;
}
static __inline__ __attribute__((always_inline)) unsigned int __vseteq4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.eq %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8957 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetles4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 8988 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetleu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.le %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetlts4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 9033 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetltu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.lt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetges4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 9076 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgeu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.ge %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgts4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vset4.s32.s32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 9122 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetgtu4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.gt %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsetne4(unsigned int a, unsigned int b)
{
    unsigned int r, c;

    c = 0;
    asm ("vset4.u32.u32.ne %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 9156 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsadu4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm("vabsdiff4.u32.u32.u32.add %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(s));






    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsub4(unsigned int a, unsigned int b)
{

    unsigned int r, c = 0;
    asm ("vsub4.u32.u32.u32 %0,%1,%2,%3;" : "=r"(r) : "r"(a), "r"(b), "r"(c));
# 9188 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsubss4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vsub4.s32.s32.s32.sat %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(c));
# 9267 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsubus4(unsigned int a, unsigned int b)
{
    unsigned int r;

    unsigned int c = 0;
    asm ("vsub4.u32.u32.u32.sat %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(c));
# 9329 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vneg4(unsigned int a)
{
    return __vsub4 (0, a);
}

static __inline__ __attribute__((always_inline)) unsigned int __vnegss4(unsigned int a)
{
    unsigned int r;

    unsigned int s = 0;
    asm ("vsub4.s32.s32.s32.sat %0,%1,%2,%3;" : "=r"(r) :"r"(s),"r"(a),"r"(s));
# 9357 "/usr/local/cuda-6.5/include/device_functions.h" 3
    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vabsdiffs4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm ("vabsdiff4.s32.s32.s32 %0,%1,%2,%3;" : "=r"(r) :"r"(a),"r"(b),"r"(s));







    return r;
}

static __inline__ __attribute__((always_inline)) unsigned int __vsads4(unsigned int a, unsigned int b)
{
    unsigned int r, s;

    s = 0;
    asm("vabsdiff4.s32.s32.s32.add %0,%1,%2,%3;":"=r"(r):"r"(a),"r"(b),"r"(s));






    return r;
}
# 9405 "/usr/local/cuda-6.5/include/device_functions.h" 3
# 1 "/usr/local/cuda-6.5/include/sm_11_atomic_functions.h" 1 3
# 9406 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_12_atomic_functions.h" 1 3
# 9407 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_13_double_functions.h" 1 3
# 1233 "/usr/local/cuda-6.5/include/sm_13_double_functions.h" 3
static __inline__ __attribute__((always_inline)) double __dsub_rn(double a, double b)
{
  double res;
  asm ("sub.rn.f64 %0, %1, %2;" : "=d"(res) : "d"(a), "d"(b));
  return res;
}

static __inline__ __attribute__((always_inline)) double __dsub_rz(double a, double b)
{
  double res;
  asm ("sub.rz.f64 %0, %1, %2;" : "=d"(res) : "d"(a), "d"(b));
  return res;
}

static __inline__ __attribute__((always_inline)) double __dsub_ru(double a, double b)
{
  double res;
  asm ("sub.rp.f64 %0, %1, %2;" : "=d"(res) : "d"(a), "d"(b));
  return res;
}

static __inline__ __attribute__((always_inline)) double __dsub_rd(double a, double b)
{
  double res;
  asm ("sub.rm.f64 %0, %1, %2;" : "=d"(res) : "d"(a), "d"(b));
  return res;
}
# 9408 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_20_atomic_functions.h" 1 3
# 9409 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_32_atomic_functions.h" 1 3
# 9410 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_35_atomic_functions.h" 1 3
# 9411 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_20_intrinsics.h" 1 3
# 9412 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_30_intrinsics.h" 1 3
# 9413 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_32_intrinsics.h" 1 3
# 9414 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/sm_35_intrinsics.h" 1 3
# 9415 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/surface_functions.h" 1 3
# 4488 "/usr/local/cuda-6.5/include/surface_functions.h" 3
extern uchar1 __surf1Dreadc1(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uchar2 __surf1Dreadc2(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uchar4 __surf1Dreadc4(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern ushort1 __surf1Dreads1(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern ushort2 __surf1Dreads2(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern ushort4 __surf1Dreads4(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uint1 __surf1Dreadu1(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uint2 __surf1Dreadu2(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uint4 __surf1Dreadu4(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf1Dreadl1(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf1Dreadl2(unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern uchar1 __surf2Dreadc1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar2 __surf2Dreadc2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar4 __surf2Dreadc4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort1 __surf2Dreads1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort2 __surf2Dreads2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort4 __surf2Dreads4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint1 __surf2Dreadu1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint2 __surf2Dreadu2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint4 __surf2Dreadu4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf2Dreadl1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf2Dreadl2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar1 __surf3Dreadc1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uchar2 __surf3Dreadc2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uchar4 __surf3Dreadc4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort1 __surf3Dreads1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort2 __surf3Dreads2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort4 __surf3Dreads4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint1 __surf3Dreadu1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint2 __surf3Dreadu2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint4 __surf3Dreadu4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf3Dreadl1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf3Dreadl2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uchar1 __surf1DLayeredreadc1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar2 __surf1DLayeredreadc2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar4 __surf1DLayeredreadc4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort1 __surf1DLayeredreads1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort2 __surf1DLayeredreads2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ushort4 __surf1DLayeredreads4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint1 __surf1DLayeredreadu1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint2 __surf1DLayeredreadu2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uint4 __surf1DLayeredreadu4(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf1DLayeredreadl1(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf1DLayeredreadl2(unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern uchar1 __surf2DLayeredreadc1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uchar2 __surf2DLayeredreadc2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uchar4 __surf2DLayeredreadc4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort1 __surf2DLayeredreads1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort2 __surf2DLayeredreads2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ushort4 __surf2DLayeredreads4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint1 __surf2DLayeredreadu1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint2 __surf2DLayeredreadu2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern uint4 __surf2DLayeredreadu4(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf2DLayeredreadl1(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf2DLayeredreadl2(unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwritec1( uchar1, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwritec2( uchar2, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwritec4( uchar4, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwrites1( ushort1, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwrites2( ushort2, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwrites4( ushort4, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwriteu1( uint1, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwriteu2( uint2, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwriteu4( uint4, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwritel1(ulonglong1, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf1Dwritel2(ulonglong2, unsigned long long, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwritec1( uchar1, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwritec2( uchar2, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwritec4( uchar4, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwrites1( ushort1, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwrites2( ushort2, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwrites4( ushort4, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwriteu1( uint1, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwriteu2( uint2, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwriteu4( uint4, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwritel1(ulonglong1, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2Dwritel2(ulonglong2, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwritec1( uchar1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwritec2( uchar2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwritec4( uchar4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwrites1( ushort1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwrites2( ushort2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwrites4( ushort4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwriteu1( uint1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwriteu2( uint2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwriteu4( uint4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwritel1(ulonglong1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf3Dwritel2(ulonglong2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwritec1( uchar1 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwritec2( uchar2 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwritec4( uchar4 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwrites1( ushort1 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwrites2( ushort2 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwrites4( ushort4 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwriteu1( uint1 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwriteu2( uint2 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwriteu4( uint4 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwritel1(ulonglong1 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf1DLayeredwritel2(ulonglong2 val, unsigned long long, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwritec1( uchar1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwritec2( uchar2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwritec4( uchar4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwrites1( ushort1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwrites2( ushort2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwrites4( ushort4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwriteu1( uint1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwriteu2( uint2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwriteu4( uint4 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwritel1(ulonglong1 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
extern void __surf2DLayeredwritel2(ulonglong2 val, unsigned long long, int, int, int, enum cudaSurfaceBoundaryMode);
# 9416 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/texture_fetch_functions.h" 1 3
# 3691 "/usr/local/cuda-6.5/include/texture_fetch_functions.h" 3
extern uint4 __utexfetchi1D(unsigned long long, int4);
extern int4 __itexfetchi1D(unsigned long long, int4);
extern float4 __ftexfetchi1D(unsigned long long, int4);
extern uint4 __utexfetch1D(unsigned long long, float4);
extern int4 __itexfetch1D(unsigned long long, float4);
extern float4 __ftexfetch1D(unsigned long long, float4);
extern uint4 __utexfetch2D(unsigned long long, float4);
extern int4 __itexfetch2D(unsigned long long, float4);
extern float4 __ftexfetch2D(unsigned long long, float4);
extern uint4 __utexfetch3D(unsigned long long, float4);
extern int4 __itexfetch3D(unsigned long long, float4);
extern float4 __ftexfetch3D(unsigned long long, float4);
extern uint4 __utexfetchcube(unsigned long long, float4);
extern int4 __itexfetchcube(unsigned long long, float4);
extern float4 __ftexfetchcube(unsigned long long, float4);
extern uint4 __utexfetchl1D(unsigned long long, float4, int);
extern int4 __itexfetchl1D(unsigned long long, float4, int);
extern float4 __ftexfetchl1D(unsigned long long, float4, int);
extern uint4 __utexfetchl2D(unsigned long long, float4, int);
extern int4 __itexfetchl2D(unsigned long long, float4, int);
extern float4 __ftexfetchl2D(unsigned long long, float4, int);
extern uint4 __utexfetchlcube(unsigned long long, float4, int);
extern int4 __itexfetchlcube(unsigned long long, float4, int);
extern float4 __ftexfetchlcube(unsigned long long, float4, int);
# 9531 "/usr/local/cuda-6.5/include/texture_fetch_functions.h" 3
extern uint4 __utex2Dgather0(unsigned long long, float2);
extern uint4 __utex2Dgather1(unsigned long long, float2);
extern uint4 __utex2Dgather2(unsigned long long, float2);
extern uint4 __utex2Dgather3(unsigned long long, float2);
extern int4 __itex2Dgather0(unsigned long long, float2);
extern int4 __itex2Dgather1(unsigned long long, float2);
extern int4 __itex2Dgather2(unsigned long long, float2);
extern int4 __itex2Dgather3(unsigned long long, float2);
extern float4 __ftex2Dgather0(unsigned long long, float2);
extern float4 __ftex2Dgather1(unsigned long long, float2);
extern float4 __ftex2Dgather2(unsigned long long, float2);
extern float4 __ftex2Dgather3(unsigned long long, float2);

extern uint4 __utexfetchlod1D(unsigned long long, float4, float);
extern int4 __itexfetchlod1D(unsigned long long, float4, float);
extern float4 __ftexfetchlod1D(unsigned long long, float4, float);
extern uint4 __utexfetchlod2D(unsigned long long, float4, float);
extern int4 __itexfetchlod2D(unsigned long long, float4, float);
extern float4 __ftexfetchlod2D(unsigned long long, float4, float);
extern uint4 __utexfetchlod3D(unsigned long long, float4, float);
extern int4 __itexfetchlod3D(unsigned long long, float4, float);
extern float4 __ftexfetchlod3D(unsigned long long, float4, float);
extern uint4 __utexfetchlodcube(unsigned long long, float4, float);
extern int4 __itexfetchlodcube(unsigned long long, float4, float);
extern float4 __ftexfetchlodcube(unsigned long long, float4, float);
extern uint4 __utexfetchlodl1D(unsigned long long, float4, int, float);
extern int4 __itexfetchlodl1D(unsigned long long, float4, int, float);
extern float4 __ftexfetchlodl1D(unsigned long long, float4, int, float);
extern uint4 __utexfetchlodl2D(unsigned long long, float4, int, float);
extern int4 __itexfetchlodl2D(unsigned long long, float4, int, float);
extern float4 __ftexfetchlodl2D(unsigned long long, float4, int, float);
extern uint4 __utexfetchlodlcube(unsigned long long, float4, int, float);
extern int4 __itexfetchlodlcube(unsigned long long, float4, int, float);
extern float4 __ftexfetchlodlcube(unsigned long long, float4, int, float);

extern uint4 __utexfetchgrad1D(unsigned long long, float4, float4, float4);
extern int4 __itexfetchgrad1D(unsigned long long, float4, float4, float4);
extern float4 __ftexfetchgrad1D(unsigned long long, float4, float4, float4);
extern uint4 __utexfetchgrad2D(unsigned long long, float4, float4, float4);
extern int4 __itexfetchgrad2D(unsigned long long, float4, float4, float4);
extern float4 __ftexfetchgrad2D(unsigned long long, float4, float4, float4);
extern uint4 __utexfetchgrad3D(unsigned long long, float4, float4, float4);
extern int4 __itexfetchgrad3D(unsigned long long, float4, float4, float4);
extern float4 __ftexfetchgrad3D(unsigned long long, float4, float4, float4);
extern uint4 __utexfetchgradl1D(unsigned long long, float4, int, float4, float4);
extern int4 __itexfetchgradl1D(unsigned long long, float4, int, float4, float4);
extern float4 __ftexfetchgradl1D(unsigned long long, float4, int, float4, float4);
extern uint4 __utexfetchgradl2D(unsigned long long, float4, int, float4, float4);
extern int4 __itexfetchgradl2D(unsigned long long, float4, int, float4, float4);
extern float4 __ftexfetchgradl2D(unsigned long long, float4, int, float4, float4);
# 9417 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/texture_indirect_functions.h" 1 3
# 9418 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 1 "/usr/local/cuda-6.5/include/surface_indirect_functions.h" 1 3
# 9419 "/usr/local/cuda-6.5/include/device_functions.h" 2 3
# 9121 "/usr/local/cuda-6.5/include/math_functions.h" 2 3
# 9136 "/usr/local/cuda-6.5/include/math_functions.h" 3
static __inline__ __attribute__((always_inline)) float rintf(float a)
{
  return __nv_rintf(a);
}

static __inline__ __attribute__((always_inline)) long int lrintf(float a)
{

  return (long int)__float2ll_rn(a);



}

static __inline__ __attribute__((always_inline)) long long int llrintf(float a)
{
  return __nv_llrintf(a);
}

static __inline__ __attribute__((always_inline)) float nearbyintf(float a)
{
  return __nv_nearbyintf(a);
}







static __inline__ __attribute__((always_inline)) int __signbitf(float a)
{
  return __nv_signbitf(a);
}
# 9193 "/usr/local/cuda-6.5/include/math_functions.h" 3
static __inline__ __attribute__((always_inline)) float copysignf(float a, float b)
{
  return __nv_copysignf(a, b);
}

static __inline__ __attribute__((always_inline)) int __finitef(float a)
{
  return __nv_finitef(a);
}
# 9212 "/usr/local/cuda-6.5/include/math_functions.h" 3
static __inline__ __attribute__((always_inline)) int __isinff(float a)
{
  return __nv_isinff(a);
}

static __inline__ __attribute__((always_inline)) int __isnanf(float a)
{
  return __nv_isnanf(a);
}

static __inline__ __attribute__((always_inline)) float nextafterf(float a, float b)
{
  return __nv_nextafterf(a, b);
}

static __inline__ __attribute__((always_inline)) float nanf(const char *tagp)
{
  return __nv_nanf((const signed char *) tagp);
}







static __inline__ __attribute__((always_inline)) float sinf(float a)
{



  return __nv_sinf(a);

}

static __inline__ __attribute__((always_inline)) float cosf(float a)
{



  return __nv_cosf(a);

}

static __inline__ __attribute__((always_inline)) void sincosf(float a, float *sptr, float *cptr)
{



  __nv_sincosf(a, sptr, cptr);

}

static __inline__ __attribute__((always_inline)) float sinpif(float a)
{
  return __nv_sinpif(a);
}

static __inline__ __attribute__((always_inline)) float cospif(float a)
{
  return __nv_cospif(a);
}

static __inline__ __attribute__((always_inline)) void sincospif(float a, float *sptr, float *cptr)
{
  __nv_sincospif(a, sptr, cptr);
}

static __inline__ __attribute__((always_inline)) float tanf(float a)
{



  return __nv_tanf(a);

}

static __inline__ __attribute__((always_inline)) float log2f(float a)
{



  return __nv_log2f(a);

}

static __inline__ __attribute__((always_inline)) float expf(float a)
{



  return __nv_expf(a);

}

static __inline__ __attribute__((always_inline)) float exp10f(float a)
{



  return __nv_exp10f(a);

}

static __inline__ __attribute__((always_inline)) float coshf(float a)
{
  return __nv_coshf(a);
}

static __inline__ __attribute__((always_inline)) float sinhf(float a)
{
  return __nv_sinhf(a);
}

static __inline__ __attribute__((always_inline)) float tanhf(float a)
{
  return __nv_tanhf(a);
}

static __inline__ __attribute__((always_inline)) float atan2f(float a, float b)
{
  return __nv_atan2f(a, b);
}

static __inline__ __attribute__((always_inline)) float atanf(float a)
{
  return __nv_atanf(a);
}

static __inline__ __attribute__((always_inline)) float asinf(float a)
{
  return __nv_asinf(a);
}

static __inline__ __attribute__((always_inline)) float acosf(float a)
{
  return __nv_acosf(a);
}

static __inline__ __attribute__((always_inline)) float logf(float a)
{



  return __nv_logf(a);

}

static __inline__ __attribute__((always_inline)) float log10f(float a)
{



  return __nv_log10f(a);

}

static __inline__ __attribute__((always_inline)) float log1pf(float a)
{
  return __nv_log1pf(a);
}

static __inline__ __attribute__((always_inline)) float acoshf(float a)
{
  return __nv_acoshf(a);
}

static __inline__ __attribute__((always_inline)) float asinhf(float a)
{
  return __nv_asinhf(a);
}

static __inline__ __attribute__((always_inline)) float atanhf(float a)
{
  return __nv_atanhf(a);
}

static __inline__ __attribute__((always_inline)) float expm1f(float a)
{
  return __nv_expm1f(a);
}

static __inline__ __attribute__((always_inline)) float hypotf(float a, float b)
{
  return __nv_hypotf(a, b);
}

static __inline__ __attribute__((always_inline)) float rhypotf(float a, float b)
{
  return __nv_rhypotf(a, b);
}
static __inline__ __attribute__((always_inline)) float cbrtf(float a)
{
  return __nv_cbrtf(a);
}

static __inline__ __attribute__((always_inline)) float rcbrtf(float a)
{
  return __nv_rcbrtf(a);
}

static __inline__ __attribute__((always_inline)) float j0f(float a)
{
  return __nv_j0f(a);
}

static __inline__ __attribute__((always_inline)) float j1f(float a)
{
  return __nv_j1f(a);
}

static __inline__ __attribute__((always_inline)) float y0f(float a)
{
  return __nv_y0f(a);
}

static __inline__ __attribute__((always_inline)) float y1f(float a)
{
  return __nv_y1f(a);
}

static __inline__ __attribute__((always_inline)) float ynf(int n, float a)
{
  return __nv_ynf(n, a);
}

static __inline__ __attribute__((always_inline)) float jnf(int n, float a)
{
  return __nv_jnf(n, a);
}

static __inline__ __attribute__((always_inline)) float cyl_bessel_i0f(float a)
{
  return __nv_cyl_bessel_i0f(a);
}

static __inline__ __attribute__((always_inline)) float cyl_bessel_i1f(float a)
{
  return __nv_cyl_bessel_i1f(a);
}

static __inline__ __attribute__((always_inline)) float erff(float a)
{
  return __nv_erff(a);
}
# 9475 "/usr/local/cuda-6.5/include/math_functions.h" 3
static __inline__ __attribute__((always_inline)) float erfinvf(float a)
{
  return __nv_erfinvf(a);
}

static __inline__ __attribute__((always_inline)) float erfcf(float a)
{
  return __nv_erfcf(a);
}

static __inline__ __attribute__((always_inline)) float erfcxf(float a)
{
  return __nv_erfcxf(a);
}

static __inline__ __attribute__((always_inline)) float erfcinvf(float a)
{
  return __nv_erfcinvf(a);
}

static __inline__ __attribute__((always_inline)) float normcdfinvf(float a)
{
  return __nv_normcdfinvf(a);
}





static __inline__ __attribute__((always_inline)) float normcdff(float a)
{
  return __nv_normcdff(a);
}

static __inline__ __attribute__((always_inline)) float lgammaf(float a)
{
  return __nv_lgammaf(a);
}

static __inline__ __attribute__((always_inline)) float ldexpf(float a, int b)
{
  return __nv_ldexpf(a, b);
}

static __inline__ __attribute__((always_inline)) float scalbnf(float a, int b)
{
  return __nv_scalbnf(a, b);
}

static __inline__ __attribute__((always_inline)) float scalblnf(float a, long int b)
{
  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return scalbnf(a, t);
}

static __inline__ __attribute__((always_inline)) float frexpf(float a, int *b)
{
  return __nv_frexpf(a, b);
}

static __inline__ __attribute__((always_inline)) float modff(float a, float *b)
{
  return __nv_modff(a, b);
}

static __inline__ __attribute__((always_inline)) float fmodf(float a, float b)
{
  return __nv_fmodf(a, b);
}

static __inline__ __attribute__((always_inline)) float remainderf(float a, float b)
{
  return __nv_remainderf(a, b);
}

static __inline__ __attribute__((always_inline)) float remquof(float a, float b, int* quo)
{
  return __nv_remquof(a, b, quo);
}

static __inline__ __attribute__((always_inline)) float fmaf(float a, float b, float c)
{
  return __nv_fmaf(a, b, c);
}

static __inline__ __attribute__((always_inline)) float powif(float a, int b)
{
  return __nv_powif(a, b);
}

static __inline__ __attribute__((always_inline)) double powi(double a, int b)
{
  return __nv_powi(a, b);
}

static __inline__ __attribute__((always_inline)) float powf(float a, float b)
{



  return __nv_powf(a, b);

}





static __inline__ __attribute__((always_inline)) float tgammaf(float a)
{
  return __nv_tgammaf(a);
}

static __inline__ __attribute__((always_inline)) float roundf(float a)
{
  return __nv_roundf(a);
}

static __inline__ __attribute__((always_inline)) long long int llroundf(float a)
{
  return __nv_llroundf(a);
}

static __inline__ __attribute__((always_inline)) long int lroundf(float a)
{

  return (long int)llroundf(a);



}

static __inline__ __attribute__((always_inline)) float fdimf(float a, float b)
{
  return __nv_fdimf(a, b);
}

static __inline__ __attribute__((always_inline)) int ilogbf(float a)
{
  return __nv_ilogbf(a);
}

static __inline__ __attribute__((always_inline)) float logbf(float a)
{
  return __nv_logbf(a);
}
# 14768 "/usr/local/cuda-6.5/include/math_functions.h" 3
# 1 "/usr/local/cuda-6.5/include/math_functions_dbl_ptx3.h" 1 3
# 65 "/usr/local/cuda-6.5/include/math_functions_dbl_ptx3.h" 3
static __inline__ __attribute__((always_inline)) double rint(double a)
{
  return __nv_rint(a);
}

static __inline__ __attribute__((always_inline)) long int lrint(double a)
{

  return (long int)__double2ll_rn(a);



}

static __inline__ __attribute__((always_inline)) long long int llrint(double a)
{
  return __nv_llrint(a);
}

static __inline__ __attribute__((always_inline)) double nearbyint(double a)
{
  return __nv_nearbyint(a);
}







static __inline__ __attribute__((always_inline)) int __signbitd(double a)
{
  return __nv_signbitd(a);
}

static __inline__ __attribute__((always_inline)) int __isfinited(double a)
{
  return __nv_isfinited(a);
}

static __inline__ __attribute__((always_inline)) int __isinfd(double a)
{
  return __nv_isinfd(a);
}

static __inline__ __attribute__((always_inline)) int __isnand(double a)
{
  return __nv_isnand(a);
}
# 139 "/usr/local/cuda-6.5/include/math_functions_dbl_ptx3.h" 3
static __inline__ __attribute__((always_inline)) int __signbit(double a)
{
  return __signbitd(a);
}

static __inline__ __attribute__((always_inline)) int __signbitl( double a)
{
  return __signbit((double)a);
}

static __inline__ __attribute__((always_inline)) int __finite(double a)
{
  return __isfinited(a);
}

static __inline__ __attribute__((always_inline)) int __finitel( double a)
{
  return __finite((double)a);
}

static __inline__ __attribute__((always_inline)) int __isinf(double a)
{
  return __isinfd(a);
}

static __inline__ __attribute__((always_inline)) int __isinfl( double a)
{
  return __isinf((double)a);
}

static __inline__ __attribute__((always_inline)) int __isnan(double a)
{
  return __isnand(a);
}

static __inline__ __attribute__((always_inline)) int __isnanl( double a)
{
  return __isnan((double)a);
}



static __inline__ __attribute__((always_inline)) double copysign(double a, double b)
{
  return __nv_copysign(a, b);
}

static __inline__ __attribute__((always_inline)) void sincos(double a, double *sptr, double *cptr)
{
  __nv_sincos(a, sptr, cptr);
}

static __inline__ __attribute__((always_inline)) void sincospi(double a, double *sptr, double *cptr)
{
  __nv_sincospi(a, sptr, cptr);
}

static __inline__ __attribute__((always_inline)) double sin(double a)
{
  return __nv_sin(a);
}

static __inline__ __attribute__((always_inline)) double cos(double a)
{
  return __nv_cos(a);
}

static __inline__ __attribute__((always_inline)) double sinpi(double a)
{
  return __nv_sinpi(a);
}

static __inline__ __attribute__((always_inline)) double cospi(double a)
{
  return __nv_cospi(a);
}

static __inline__ __attribute__((always_inline)) double tan(double a)
{
  return __nv_tan(a);
}

static __inline__ __attribute__((always_inline)) double log(double a)
{
  return __nv_log(a);
}

static __inline__ __attribute__((always_inline)) double log2(double a)
{
  return __nv_log2(a);
}

static __inline__ __attribute__((always_inline)) double log10(double a)
{
  return __nv_log10(a);
}

static __inline__ __attribute__((always_inline)) double log1p(double a)
{
  return __nv_log1p(a);
}

static __inline__ __attribute__((always_inline)) double exp(double a)
{
  return __nv_exp(a);
}

static __inline__ __attribute__((always_inline)) double exp2(double a)
{
  return __nv_exp2(a);
}

static __inline__ __attribute__((always_inline)) double exp10(double a)
{
  return __nv_exp10(a);
}

static __inline__ __attribute__((always_inline)) double expm1(double a)
{
  return __nv_expm1(a);
}

static __inline__ __attribute__((always_inline)) double cosh(double a)
{
  return __nv_cosh(a);
}

static __inline__ __attribute__((always_inline)) double sinh(double a)
{
  return __nv_sinh(a);
}

static __inline__ __attribute__((always_inline)) double tanh(double a)
{
  return __nv_tanh(a);
}

static __inline__ __attribute__((always_inline)) double atan2(double a, double b)
{
  return __nv_atan2(a, b);
}

static __inline__ __attribute__((always_inline)) double atan(double a)
{
  return __nv_atan(a);
}

static __inline__ __attribute__((always_inline)) double asin(double a)
{
  return __nv_asin(a);
}

static __inline__ __attribute__((always_inline)) double acos(double a)
{
  return __nv_acos(a);
}

static __inline__ __attribute__((always_inline)) double acosh(double a)
{
  return __nv_acosh(a);
}

static __inline__ __attribute__((always_inline)) double asinh(double a)
{
  return __nv_asinh(a);
}

static __inline__ __attribute__((always_inline)) double atanh(double a)
{
  return __nv_atanh(a);
}

static __inline__ __attribute__((always_inline)) double hypot(double a, double b)
{
  return __nv_hypot(a, b);
}

static __inline__ __attribute__((always_inline)) double rhypot(double a, double b)
{
  return __nv_rhypot(a, b);
}

static __inline__ __attribute__((always_inline)) double cbrt(double a)
{
  return __nv_cbrt(a);
}

static __inline__ __attribute__((always_inline)) double rcbrt(double a)
{
  return __nv_rcbrt(a);
}

static __inline__ __attribute__((always_inline)) double pow(double a, double b)
{
  return __nv_pow(a, b);
}

static __inline__ __attribute__((always_inline)) double j0(double a)
{
  return __nv_j0(a);
}

static __inline__ __attribute__((always_inline)) double j1(double a)
{
  return __nv_j1(a);
}

static __inline__ __attribute__((always_inline)) double y0(double a)
{
  return __nv_y0(a);
}

static __inline__ __attribute__((always_inline)) double y1(double a)
{
  return __nv_y1(a);
}

static __inline__ __attribute__((always_inline)) double yn(int n, double a)
{
  return __nv_yn(n, a);
}

static __inline__ __attribute__((always_inline)) double jn(int n, double a)
{
  return __nv_jn(n, a);
}

static __inline__ __attribute__((always_inline)) double cyl_bessel_i0(double a)
{
  return __nv_cyl_bessel_i0(a);
}

static __inline__ __attribute__((always_inline)) double cyl_bessel_i1(double a)
{
  return __nv_cyl_bessel_i1(a);
}

static __inline__ __attribute__((always_inline)) double erf(double a)
{
  return __nv_erf(a);
}

static __inline__ __attribute__((always_inline)) double erfinv(double a)
{
  return __nv_erfinv(a);
}

static __inline__ __attribute__((always_inline)) double erfcinv(double a)
{
  return __nv_erfcinv(a);
}

static __inline__ __attribute__((always_inline)) double normcdfinv(double a)
{
  return __nv_normcdfinv(a);
}

static __inline__ __attribute__((always_inline)) double erfc(double a)
{
  return __nv_erfc(a);
}

static __inline__ __attribute__((always_inline)) double erfcx(double a)
{
  return __nv_erfcx(a);
}

static __inline__ __attribute__((always_inline)) double normcdf(double a)
{
  return __nv_normcdf(a);
}

static __inline__ __attribute__((always_inline)) double tgamma(double a)
{
  return __nv_tgamma(a);
}

static __inline__ __attribute__((always_inline)) double lgamma(double a)
{
  return __nv_lgamma(a);
}

static __inline__ __attribute__((always_inline)) double ldexp(double a, int b)
{
  return __nv_ldexp(a, b);
}

static __inline__ __attribute__((always_inline)) double scalbn(double a, int b)
{
  return __nv_scalbn(a, b);
}

static __inline__ __attribute__((always_inline)) double scalbln(double a, long int b)
{


  if (b < -2147483648L) b = -2147483648L;
  if (b > 2147483647L) b = 2147483647L;

  return scalbn(a, (int)b);
}

static __inline__ __attribute__((always_inline)) double frexp(double a, int *b)
{
  return __nv_frexp(a, b);
}

static __inline__ __attribute__((always_inline)) double modf(double a, double *b)
{
  return __nv_modf(a, b);
}

static __inline__ __attribute__((always_inline)) double fmod(double a, double b)
{
  return __nv_fmod(a, b);
}

static __inline__ __attribute__((always_inline)) double remainder(double a, double b)
{
  return __nv_remainder(a, b);
}

static __inline__ __attribute__((always_inline)) double remquo(double a, double b, int *c)
{
  return __nv_remquo(a, b, c);
}

static __inline__ __attribute__((always_inline)) double nextafter(double a, double b)
{
  return __nv_nextafter(a, b);
}

static __inline__ __attribute__((always_inline)) double nan(const char *tagp)
{
  return __nv_nan((const signed char *) tagp);
}

static __inline__ __attribute__((always_inline)) double round(double a)
{
  return __nv_round(a);
}

static __inline__ __attribute__((always_inline)) long long int llround(double a)
{
  return __nv_llround(a);
}

static __inline__ __attribute__((always_inline)) long int lround(double a)
{

  return (long int)llround(a);



}

static __inline__ __attribute__((always_inline)) double fdim(double a, double b)
{
  return __nv_fdim(a, b);
}

static __inline__ __attribute__((always_inline)) int ilogb(double a)
{
  return __nv_ilogb(a);
}

static __inline__ __attribute__((always_inline)) double logb(double a)
{
  return __nv_logb(a);
}

static __inline__ __attribute__((always_inline)) double fma(double a, double b, double c)
{
  return __nv_fma(a, b, c);
}
# 14769 "/usr/local/cuda-6.5/include/math_functions.h" 2 3
# 170 "/usr/local/cuda-6.5/bin/..//include/common_functions.h" 2
# 57 "../src/Vec2.cu" 2
# 60 "../src/Vec2.hpp"
 __attribute__((nv_linkonce_odr)) __inline__ int _ZNK4Vec25widthEv(
# 60 "../src/Vec2.hpp"
const struct Vec2 *const this){
# 60 "../src/Vec2.hpp"
{
# 60 "../src/Vec2.hpp"
{
# 60 "../src/Vec2.hpp"
 int __T24;
# 60 "../src/Vec2.hpp"
{
# 61 "../src/Vec2.hpp"
if (!(this))
# 61 "../src/Vec2.hpp"
{
# 61 "../src/Vec2.hpp"
__T24 = 0;
# 61 "../src/Vec2.hpp"
}
# 61 "../src/Vec2.hpp"
return this->imWidth;
# 61 "../src/Vec2.hpp"
}
# 62 "../src/Vec2.hpp"
}
# 62 "../src/Vec2.hpp"
}}
# 63 "../src/Vec2.hpp"
 __attribute__((nv_linkonce_odr)) __inline__ int _ZNK4Vec26heightEv(
# 63 "../src/Vec2.hpp"
const struct Vec2 *const this){
# 63 "../src/Vec2.hpp"
{
# 63 "../src/Vec2.hpp"
{
# 63 "../src/Vec2.hpp"
 int __T25;
# 63 "../src/Vec2.hpp"
{
# 64 "../src/Vec2.hpp"
if (!(this))
# 64 "../src/Vec2.hpp"
{
# 64 "../src/Vec2.hpp"
__T25 = 0;
# 64 "../src/Vec2.hpp"
}
# 64 "../src/Vec2.hpp"
return this->imHeight;
# 64 "../src/Vec2.hpp"
}
# 65 "../src/Vec2.hpp"
}
# 65 "../src/Vec2.hpp"
}}
# 70 "../src/Vec2.hpp"
 __attribute__((nv_linkonce_odr)) __inline__ struct float2 *_ZNK4Vec211getConstPtrEv(
# 70 "../src/Vec2.hpp"
const struct Vec2 *const this){
# 70 "../src/Vec2.hpp"
{
# 70 "../src/Vec2.hpp"
{
# 70 "../src/Vec2.hpp"
 int __T26;
# 70 "../src/Vec2.hpp"
{
# 71 "../src/Vec2.hpp"
if (!(this))
# 71 "../src/Vec2.hpp"
{
# 71 "../src/Vec2.hpp"
__T26 = 0;
# 71 "../src/Vec2.hpp"
}
# 71 "../src/Vec2.hpp"
return this->data;
# 71 "../src/Vec2.hpp"
}
# 72 "../src/Vec2.hpp"
}
# 72 "../src/Vec2.hpp"
}}
# 31 "../src/Vec2.cu"
 void _ZN4Vec2C1ERKS_(
# 31 "../src/Vec2.cu"
struct Vec2 *const this,
# 31 "../src/Vec2.cu"
const struct Vec2 *_vec){
# 31 "../src/Vec2.cu"
{
# 33 "../src/Vec2.cu"
{
# 41 "../src/Vec2.cu"
 const struct float2 *__cuda_local_var_79794_16_non_const__vecPtr;
# 42 "../src/Vec2.cu"
 unsigned __cuda_local_var_79795_15_non_const_i;
# 35 "../src/Vec2.cu"
(this->imWidth) = (_ZNK4Vec25widthEv(_vec));
# 36 "../src/Vec2.cu"
(this->imHeight) = (_ZNK4Vec26heightEv(_vec));
# 37 "../src/Vec2.cu"
(this->imSize) = ((size_t)((this->imWidth) * (this->imHeight)));
# 38 "../src/Vec2.cu"
(this->data) = ((struct float2 *)(malloc(((this->imSize) * 8UL))));
# 41 "../src/Vec2.cu"
__cuda_local_var_79794_16_non_const__vecPtr = ((const struct float2 *)(_ZNK4Vec211getConstPtrEv(_vec)));
# 42 "../src/Vec2.cu"
__cuda_local_var_79795_15_non_const_i = 0U;
# 43 "../src/Vec2.cu"
for (__cuda_local_var_79795_15_non_const_i = 0U; (((unsigned long)__cuda_local_var_79795_15_non_const_i) < (this->imSize)); __cuda_local_var_79795_15_non_const_i++)
# 43 "../src/Vec2.cu"
{
# 44 "../src/Vec2.cu"
(((this->data)[__cuda_local_var_79795_15_non_const_i]).x) = ((__cuda_local_var_79794_16_non_const__vecPtr[__cuda_local_var_79795_15_non_const_i]).x);
# 45 "../src/Vec2.cu"
(((this->data)[__cuda_local_var_79795_15_non_const_i]).y) = ((__cuda_local_var_79794_16_non_const__vecPtr[__cuda_local_var_79795_15_non_const_i]).y);
# 47 "../src/Vec2.cu"
}
# 48 "../src/Vec2.cu"
}
# 48 "../src/Vec2.cu"
}}
# 50 "../src/Vec2.cu"
 void _ZN4Vec2C2ERKS_(
# 50 "../src/Vec2.cu"
struct Vec2 *const this,
# 50 "../src/Vec2.cu"
const struct Vec2 *__T27){
# 50 "../src/Vec2.cu"
{
# 50 "../src/Vec2.cu"
{
# 50 "../src/Vec2.cu"
_ZN4Vec2C1ERKS_(this, __T27);
# 50 "../src/Vec2.cu"
}
# 50 "../src/Vec2.cu"
}}
# 16 "../src/Vec2.cu"
 void _ZN4Vec2C1Eii(
# 16 "../src/Vec2.cu"
struct Vec2 *const this,
# 16 "../src/Vec2.cu"
int width,
# 16 "../src/Vec2.cu"
int height){
# 16 "../src/Vec2.cu"
{
# 16 "../src/Vec2.cu"
{
# 17 "../src/Vec2.cu"
(this->imWidth) = width;
# 18 "../src/Vec2.cu"
(this->imHeight) = height;
# 19 "../src/Vec2.cu"
(this->imSize) = ((size_t)((this->imWidth) * (this->imHeight)));
# 20 "../src/Vec2.cu"
(this->data) = ((struct float2 *)(malloc(((this->imSize) * 8UL))));
# 21 "../src/Vec2.cu"
}
# 21 "../src/Vec2.cu"
}}
# 23 "../src/Vec2.cu"
 void _ZN4Vec2C2Eii(
# 23 "../src/Vec2.cu"
struct Vec2 *const this,
# 23 "../src/Vec2.cu"
int __T28,
# 23 "../src/Vec2.cu"
int __T29){
# 23 "../src/Vec2.cu"
{
# 23 "../src/Vec2.cu"
{
# 23 "../src/Vec2.cu"
_ZN4Vec2C1Eii(this, __T28, __T29);
# 23 "../src/Vec2.cu"
}
# 23 "../src/Vec2.cu"
}}
# 23 "../src/Vec2.cu"
 void _ZN4Vec2C1Ev(
# 23 "../src/Vec2.cu"
struct Vec2 *const this){
# 23 "../src/Vec2.cu"
{
# 23 "../src/Vec2.cu"
{
# 24 "../src/Vec2.cu"
(this->data) = ((struct float2 *)0LL);
# 25 "../src/Vec2.cu"
(this->imHeight) = 0;
# 26 "../src/Vec2.cu"
(this->imWidth) = 0;
# 27 "../src/Vec2.cu"
(this->imSize) = 0UL;
# 29 "../src/Vec2.cu"
}
# 29 "../src/Vec2.cu"
}}
# 31 "../src/Vec2.cu"
 void _ZN4Vec2C2Ev(
# 31 "../src/Vec2.cu"
struct Vec2 *const this){
# 31 "../src/Vec2.cu"
{
# 31 "../src/Vec2.cu"
{
# 31 "../src/Vec2.cu"
_ZN4Vec2C1Ev(this);
# 31 "../src/Vec2.cu"
}
# 31 "../src/Vec2.cu"
}}
# 50 "../src/Vec2.cu"
 void _ZN4Vec2D1Ev(
# 50 "../src/Vec2.cu"
struct Vec2 *const this){
# 50 "../src/Vec2.cu"
{
# 50 "../src/Vec2.cu"
{
# 51 "../src/Vec2.cu"
free(((void *)(this->data)));
# 52 "../src/Vec2.cu"
(this->data) = ((struct float2 *)0LL);
# 53 "../src/Vec2.cu"
}
# 53 "../src/Vec2.cu"
}}
# 55 "../src/Vec2.cu"
 void _ZN4Vec2D2Ev(
# 55 "../src/Vec2.cu"
struct Vec2 *const this){
# 55 "../src/Vec2.cu"
{
# 55 "../src/Vec2.cu"
{
# 55 "../src/Vec2.cu"
_ZN4Vec2D1Ev(this);
# 55 "../src/Vec2.cu"
}
# 55 "../src/Vec2.cu"
}}
