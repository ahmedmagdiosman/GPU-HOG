# 1 "../src/CUDA_HOG.cu"
# 35 "/usr/include/c++/4.8/exception" 3
#pragma GCC visibility push ( default )
# 149 "/usr/include/c++/4.8/exception" 3
#pragma GCC visibility pop
# 42 "/usr/include/c++/4.8/new" 3
#pragma GCC visibility push ( default )
# 120 "/usr/include/c++/4.8/new" 3
#pragma GCC visibility pop
# 30 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 3
#pragma GCC visibility push ( default )
# 151 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 3
#pragma GCC visibility pop
# 36 "/usr/include/c++/4.8/bits/cxxabi_forced.h" 3
#pragma GCC visibility push ( default )
# 58 "/usr/include/c++/4.8/bits/cxxabi_forced.h" 3
#pragma GCC visibility pop
struct __C1; struct __C2; struct __C3; struct __type_info; struct __C5; struct __C6; union __C7; struct __C8;
# 1402 "/usr/local/cuda-6.5/bin/..//include/driver_types.h"
struct CUstream_st;




struct CUevent_st;
# 120 "/usr/include/time.h" 3
struct timespec;
# 86 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E;
# 83 "/usr/include/wchar.h" 3
struct __mbstate_t;
# 180 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 245 "/usr/include/libio.h" 3
struct _IO_FILE;
# 51 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
enum idtype_t {
P_ALL,
P_PID,
P_PGID};
# 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list;
# 92 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE;
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t;
# 190 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,


FP_INFINITE,


FP_ZERO,


FP_SUBNORMAL,


FP_NORMAL};
# 302 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 91 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {


ITIMER_REAL,


ITIMER_VIRTUAL,



ITIMER_PROF};
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
struct stat;
# 25 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt0_ {
_PC_LINK_MAX,

_PC_MAX_CANON,

_PC_MAX_INPUT,

_PC_NAME_MAX,

_PC_PATH_MAX,

_PC_PIPE_BUF,

_PC_CHOWN_RESTRICTED,

_PC_NO_TRUNC,

_PC_VDISABLE,

_PC_SYNC_IO,

_PC_ASYNC_IO,

_PC_PRIO_IO,

_PC_SOCK_MAXBUF,

_PC_FILESIZEBITS,

_PC_REC_INCR_XFER_SIZE,

_PC_REC_MAX_XFER_SIZE,

_PC_REC_MIN_XFER_SIZE,

_PC_REC_XFER_ALIGN,

_PC_ALLOC_SIZE_MIN,

_PC_SYMLINK_MAX,

_PC_2_SYMLINKS};
# 72 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt1_ {
_SC_ARG_MAX,

_SC_CHILD_MAX,

_SC_CLK_TCK,

_SC_NGROUPS_MAX,

_SC_OPEN_MAX,

_SC_STREAM_MAX,

_SC_TZNAME_MAX,

_SC_JOB_CONTROL,

_SC_SAVED_IDS,

_SC_REALTIME_SIGNALS,

_SC_PRIORITY_SCHEDULING,

_SC_TIMERS,

_SC_ASYNCHRONOUS_IO,

_SC_PRIORITIZED_IO,

_SC_SYNCHRONIZED_IO,

_SC_FSYNC,

_SC_MAPPED_FILES,

_SC_MEMLOCK,

_SC_MEMLOCK_RANGE,

_SC_MEMORY_PROTECTION,

_SC_MESSAGE_PASSING,

_SC_SEMAPHORES,

_SC_SHARED_MEMORY_OBJECTS,

_SC_AIO_LISTIO_MAX,

_SC_AIO_MAX,

_SC_AIO_PRIO_DELTA_MAX,

_SC_DELAYTIMER_MAX,

_SC_MQ_OPEN_MAX,

_SC_MQ_PRIO_MAX,

_SC_VERSION,

_SC_PAGESIZE,


_SC_RTSIG_MAX,

_SC_SEM_NSEMS_MAX,

_SC_SEM_VALUE_MAX,

_SC_SIGQUEUE_MAX,

_SC_TIMER_MAX,




_SC_BC_BASE_MAX,

_SC_BC_DIM_MAX,

_SC_BC_SCALE_MAX,

_SC_BC_STRING_MAX,

_SC_COLL_WEIGHTS_MAX,

_SC_EQUIV_CLASS_MAX,

_SC_EXPR_NEST_MAX,

_SC_LINE_MAX,

_SC_RE_DUP_MAX,

_SC_CHARCLASS_NAME_MAX,


_SC_2_VERSION,

_SC_2_C_BIND,

_SC_2_C_DEV,

_SC_2_FORT_DEV,

_SC_2_FORT_RUN,

_SC_2_SW_DEV,

_SC_2_LOCALEDEF,


_SC_PII,

_SC_PII_XTI,

_SC_PII_SOCKET,

_SC_PII_INTERNET,

_SC_PII_OSI,

_SC_POLL,

_SC_SELECT,

_SC_UIO_MAXIOV,

_SC_IOV_MAX = 60,

_SC_PII_INTERNET_STREAM,

_SC_PII_INTERNET_DGRAM,

_SC_PII_OSI_COTS,

_SC_PII_OSI_CLTS,

_SC_PII_OSI_M,

_SC_T_IOV_MAX,



_SC_THREADS,

_SC_THREAD_SAFE_FUNCTIONS,

_SC_GETGR_R_SIZE_MAX,

_SC_GETPW_R_SIZE_MAX,

_SC_LOGIN_NAME_MAX,

_SC_TTY_NAME_MAX,

_SC_THREAD_DESTRUCTOR_ITERATIONS,

_SC_THREAD_KEYS_MAX,

_SC_THREAD_STACK_MIN,

_SC_THREAD_THREADS_MAX,

_SC_THREAD_ATTR_STACKADDR,

_SC_THREAD_ATTR_STACKSIZE,

_SC_THREAD_PRIORITY_SCHEDULING,

_SC_THREAD_PRIO_INHERIT,

_SC_THREAD_PRIO_PROTECT,

_SC_THREAD_PROCESS_SHARED,


_SC_NPROCESSORS_CONF,

_SC_NPROCESSORS_ONLN,

_SC_PHYS_PAGES,

_SC_AVPHYS_PAGES,

_SC_ATEXIT_MAX,

_SC_PASS_MAX,


_SC_XOPEN_VERSION,

_SC_XOPEN_XCU_VERSION,

_SC_XOPEN_UNIX,

_SC_XOPEN_CRYPT,

_SC_XOPEN_ENH_I18N,

_SC_XOPEN_SHM,


_SC_2_CHAR_TERM,

_SC_2_C_VERSION,

_SC_2_UPE,


_SC_XOPEN_XPG2,

_SC_XOPEN_XPG3,

_SC_XOPEN_XPG4,


_SC_CHAR_BIT,

_SC_CHAR_MAX,

_SC_CHAR_MIN,

_SC_INT_MAX,

_SC_INT_MIN,

_SC_LONG_BIT,

_SC_WORD_BIT,

_SC_MB_LEN_MAX,

_SC_NZERO,

_SC_SSIZE_MAX,

_SC_SCHAR_MAX,

_SC_SCHAR_MIN,

_SC_SHRT_MAX,

_SC_SHRT_MIN,

_SC_UCHAR_MAX,

_SC_UINT_MAX,

_SC_ULONG_MAX,

_SC_USHRT_MAX,


_SC_NL_ARGMAX,

_SC_NL_LANGMAX,

_SC_NL_MSGMAX,

_SC_NL_NMAX,

_SC_NL_SETMAX,

_SC_NL_TEXTMAX,


_SC_XBS5_ILP32_OFF32,

_SC_XBS5_ILP32_OFFBIG,

_SC_XBS5_LP64_OFF64,

_SC_XBS5_LPBIG_OFFBIG,


_SC_XOPEN_LEGACY,

_SC_XOPEN_REALTIME,

_SC_XOPEN_REALTIME_THREADS,


_SC_ADVISORY_INFO,

_SC_BARRIERS,

_SC_BASE,

_SC_C_LANG_SUPPORT,

_SC_C_LANG_SUPPORT_R,

_SC_CLOCK_SELECTION,

_SC_CPUTIME,

_SC_THREAD_CPUTIME,

_SC_DEVICE_IO,

_SC_DEVICE_SPECIFIC,

_SC_DEVICE_SPECIFIC_R,

_SC_FD_MGMT,

_SC_FIFO,

_SC_PIPE,

_SC_FILE_ATTRIBUTES,

_SC_FILE_LOCKING,

_SC_FILE_SYSTEM,

_SC_MONOTONIC_CLOCK,

_SC_MULTI_PROCESS,

_SC_SINGLE_PROCESS,

_SC_NETWORKING,

_SC_READER_WRITER_LOCKS,

_SC_SPIN_LOCKS,

_SC_REGEXP,

_SC_REGEX_VERSION,

_SC_SHELL,

_SC_SIGNALS,

_SC_SPAWN,

_SC_SPORADIC_SERVER,

_SC_THREAD_SPORADIC_SERVER,

_SC_SYSTEM_DATABASE,

_SC_SYSTEM_DATABASE_R,

_SC_TIMEOUTS,

_SC_TYPED_MEMORY_OBJECTS,

_SC_USER_GROUPS,

_SC_USER_GROUPS_R,

_SC_2_PBS,

_SC_2_PBS_ACCOUNTING,

_SC_2_PBS_LOCATE,

_SC_2_PBS_MESSAGE,

_SC_2_PBS_TRACK,

_SC_SYMLOOP_MAX,

_SC_STREAMS,

_SC_2_PBS_CHECKPOINT,


_SC_V6_ILP32_OFF32,

_SC_V6_ILP32_OFFBIG,

_SC_V6_LP64_OFF64,

_SC_V6_LPBIG_OFFBIG,


_SC_HOST_NAME_MAX,

_SC_TRACE,

_SC_TRACE_EVENT_FILTER,

_SC_TRACE_INHERIT,

_SC_TRACE_LOG,


_SC_LEVEL1_ICACHE_SIZE,

_SC_LEVEL1_ICACHE_ASSOC,

_SC_LEVEL1_ICACHE_LINESIZE,

_SC_LEVEL1_DCACHE_SIZE,

_SC_LEVEL1_DCACHE_ASSOC,

_SC_LEVEL1_DCACHE_LINESIZE,

_SC_LEVEL2_CACHE_SIZE,

_SC_LEVEL2_CACHE_ASSOC,

_SC_LEVEL2_CACHE_LINESIZE,

_SC_LEVEL3_CACHE_SIZE,

_SC_LEVEL3_CACHE_ASSOC,

_SC_LEVEL3_CACHE_LINESIZE,

_SC_LEVEL4_CACHE_SIZE,

_SC_LEVEL4_CACHE_ASSOC,

_SC_LEVEL4_CACHE_LINESIZE,



_SC_IPV6 = 235,

_SC_RAW_SOCKETS,


_SC_V7_ILP32_OFF32,

_SC_V7_ILP32_OFFBIG,

_SC_V7_LP64_OFF64,

_SC_V7_LPBIG_OFFBIG,


_SC_SS_REPL_MAX,


_SC_TRACE_EVENT_NAME_MAX,

_SC_TRACE_NAME_MAX,

_SC_TRACE_SYS_MAX,

_SC_TRACE_USER_EVENT_MAX,


_SC_XOPEN_STREAMS,


_SC_THREAD_ROBUST_PRIO_INHERIT,

_SC_THREAD_ROBUST_PRIO_PROTECT};
# 534 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt2_ {
_CS_PATH,


_CS_V6_WIDTH_RESTRICTED_ENVS,



_CS_GNU_LIBC_VERSION,

_CS_GNU_LIBPTHREAD_VERSION,


_CS_V5_WIDTH_RESTRICTED_ENVS,



_CS_V7_WIDTH_RESTRICTED_ENVS,



_CS_LFS_CFLAGS = 1000,

_CS_LFS_LDFLAGS,

_CS_LFS_LIBS,

_CS_LFS_LINTFLAGS,

_CS_LFS64_CFLAGS,

_CS_LFS64_LDFLAGS,

_CS_LFS64_LIBS,

_CS_LFS64_LINTFLAGS,


_CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

_CS_XBS5_ILP32_OFF32_LDFLAGS,

_CS_XBS5_ILP32_OFF32_LIBS,

_CS_XBS5_ILP32_OFF32_LINTFLAGS,

_CS_XBS5_ILP32_OFFBIG_CFLAGS,

_CS_XBS5_ILP32_OFFBIG_LDFLAGS,

_CS_XBS5_ILP32_OFFBIG_LIBS,

_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

_CS_XBS5_LP64_OFF64_CFLAGS,

_CS_XBS5_LP64_OFF64_LDFLAGS,

_CS_XBS5_LP64_OFF64_LIBS,

_CS_XBS5_LP64_OFF64_LINTFLAGS,

_CS_XBS5_LPBIG_OFFBIG_CFLAGS,

_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

_CS_XBS5_LPBIG_OFFBIG_LIBS,

_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


_CS_POSIX_V6_ILP32_OFF32_CFLAGS,

_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

_CS_POSIX_V6_ILP32_OFF32_LIBS,

_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_LIBS,

_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

_CS_POSIX_V6_LP64_OFF64_CFLAGS,

_CS_POSIX_V6_LP64_OFF64_LDFLAGS,

_CS_POSIX_V6_LP64_OFF64_LIBS,

_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


_CS_POSIX_V7_ILP32_OFF32_CFLAGS,

_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

_CS_POSIX_V7_ILP32_OFF32_LIBS,

_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_LIBS,

_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

_CS_POSIX_V7_LP64_OFF64_CFLAGS,

_CS_POSIX_V7_LP64_OFF64_LDFLAGS,

_CS_POSIX_V7_LP64_OFF64_LIBS,

_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


_CS_V6_ENV,

_CS_V7_ENV};
# 1138 "/usr/include/X11/Xlib.h" 3
enum XOrientation {
XOMOrientation_LTR_TTB,
XOMOrientation_RTL_TTB,
XOMOrientation_TTB_LTR,
XOMOrientation_TTB_RTL,
XOMOrientation_Context};
# 1327 "/usr/include/X11/Xlib.h" 3
enum XIMCaretDirection {
XIMForwardChar, XIMBackwardChar,
XIMForwardWord, XIMBackwardWord,
XIMCaretUp, XIMCaretDown,
XIMNextLine, XIMPreviousLine,
XIMLineStart, XIMLineEnd,
XIMAbsolutePosition,
XIMDontChange};
# 1352 "/usr/include/X11/Xlib.h" 3
enum XIMCaretStyle {
XIMIsInvisible,
XIMIsPrimary,
XIMIsSecondary};
# 1364 "/usr/include/X11/Xlib.h" 3
enum XIMStatusDataType {
XIMTextType,
XIMBitmapType};
# 174 "/usr/include/X11/Xutil.h" 3
enum XICCEncodingStyle {
XStringStyle,
XCompoundTextStyle,
XTextStyle,
XStdICCTextStyle,

XUTF8StringStyle};
# 33 "/usr/include/pthread.h" 3
enum _ZUt4_ {
PTHREAD_CREATE_JOINABLE,

PTHREAD_CREATE_DETACHED};
# 43 "/usr/include/pthread.h" 3
enum _ZUt5_ {
PTHREAD_MUTEX_TIMED_NP,
PTHREAD_MUTEX_RECURSIVE_NP,
PTHREAD_MUTEX_ERRORCHECK_NP,
PTHREAD_MUTEX_ADAPTIVE_NP,


PTHREAD_MUTEX_NORMAL = 0,
PTHREAD_MUTEX_RECURSIVE,
PTHREAD_MUTEX_ERRORCHECK,
PTHREAD_MUTEX_DEFAULT = 0,



PTHREAD_MUTEX_FAST_NP = 0};
# 65 "/usr/include/pthread.h" 3
enum _ZUt6_ {
PTHREAD_MUTEX_STALLED,
PTHREAD_MUTEX_STALLED_NP = 0,
PTHREAD_MUTEX_ROBUST,
PTHREAD_MUTEX_ROBUST_NP = 1};
# 77 "/usr/include/pthread.h" 3
enum _ZUt7_ {
PTHREAD_PRIO_NONE,
PTHREAD_PRIO_INHERIT,
PTHREAD_PRIO_PROTECT};
# 126 "/usr/include/pthread.h" 3
enum _ZUt8_ {
PTHREAD_RWLOCK_PREFER_READER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
PTHREAD_RWLOCK_DEFAULT_NP = 0};
# 167 "/usr/include/pthread.h" 3
enum _ZUt9_ {
PTHREAD_INHERIT_SCHED,

PTHREAD_EXPLICIT_SCHED};
# 177 "/usr/include/pthread.h" 3
enum _ZUt10_ {
PTHREAD_SCOPE_SYSTEM,

PTHREAD_SCOPE_PROCESS};
# 187 "/usr/include/pthread.h" 3
enum _ZUt11_ {
PTHREAD_PROCESS_PRIVATE,

PTHREAD_PROCESS_SHARED};
# 211 "/usr/include/pthread.h" 3
enum _ZUt12_ {
PTHREAD_CANCEL_ENABLE,

PTHREAD_CANCEL_DISABLE};



enum _ZUt13_ {
PTHREAD_CANCEL_DEFERRED,

PTHREAD_CANCEL_ASYNCHRONOUS};
# 29 "../src/Image3.hpp"
struct Image3;
# 27 "../src/Vec2.hpp"
struct Vec2;
# 47 "/usr/include/ctype.h" 3
enum _ZUt14_ {
_ISupper = 256,
_ISlower = 512,
_ISalpha = 1024,
_ISdigit = 2048,
_ISxdigit = 4096,
_ISspace = 8192,
_ISprint = 16384,
_ISgraph = 32768,
_ISblank = 1,
_IScntrl,
_ISpunct = 4,
_ISalnum = 8};
# 72 "/usr/include/wctype.h" 3
enum _ZUt15_ {
__ISwupper,
__ISwlower,
__ISwalpha,
__ISwdigit,
__ISwxdigit,
__ISwspace,
__ISwprint,
__ISwgraph,
__ISwblank,
__ISwcntrl,
__ISwpunct,
__ISwalnum,

_ISwupper = 16777216,
_ISwlower = 33554432,
_ISwalpha = 67108864,
_ISwdigit = 134217728,
_ISwxdigit = 268435456,
_ISwspace = 536870912,
_ISwprint = 1073741824,
_ISwgraph = (-2147483647-1),
_ISwblank = 65536,
_ISwcntrl = 131072,
_ISwpunct = 262144,
_ISwalnum = 524288};
# 52 "../src/CUDA_HOG.hpp"
struct HOGDescriptor;



struct CUDA_HOG;
# 60 "/usr/include/c++/4.8/exception" 3
struct _ZSt9exception;
# 54 "/usr/include/c++/4.8/new" 3
struct _ZSt9bad_alloc;
# 83 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
struct _ZSt12__false_type;
# 128 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 148 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 155 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 162 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 169 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 177 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 201 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 208 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 215 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 222 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 229 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 236 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 243 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 250 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 268 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 275 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 282 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 358 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 366 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 381 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 388 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 395 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 138 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIeEUt_E { _ZNSt12__is_integerIeE7__valueE}; enum _ZNSt12__is_integerIdEUt_E { _ZNSt12__is_integerIdE7__valueE}; enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 89 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt18input_iterator_tag;
# 95 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt20forward_iterator_tag;



struct _ZSt26bidirectional_iterator_tag;



struct _ZSt26random_access_iterator_tag;
# 92 "/usr/include/c++/4.8/bits/allocator.h" 3
struct _ZSaIcE;
# 2201 "/usr/include/c++/4.8/bits/stl_algo.h" 3
enum _ZStUt_ { _ZSt12_S_threshold = 16};
# 3375 "/usr/include/c++/4.8/bits/stl_algo.h" 3
enum _ZStUt0_ { _ZSt13_S_chunk_size = 7};
# 233 "/usr/include/c++/4.8/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE;
# 148 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs9_Rep_baseE;
# 155 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs4_RepE;
# 272 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs12_Alloc_hiderE;
# 57 "/usr/include/c++/4.8/bits/stringfwd.h" 3
struct _ZSs;
# 475 "/usr/include/c++/4.8/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE;
# 304 "/usr/include/c++/4.8/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E { _ZNSt6locale18_S_categories_sizeE = 12};
# 62 "/usr/include/c++/4.8/bits/locale_classes.h" 3
struct _ZSt6locale;
# 51 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZSt13_Ios_Fmtflags {

_ZSt12_S_boolalpha = 1,
_ZSt6_S_dec,
_ZSt8_S_fixed = 4,
_ZSt6_S_hex = 8,
_ZSt11_S_internal = 16,
_ZSt7_S_left = 32,
_ZSt6_S_oct = 64,
_ZSt8_S_right = 128,
_ZSt13_S_scientific = 256,
_ZSt11_S_showbase = 512,
_ZSt12_S_showpoint = 1024,
_ZSt10_S_showpos = 2048,
_ZSt9_S_skipws = 4096,
_ZSt10_S_unitbuf = 8192,
_ZSt12_S_uppercase = 16384,
_ZSt14_S_adjustfield = 176,
_ZSt12_S_basefield = 74,
_ZSt13_S_floatfield = 260,
_ZSt19_S_ios_fmtflags_end = 65536};
# 103 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZSt13_Ios_Openmode {

_ZSt6_S_app = 1,
_ZSt6_S_ate,
_ZSt6_S_bin = 4,
_ZSt5_S_in = 8,
_ZSt6_S_out = 16,
_ZSt8_S_trunc = 32,
_ZSt19_S_ios_openmode_end = 65536};
# 143 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZSt12_Ios_Iostate {

_ZSt10_S_goodbit,
_ZSt9_S_badbit,
_ZSt9_S_eofbit,
_ZSt10_S_failbit = 4,
_ZSt18_S_ios_iostate_end = 65536};
# 181 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZSt12_Ios_Seekdir {

_ZSt6_S_beg,
_ZSt6_S_cur,
_ZSt6_S_end,
_ZSt18_S_ios_seekdir_end = 65536};
# 419 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZNSt8ios_base5eventE {

_ZNSt8ios_base11erase_eventE,
_ZNSt8ios_base11imbue_eventE,
_ZNSt8ios_base13copyfmt_eventE};
# 460 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE;
# 499 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE;
# 511 "/usr/include/c++/4.8/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E { _ZNSt8ios_base18_S_local_word_sizeE = 8};
# 533 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
# 199 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZSt8ios_base;
# 399 "/usr/include/c++/4.8/bits/stl_algobase.h" 3
struct _ZSt19istreambuf_iteratorIcSt11char_traitsIcEE;


struct _ZSt19ostreambuf_iteratorIcSt11char_traitsIcEE;
# 80 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE;
# 674 "/usr/include/c++/4.8/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE;
# 1524 "/usr/include/c++/4.8/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt_E {
_ZNSt10__num_base9_S_ominusE,
_ZNSt10__num_base8_S_oplusE,
_ZNSt10__num_base5_S_oxE,
_ZNSt10__num_base5_S_oXE,
_ZNSt10__num_base10_S_odigitsE,
_ZNSt10__num_base14_S_odigits_endE = 20,
_ZNSt10__num_base11_S_oudigitsE = 20,
_ZNSt10__num_base15_S_oudigits_endE = 36,
_ZNSt10__num_base5_S_oeE = 18,
_ZNSt10__num_base5_S_oEE = 34,
_ZNSt10__num_base7_S_oendE = 36};
# 1550 "/usr/include/c++/4.8/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt0_E {
_ZNSt10__num_base9_S_iminusE,
_ZNSt10__num_base8_S_iplusE,
_ZNSt10__num_base5_S_ixE,
_ZNSt10__num_base5_S_iXE,
_ZNSt10__num_base8_S_izeroE,
_ZNSt10__num_base5_S_ieE = 18,
_ZNSt10__num_base5_S_iEE = 24,
_ZNSt10__num_base7_S_iendE = 26};
# 1915 "/usr/include/c++/4.8/bits/locale_facets.h" 3
struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE;
# 2254 "/usr/include/c++/4.8/bits/locale_facets.h" 3
struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE;
# 77 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE;
# 86 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSo; struct __SO__So;
# 83 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSi; struct __SO__Si;
# 89 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSd; struct __SO__Sd;
# 49 "/usr/include/c++/4.8/bits/codecvt.h" 3
enum _ZNSt12codecvt_base6resultE {

_ZNSt12codecvt_base2okE,
_ZNSt12codecvt_base7partialE,
_ZNSt12codecvt_base5errorE,
_ZNSt12codecvt_base6noconvE};
# 340 "/usr/include/c++/4.8/bits/codecvt.h" 3
struct _ZSt7codecvtIcc11__mbstate_tE;
# 53 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE;
# 108 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE;
# 114 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE;
# 93 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE;
# 105 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE;
# 138 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIPcEUt_E { _ZNSt12__is_integerIPcE7__valueE};
# 136 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
struct _ZSt12__is_integerIPcE;
# 163 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt15iterator_traitsIPcE;
# 58 "/usr/include/c++/4.8/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorIcEE;
# 2582 "../src/CImg.h"
struct _ZN12cimg_library4cimg4lastImhEE;
# 9338 "../src/CImg.h"
struct _ZN12cimg_library4CImgImEE; struct _ZN12cimg_library4CImgIhEE;
# 44408 "../src/CImg.h"
struct _ZN12cimg_library8CImgListIhEE;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
struct __C3 { struct __C2 *regions; void **obj_table; struct __C1 *array_table; unsigned short saved_region_number;char __nv_no_debug_dummy_end_padding_0[6];}; struct __C5 { const struct __type_info *tinfo; unsigned char flags; unsigned char *ptr_flags;}; struct __C6 { long setjmp_buffer[25]; struct __C5 *catch_entries; void *rtinfo; unsigned short region_number;char __nv_no_debug_dummy_end_padding_0[6];}; union __C7 { struct __C6 try_block; struct __C3 function; struct __C5 *throw_spec;}; struct __C8 { struct __C8 *next; unsigned char kind; union __C7 variant;};
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned long __dev_t;
typedef unsigned __uid_t;
typedef unsigned __gid_t;
typedef unsigned long __ino_t;

typedef unsigned __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
# 139 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __time_t;
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __blksize_t;




typedef long __blkcnt_t;
# 175 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __syscall_slong_t;
# 120 "/usr/include/time.h" 3
struct timespec {

__time_t tv_sec;
__syscall_slong_t tv_nsec;};
# 48 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 86 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E {

unsigned __wch;



char __wchb[4];};
# 83 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;
# 93 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E __value;};
typedef struct __mbstate_t __mbstate_t;
# 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

struct __pthread_internal_list *__prev;
struct __pthread_internal_list *__next;};
typedef struct __pthread_internal_list __pthread_list_t;
# 92 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

short __spins;
short __elision;
__pthread_list_t __list;};
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t {
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE __data;
char __size[40];
long __align;};
typedef union pthread_mutex_t pthread_mutex_t;
# 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned pthread_key_t;
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
struct stat {

__dev_t st_dev;




__ino_t st_ino;
# 61 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
__nlink_t st_nlink;
__mode_t st_mode;

__uid_t st_uid;
__gid_t st_gid;

int __pad0;

__dev_t st_rdev;




__off_t st_size;



__blksize_t st_blksize;

__blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
struct timespec st_atim;
struct timespec st_mtim;
struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3
__syscall_slong_t __glibc_reserved[3];};
# 29 "../src/Image3.hpp"
struct Image3 {
# 50 "../src/Image3.hpp"
struct uchar3 *data;
int imWidth;
int imHeight;
size_t imSize;};
# 27 "../src/Vec2.hpp"
struct Vec2 {
# 46 "../src/Vec2.hpp"
struct float2 *data;
int imWidth;
int imHeight;
size_t imSize;};
# 106 "/usr/include/wchar.h" 3
typedef __mbstate_t mbstate_t;
# 50 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3
typedef pthread_mutex_t __gthread_mutex_t;
# 32 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 52 "../src/CUDA_HOG.hpp"
struct HOGDescriptor {
float bin[36];};
typedef struct HOGDescriptor HOGDescriptor;

struct CUDA_HOG {
# 66 "../src/CUDA_HOG.hpp"
struct Image3 img;
struct Vec2 imgGradient;
HOGDescriptor *hogDsc;
unsigned numWindowsX;
unsigned numWindowsY;
unsigned ftrSize;char __nv_no_debug_dummy_end_padding_0[4];};
# 186 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 3
typedef unsigned long _ZSt6size_t;
typedef long _ZSt9ptrdiff_t;
# 60 "/usr/include/c++/4.8/exception" 3
struct _ZSt9exception { const long *__vptr;};
# 54 "/usr/include/c++/4.8/new" 3
struct _ZSt9bad_alloc { struct _ZSt9exception __b_St9exception;};
# 83 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
struct _ZSt12__false_type {char __nv_no_debug_dummy_end_padding_0;};
# 89 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt18input_iterator_tag {char __nv_no_debug_dummy_end_padding_0;};
# 95 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt20forward_iterator_tag {char __nv_no_debug_dummy_end_padding_0;};



struct _ZSt26bidirectional_iterator_tag {char __nv_no_debug_dummy_end_padding_0;};



struct _ZSt26random_access_iterator_tag {char __nv_no_debug_dummy_end_padding_0;};
# 95 "/usr/include/c++/4.8/bits/allocator.h" 3
typedef _ZSt6size_t _ZNSaIcE9size_typeE;
# 92 "/usr/include/c++/4.8/bits/allocator.h" 3
struct _ZSaIcE {char __nv_no_debug_dummy_end_padding_0;};
# 62 "/usr/include/c++/4.8/bits/stringfwd.h" 3
typedef struct _ZSs _ZSt6string;
# 98 "/usr/include/c++/4.8/bits/postypes.h" 3
typedef _ZSt9ptrdiff_t _ZSt10streamsize;
# 151 "/usr/include/c++/4.8/iosfwd" 3
typedef struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE _ZSt12stringstream;
# 160 "/usr/include/c++/4.8/iosfwd" 3
typedef struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE _ZSt8ofstream;
# 235 "/usr/include/c++/4.8/bits/char_traits.h" 3
typedef char _ZNSt11char_traitsIcE9char_typeE;



typedef mbstate_t _ZNSt11char_traitsIcE10state_typeE;
# 233 "/usr/include/c++/4.8/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE {char __nv_no_debug_dummy_end_padding_0;};
# 120 "/usr/include/c++/4.8/bits/basic_string.h" 3
typedef struct _ZSaIcE _ZNSs14allocator_typeE;
typedef _ZNSaIcE9size_typeE _ZNSs9size_typeE;
# 148 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs9_Rep_baseE {

_ZNSs9size_typeE _M_length;
_ZNSs9size_typeE _M_capacity;
_Atomic_word _M_refcount;char __nv_no_debug_dummy_end_padding_0[4];};


struct _ZNSs4_RepE { struct _ZNSs9_Rep_baseE __b_NSs9_Rep_baseE;};
# 272 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs12_Alloc_hiderE {




char *_M_p;};
# 57 "/usr/include/c++/4.8/bits/stringfwd.h" 3
struct _ZSs {
# 289 "/usr/include/c++/4.8/bits/basic_string.h" 3
struct _ZNSs12_Alloc_hiderE _M_dataplus;};
# 62 "/usr/include/c++/4.8/bits/locale_classes.h" 3
struct _ZSt6locale {
# 280 "/usr/include/c++/4.8/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE *_M_impl;};
# 255 "/usr/include/c++/4.8/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Fmtflags _ZNSt8ios_base8fmtflagsE;
# 330 "/usr/include/c++/4.8/bits/ios_base.h" 3
typedef enum _ZSt12_Ios_Iostate _ZNSt8ios_base7iostateE;
# 361 "/usr/include/c++/4.8/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Openmode _ZNSt8ios_base8openmodeE;
# 499 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE {

void *_M_pword;
long _M_iword;};
# 533 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy_end_padding_0;};
# 199 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZSt8ios_base { const long *__vptr;
# 452 "/usr/include/c++/4.8/bits/ios_base.h" 3
_ZSt10streamsize _M_precision;
_ZSt10streamsize _M_width;
_ZNSt8ios_base8fmtflagsE _M_flags;
_ZNSt8ios_base7iostateE _M_exception;
_ZNSt8ios_base7iostateE _M_streambuf_state;
# 490 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE *_M_callbacks;
# 507 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_word_zero;




struct _ZNSt8ios_base6_WordsE _M_local_word[8];


int _M_word_size;
struct _ZNSt8ios_base6_WordsE *_M_word;
# 522 "/usr/include/c++/4.8/bits/ios_base.h" 3
struct _ZSt6locale _M_ios_locale;};
# 129 "/usr/include/c++/4.8/streambuf" 3
typedef char _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE;
typedef struct _ZSt11char_traitsIcE _ZNSt15basic_streambufIcSt11char_traitsIcEE11traits_typeE;
# 80 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE { const long *__vptr;
# 184 "/usr/include/c++/4.8/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_end;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_end;


struct _ZSt6locale _M_buf_locale;};
# 75 "/usr/include/c++/4.8/bits/basic_ios.h" 3
typedef char _ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE;
# 86 "/usr/include/c++/4.8/bits/basic_ios.h" 3
typedef struct _ZSt5ctypeIcE _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE;

typedef struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE;

typedef struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE;
# 77 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE { struct _ZSt8ios_base __b_St8ios_base;
# 95 "/usr/include/c++/4.8/bits/basic_ios.h" 3
struct _ZSo *_M_tie;
_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE _M_fill;
char _M_fill_init;
struct _ZSt15basic_streambufIcSt11char_traitsIcEE *_M_streambuf;


const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *_M_ctype;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *_M_num_put;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *_M_num_get;};
# 71 "/usr/include/c++/4.8/ostream" 3
typedef struct _ZSo _ZNSo14__ostream_typeE;
# 86 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSo { const long *__vptr; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;}; struct __SO__So { const long *__vptr;};
# 83 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSi { const long *__vptr;
# 82 "/usr/include/c++/4.8/istream" 3
_ZSt10streamsize _M_gcount; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 83 "/usr/include/c++/4.8/iosfwd" 3
struct __SO__Si { const long *__vptr;
# 82 "/usr/include/c++/4.8/istream" 3
_ZSt10streamsize _M_gcount;};
# 89 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSd { struct __SO__Si __b_Si; struct __SO__So __b_So; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;}; struct __SO__Sd { struct __SO__Si __b_Si; struct __SO__So __b_So;};
# 42 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++io.h" 3
typedef __gthread_mutex_t _ZSt8__c_lock;


typedef FILE _ZSt8__c_file;
# 53 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE {


_ZSt8__c_file *_M_cfile;


char _M_cfile_created;char __nv_no_debug_dummy_end_padding_0[7];};
# 76 "/usr/include/c++/4.8/fstream" 3
typedef char _ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE;
# 83 "/usr/include/c++/4.8/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE;
typedef struct _ZSt12__basic_fileIcE _ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE;
typedef _ZNSt11char_traitsIcE10state_typeE _ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE;
typedef struct _ZSt7codecvtIcc11__mbstate_tE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE;
# 108 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE { struct _ZSt15basic_streambufIcSt11char_traitsIcEE __b_St15basic_streambufIcSt11char_traitsIcEE;
# 93 "/usr/include/c++/4.8/fstream" 3
_ZSt8__c_lock _M_lock;


_ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE _M_file;


_ZNSt8ios_base8openmodeE _M_mode;


_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_beg;




_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_cur;



_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_last;


_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_buf;
# 121 "/usr/include/c++/4.8/fstream" 3
_ZSt6size_t _M_buf_size;


char _M_buf_allocated;
# 133 "/usr/include/c++/4.8/fstream" 3
char _M_reading;
char _M_writing;
# 142 "/usr/include/c++/4.8/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE _M_pback;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_cur_save;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_end_save;
char _M_pback_init;



const _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE *_M_codecvt;
# 156 "/usr/include/c++/4.8/fstream" 3
char *_M_ext_buf;




_ZSt10streamsize _M_ext_buf_size;
# 168 "/usr/include/c++/4.8/fstream" 3
const char *_M_ext_next;
char *_M_ext_end;};
# 610 "/usr/include/c++/4.8/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt14basic_ofstreamIcSt11char_traitsIcEE14__filebuf_typeE;
# 114 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE { struct __SO__So __b_So;
# 614 "/usr/include/c++/4.8/fstream" 3
_ZNSt14basic_ofstreamIcSt11char_traitsIcEE14__filebuf_typeE _M_filebuf; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 78 "/usr/include/c++/4.8/sstream" 3
typedef struct _ZSs _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE;
# 93 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE { struct _ZSt15basic_streambufIcSt11char_traitsIcEE __b_St15basic_streambufIcSt11char_traitsIcEE;
# 83 "/usr/include/c++/4.8/sstream" 3
_ZNSt8ios_base8openmodeE _M_mode;


_ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE _M_string;};
# 516 "/usr/include/c++/4.8/sstream" 3
typedef struct _ZSs _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE13__string_typeE;
typedef struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE16__stringbuf_typeE;
# 105 "/usr/include/c++/4.8/iosfwd" 3
struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE { struct __SO__Sd __b_Sd;
# 521 "/usr/include/c++/4.8/sstream" 3
_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE16__stringbuf_typeE _M_stringbuf; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 139 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
typedef struct _ZSt12__false_type _ZNSt12__is_integerIPcE6__typeE;
# 136 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3
struct _ZSt12__is_integerIPcE {char __nv_no_debug_dummy_end_padding_0;};
# 177 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
typedef struct _ZSt26random_access_iterator_tag _ZNSt15iterator_traitsIPcE17iterator_categoryE;

typedef _ZSt9ptrdiff_t _ZNSt15iterator_traitsIPcE15difference_typeE;
# 163 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
struct _ZSt15iterator_traitsIPcE {char __nv_no_debug_dummy_end_padding_0;};
# 58 "/usr/include/c++/4.8/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorIcEE {char __nv_no_debug_dummy_end_padding_0;};
# 2582 "../src/CImg.h"
typedef unsigned char _ZN12cimg_library4cimg4lastImhE4typeE; struct _ZN12cimg_library4cimg4lastImhEE {char __nv_no_debug_dummy_end_padding_0;};
# 9398 "../src/CImg.h"
typedef _ZN12cimg_library4cimg4lastImhE4typeE _ZN12cimg_library4CImgImE6ucharTE;
# 9338 "../src/CImg.h"
struct _ZN12cimg_library4CImgImEE {

unsigned _width; unsigned _height; unsigned _depth; unsigned _spectrum;
char _is_shared;
unsigned long *_data;};
# 9338 "../src/CImg.h"
struct _ZN12cimg_library4CImgIhEE {

unsigned _width; unsigned _height; unsigned _depth; unsigned _spectrum;
char _is_shared;
_ZN12cimg_library4CImgImE6ucharTE *_data;};
# 44408 "../src/CImg.h"
struct _ZN12cimg_library8CImgListIhEE {
unsigned _width; unsigned _allocated_width;
struct _ZN12cimg_library4CImgIhEE *_data;};
# 1724 "/usr/include/c++/4.8/bits/basic_string.h" 3
typedef _ZNSt15iterator_traitsIPcE17iterator_categoryE _ZZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_typeE4_Tag_64242;
# 1745 "/usr/include/c++/4.8/bits/basic_string.h" 3
typedef _ZNSt12__is_integerIPcE6__typeE _ZZNSs12_S_constructIPcEES0_T_S1_RKSaIcEE9_Integral_64231;
# 697 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
typedef _ZNSs9size_typeE _ZZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_E11__size_type_64462;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 826 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaThreadSynchronize(void);
# 2134 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaEventCreate(struct CUevent_st **);
# 2263 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaEventSynchronize(struct CUevent_st *);
# 2329 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaEventElapsedTime(float *, struct CUevent_st *, struct CUevent_st *);
# 2376 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaConfigureCall(struct dim3, struct dim3, size_t, struct CUstream_st *);
# 3797 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 4592 "/usr/local/cuda-6.5/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaMemset(void *, int, size_t);
# 543 "/usr/include/stdlib.h" 3
extern __attribute__((__nothrow__)) __attribute__((__noreturn__)) void exit(int);
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3
extern __attribute__((__nothrow__)) int stat(const char *__restrict__, struct stat *__restrict__);
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3
extern __attribute__((__nothrow__)) int mkdir(const char *, __mode_t);
# 1122 "/usr/include/pthread.h" 3
extern __attribute__((__nothrow__)) int pthread_key_create(pthread_key_t *, void (*)(void *));
extern int setjmp();
extern void __exception_caught();
extern int __cxa_atexit();
# 236 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3
static __attribute__((__nothrow__)) __attribute__((__weakref__("__pthread_key_create"))) __attribute__((visibility("default"))) int _Z28__gthrw___pthread_key_createPjPFvPvE(pthread_key_t *, void (*)(void *));
# 247 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3
static __inline__ __attribute__((visibility("default"))) int _Z18__gthread_active_pv(void);
extern void __cxa_vec_delete();
static void __T20(void *);
extern void __cxa_vec_dtor();
static void __T21(void *);
extern __attribute__((__noreturn__)) void __rethrow();
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaSetupArg();
# 367 "../src/CUDA_HOG.cu"
extern void _ZN8CUDA_HOG10computeHOGEv(struct CUDA_HOG *const);
# 325 "../src/CUDA_HOG.cu"
extern void _ZN8CUDA_HOG18writeFeatureVectorEjj(struct CUDA_HOG *const, unsigned, unsigned);
# 351 "../src/CUDA_HOG.cu"
extern void _ZN8CUDA_HOG13writeGradientEv(struct CUDA_HOG *const);
# 113 "/usr/include/c++/4.8/bits/allocator.h" 3
extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcEC1Ev(struct _ZSaIcE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcEC2Ev(struct _ZSaIcE *const);
extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcEC1ERKS_(struct _ZSaIcE *const, const struct _ZSaIcE *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcEC2ERKS_(struct _ZSaIcE *const, const struct _ZSaIcE *);




extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcED1Ev(struct _ZSaIcE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcED2Ev(struct _ZSaIcE *const);
# 242 "/usr/include/c++/4.8/bits/char_traits.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE6assignERcRKc */ __inline__ __attribute__((visibility("default"))) void _ZNSt11char_traitsIcE6assignERcRKc(_ZNSt11char_traitsIcE9char_typeE *, const _ZNSt11char_traitsIcE9char_typeE *);
# 258 "/usr/include/c++/4.8/bits/char_traits.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE6lengthEPKc */ __inline__ __attribute__((visibility("default"))) _ZSt6size_t _ZNSt11char_traitsIcE6lengthEPKc(const _ZNSt11char_traitsIcE9char_typeE *);
# 270 "/usr/include/c++/4.8/bits/char_traits.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE4copyEPcPKcm */ __inline__ __attribute__((visibility("default"))) _ZNSt11char_traitsIcE9char_typeE *_ZNSt11char_traitsIcE4copyEPcPKcm(_ZNSt11char_traitsIcE9char_typeE *, const _ZNSt11char_traitsIcE9char_typeE *, _ZSt6size_t);
# 292 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) char *_ZNKSs7_M_dataEv(const struct _ZSs *const);
# 300 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNKSs6_M_repEv(const struct _ZSs *const);
# 354 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs7_M_copyEPcPKcm(char *, const char *, _ZNSs9size_typeE);
# 399 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs13_S_copy_charsEPcS_S_(char *, char *, char *);
# 426 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNSs12_S_empty_repEv(void);
# 437 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSsC1Ev(struct _ZSs *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSsC2Ev(struct _ZSs *const);
# 455 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) void _ZNSsC1ERKSs(struct _ZSs *const, const struct _ZSs *);
# 490 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) void _ZNSsC1EPKcRKSaIcE(struct _ZSs *const, const char *, const struct _ZSaIcE *);
# 538 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSsD1Ev(struct _ZSs *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSsD2Ev(struct _ZSs *const);
# 546 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZSs *_ZNSsaSERKSs(struct _ZSs *const, const struct _ZSs *);
# 715 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSs9size_typeE _ZNKSs4sizeEv(const struct _ZSs *const);
# 797 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) void _ZNSs7reserveEm(struct _ZSs *const, _ZNSs9size_typeE);
# 973 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) struct _ZSs *_ZNSs6appendERKSs(struct _ZSs *const, const struct _ZSs *);
# 998 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) struct _ZSs *_ZNSs6appendEPKcm(struct _ZSs *const, const char *, _ZNSs9size_typeE);
# 1006 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZSs *_ZNSs6appendEPKc(struct _ZSs *const, const char *);
# 1067 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) struct _ZSs *_ZNSs6assignERKSs(struct _ZSs *const, const struct _ZSs *);
# 1800 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) const char *_ZNKSs5c_strEv(const struct _ZSs *const);
# 1817 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSs13get_allocatorEv(_ZNSs14allocator_typeE *, const struct _ZSs *const);
# 532 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSsC1IPcEET_S1_RKSaIcE */ __attribute__((visibility("default"))) void _ZNSsC1IPcEET_S1_RKSaIcE(struct _ZSs *const, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, const struct _ZSaIcE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSsC2IPcEET_S1_RKSaIcE */ __attribute__((visibility("default"))) void _ZNSsC2IPcEET_S1_RKSaIcE(struct _ZSs *const, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, const struct _ZSaIcE *);
# 1743 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSs12_S_constructIPcEES0_T_S1_RKSaIcE */ __inline__ __attribute__((visibility("default"))) char *_ZNSs12_S_constructIPcEES0_T_S1_RKSaIcE(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, const struct _ZSaIcE *);
# 1721 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_type */ __inline__ __attribute__((visibility("default"))) char *_ZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_type(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, const struct _ZSaIcE *, struct _ZSt12__false_type);
# 1759 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSs12_S_constructIPcEES0_T_S1_RKSaIcESt20forward_iterator_tag */ __attribute__((visibility("default"))) char *_ZNSs12_S_constructIPcEES0_T_S1_RKSaIcESt20forward_iterator_tag(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, const struct _ZSaIcE *, struct _ZSt20forward_iterator_tag);
# 181 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNSs4_Rep12_S_empty_repEv(void);
# 203 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep15_M_set_sharableEv(struct _ZNSs4_RepE *const);



extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep26_M_set_length_and_sharableEm(struct _ZNSs4_RepE *const, _ZNSs9size_typeE);
# 222 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) char *_ZNSs4_Rep10_M_refdataEv(struct _ZNSs4_RepE *const);
# 234 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNSs4_Rep9_S_createEmmRKSaIcE(_ZNSs9size_typeE, _ZNSs9size_typeE, const struct _ZSaIcE *);


extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep10_M_disposeERKSaIcE(struct _ZNSs4_RepE *const, const struct _ZSaIcE *);
# 255 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSs4_Rep10_M_destroyERKSaIcE(struct _ZNSs4_RepE *const, const struct _ZSaIcE *);
# 274 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderC1EPcRKSaIcE(struct _ZNSs12_Alloc_hiderE *const, char *, const struct _ZSaIcE *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderC2EPcRKSaIcE(struct _ZNSs12_Alloc_hiderE *const, char *, const struct _ZSaIcE *);
# 272 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSs12_Alloc_hiderD1Ev */ __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderD1Ev(struct _ZNSs12_Alloc_hiderE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSs12_Alloc_hiderD2Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderD2Ev(struct _ZNSs12_Alloc_hiderE *const);
# 117 "/usr/include/c++/4.8/bits/locale_classes.h" 3
extern __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSt6localeC1Ev(struct _ZSt6locale *const);
# 181 "/usr/include/c++/4.8/bits/locale_classes.h" 3
extern __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSt6localeD1Ev(struct _ZSt6locale *const);
# 778 "/usr/include/c++/4.8/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD2Ev(struct _ZSt8ios_base *const);

extern __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSt8ios_baseC1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseC2Ev(struct _ZSt8ios_base *const);
# 537 "/usr/include/c++/4.8/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitC1Ev(struct _ZNSt8ios_base4InitE *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitD1Ev(struct _ZNSt8ios_base4InitE *const);
# 197 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 463 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEEC1Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 488 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv(const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 529 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv(const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);


extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv(const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 131 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt8ios_base7iostateE _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv(const struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 142 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, _ZNSt8ios_base7iostateE);
# 151 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, _ZNSt8ios_base7iostateE);
# 276 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 454 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 466 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, struct _ZSt15basic_streambufIcSt11char_traitsIcEE *);
# 93 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD2Ev(struct _ZSo *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD0Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSoD0Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD1Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSoD1Ev(struct _ZSo *const);
# 192 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEj(struct _ZSo *const, unsigned);
# 224 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEf(struct _ZSo *const, float);
# 384 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoC2Ev(struct _ZSo *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSoC1Ev(struct _ZSo *const);



extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSo9_M_insertImEERSoT_(struct _ZSo *const, unsigned long);
# 389 "/usr/include/c++/4.8/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSo9_M_insertIdEERSoT_(struct _ZSo *const, double);
# 103 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev(struct _ZSi *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD1Ev(struct _ZSi *const);
# 606 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiC2Ev(struct _ZSi *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiC1Ev(struct _ZSi *const);
# 827 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD2Ev(struct _ZSd *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD0Ev(struct _ZSd *const);
extern __inline__ __attribute__((visibility("default"))) void _ZThn16_NSdD0Ev(struct _ZSd *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSdD0Ev(struct _ZSd *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD1Ev(struct _ZSd *const);
extern __inline__ __attribute__((visibility("default"))) void _ZThn16_NSdD1Ev(struct _ZSd *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSdD1Ev(struct _ZSd *const);
# 830 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSdC2Ev(struct _ZSd *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSdC1Ev(struct _ZSd *const);
# 85 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 3
extern __attribute__((visibility("default"))) void _ZNSt12__basic_fileIcED1Ev(struct _ZSt12__basic_fileIcE *const);
# 213 "/usr/include/c++/4.8/fstream" 3
extern __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);





extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 270 "/usr/include/c++/4.8/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 297 "/usr/include/c++/4.8/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 625 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
# 673 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ofstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
# 713 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 753 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
# 98 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode(struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const, _ZNSt8ios_base8openmodeE);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode(struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const, _ZNSt8ios_base8openmodeE);
# 126 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSt15basic_stringbufIcSt11char_traitsIcESaIcEE3strEv(_ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE *, const struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const);
# 93 "/usr/include/c++/4.8/iosfwd" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev(struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED0Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED0Ev(struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED2Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED2Ev(struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const);
# 537 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const, const long *const *, _ZNSt8ios_base8openmodeE);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const, _ZNSt8ios_base8openmodeE);
# 564 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED0Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZThn16_NSt18basic_stringstreamIcSt11char_traitsIcESaIcEED0Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSt18basic_stringstreamIcSt11char_traitsIcESaIcEED0Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
extern __attribute__((visibility("default"))) void _ZThn16_NSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
extern __attribute__((visibility("default"))) void _ZTv0_n24_NSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev(struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
# 583 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv(_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE13__string_typeE *, const struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const);
# 79 "/usr/include/c++/4.8/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC1Ev */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcEC1Ev(struct _ZN9__gnu_cxx13new_allocatorIcEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcEC2Ev(struct _ZN9__gnu_cxx13new_allocatorIcEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC1ERKS1_ */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcEC1ERKS1_(struct _ZN9__gnu_cxx13new_allocatorIcEE *const, const struct _ZN9__gnu_cxx13new_allocatorIcEE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC2ERKS1_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcEC2ERKS1_(struct _ZN9__gnu_cxx13new_allocatorIcEE *const, const struct _ZN9__gnu_cxx13new_allocatorIcEE *);



extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcED1Ev */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcED1Ev(struct _ZN9__gnu_cxx13new_allocatorIcEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcED2Ev(struct _ZN9__gnu_cxx13new_allocatorIcEE *const);
# 9460 "../src/CImg.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library4CImgIhED1Ev */ __inline__ void _ZN12cimg_library4CImgIhED1Ev(struct _ZN12cimg_library4CImgIhEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library4CImgIhED2Ev */ __inline__ void _ZN12cimg_library4CImgIhED2Ev(struct _ZN12cimg_library4CImgIhEE *const);
# 44519 "../src/CImg.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library8CImgListIhED1Ev */ __inline__ void _ZN12cimg_library8CImgListIhED1Ev(struct _ZN12cimg_library8CImgListIhEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library8CImgListIhED2Ev */ __inline__ void _ZN12cimg_library8CImgListIhED2Ev(struct _ZN12cimg_library8CImgListIhEE *const);
# 63 "/usr/include/c++/4.8/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt19__throw_logic_errorPKc(const char *);
# 76 "/usr/include/c++/4.8/bits/ostream_insert.h" 3
extern struct _ZSo *_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(struct _ZSo *, const char *, _ZSt10streamsize);
# 119 "/usr/include/c++/4.8/bits/ios_base.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZStorSt13_Ios_OpenmodeS_ */ __inline__ __attribute__((visibility("default"))) enum _ZSt13_Ios_Openmode _ZStorSt13_Ios_OpenmodeS_(enum _ZSt13_Ios_Openmode, enum _ZSt13_Ios_Openmode);
# 157 "/usr/include/c++/4.8/bits/ios_base.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZStorSt12_Ios_IostateS_ */ __inline__ __attribute__((visibility("default"))) enum _ZSt12_Ios_Iostate _ZStorSt12_Ios_IostateS_(enum _ZSt12_Ios_Iostate, enum _ZSt12_Ios_Iostate);
# 530 "/usr/include/c++/4.8/ostream" 3
extern __inline__ struct _ZSo *_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct _ZSo *, const char *);
# 692 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_ */ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_(struct _ZSs *, const char *, const struct _ZSs *);
# 2402 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_ */ __inline__ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_(struct _ZSs *, const struct _ZSs *, const char *);
# 2365 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_ */ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_(struct _ZSs *, const struct _ZSs *, const struct _ZSs *);
# 133 "/usr/include/c++/4.8/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSteqIcEbRKSaIT_ES3_ */ __inline__ char _ZSteqIcEbRKSaIT_ES3_(const struct _ZSaIcE *, const struct _ZSaIcE *);
# 114 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_ */ __inline__ _ZNSt15iterator_traitsIPcE15difference_typeE _ZSt8distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *);
# 201 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_ */ __inline__ _ZNSt15iterator_traitsIPcE17iterator_categoryE _ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *const *);
# 90 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt10__distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag */ __inline__ _ZNSt15iterator_traitsIPcE15difference_typeE _ZSt10__distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *, struct _ZSt26random_access_iterator_tag);
# 48 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx18__exchange_and_addEPVii(volatile _Atomic_word *, int);
# 65 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx25__exchange_and_add_singleEPii(_Atomic_word *, int);
# 78 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((__unused__)) __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx27__exchange_and_add_dispatchEPii(_Atomic_word *, int);
# 150 "/usr/include/c++/4.8/ext/type_traits.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx17__is_null_pointerIcEEbPT_ */ __inline__ char _ZN9__gnu_cxx17__is_null_pointerIcEEbPT_(_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *);
extern void __nv_dummy_param_ref();
extern void __nv_save_fatbinhandle_for_managed_rt();
extern int __cudaRegisterEntry();
extern int ____cudaRegisterLinkedBinary();
static void __sti___16_CUDA_HOG_cpp1_ii_04c76ffe(void) __attribute__((__constructor__));
# 170 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
extern struct __C8 *__curr_eh_stack_entry;
extern unsigned short __eh_curr_region;
extern void *__dso_handle __attribute__((visibility("hidden")));
# 49173 "../src/CImg.h"
 __attribute__((__weak__)) /* COMDAT group: _ZZN12cimg_library8CImgListIhE4fontEjbE10base_fonts */ struct _ZN12cimg_library4CImgIhEE _ZZN12cimg_library8CImgListIhE4fontEjbE10base_fonts[4] = {{0}};
# 49202 "../src/CImg.h"
 __attribute__((__weak__)) /* COMDAT group: _ZZN12cimg_library8CImgListIhE4fontEjbE5fonts */ struct _ZN12cimg_library8CImgListIhEE _ZZN12cimg_library8CImgListIhE4fontEjbE5fonts[16] = {{0}};
# 174 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern const char _ZNSs4_Rep11_S_terminalE __attribute__((visibility("default")));



extern _ZNSs9size_typeE _ZNSs4_Rep20_S_empty_rep_storageE[] __attribute__((visibility("default")));
# 74 "/usr/include/c++/4.8/iostream" 3
static struct _ZNSt8ios_base4InitE __nv_static_29__16_CUDA_HOG_cpp1_ii_04c76ffe__ZSt8__ioinit __attribute__((visibility("default"))) = {0};
# 247 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3
static __inline__ __attribute__((visibility("default"))) int _Z18__gthread_active_pv(void)
{


return (int)(((void *)_Z28__gthrw___pthread_key_createPjPFvPvE) != ((void *)0LL));
}
static void __T20( void *__T22) {
# 49173 "../src/CImg.h"
__cxa_vec_dtor((&_ZZN12cimg_library8CImgListIhE4fontEjbE10base_fonts), 4UL, 32UL, _ZN12cimg_library4CImgIhED1Ev);  }
static void __T21( void *__T23) {
# 49202 "../src/CImg.h"
__cxa_vec_dtor((&_ZZN12cimg_library8CImgListIhE4fontEjbE5fonts), 16UL, 16UL, _ZN12cimg_library8CImgListIhED1Ev);  }
__asm__(".align 2");
# 367 "../src/CUDA_HOG.cu"
void _ZN8CUDA_HOG10computeHOGEv( struct CUDA_HOG *const this) {  struct dim3 __T219;
 struct dim3 __T220;
 struct dim3 __T221;
 int __T222;
# 369 "../src/CUDA_HOG.cu"
 struct CUevent_st *__cuda_local_var_103424_14_non_const_start;
# 369 "../src/CUDA_HOG.cu"
 struct CUevent_st *__cuda_local_var_103424_21_non_const_stop;



 struct Image3 *__cuda_local_var_103428_10_non_const_d_img;
# 379 "../src/CUDA_HOG.cu"
 struct uchar3 *__cuda_local_var_103440_10_non_const_d_imgPtr;
# 379 "../src/CUDA_HOG.cu"
 struct uchar3 *__cuda_local_var_103440_21_non_const_h_imgPtr;
# 396 "../src/CUDA_HOG.cu"
 struct Vec2 *__cuda_local_var_103479_8_non_const_d_imgGradient;
# 403 "../src/CUDA_HOG.cu"
 struct float2 *__cuda_local_var_103494_10_non_const_d_imgGradientPtr;
# 413 "../src/CUDA_HOG.cu"
 struct dim3 __cuda_local_var_103520_7_non_const_gridSize;
 struct dim3 __cuda_local_var_103521_7_non_const_blockSize;





 float __cuda_local_var_103527_8_non_const_milliseconds;
# 434 "../src/CUDA_HOG.cu"
 HOGDescriptor *__cuda_local_var_103551_17_non_const_d_hogDsc;

 size_t __cuda_local_var_103553_9_non_const_totalBlockNum;
# 447 "../src/CUDA_HOG.cu"
 struct uint2 __cuda_local_var_103578_8_non_const_numWindows;
# 480 "../src/CUDA_HOG.cu"
 unsigned __cuda_local_var_103627_16_non_const_x;
# 480 "../src/CUDA_HOG.cu"
 unsigned __cuda_local_var_103627_19_non_const_y;
# 370 "../src/CUDA_HOG.cu"
cudaEventCreate((&__cuda_local_var_103424_14_non_const_start));
cudaEventCreate((&__cuda_local_var_103424_21_non_const_stop));




{  enum cudaError __cuda_local_var_103431_16_non_const__m_cudaStat;
# 376 "../src/CUDA_HOG.cu"
__cuda_local_var_103431_16_non_const__m_cudaStat = (cudaMalloc(((void **)(&__cuda_local_var_103428_10_non_const_d_img)), 24UL)); if (((int)__cuda_local_var_103431_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103431_16_non_const__m_cudaStat)), 376, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
{  enum cudaError __cuda_local_var_103432_16_non_const__m_cudaStat;
# 377 "../src/CUDA_HOG.cu"
__cuda_local_var_103432_16_non_const__m_cudaStat = (cudaMemcpy(((void *)__cuda_local_var_103428_10_non_const_d_img), ((const void *)(&(this->img))), 24UL, cudaMemcpyHostToDevice)); if (((int)__cuda_local_var_103432_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103432_16_non_const__m_cudaStat)), 378, ((const char *)("../src/CUDA_HOG.cu")));
# 377 "../src/CUDA_HOG.cu"
exit(1); } }
;
__cuda_local_var_103440_21_non_const_h_imgPtr = (_ZNK6Image311getConstPtrEv((((const struct Image3 *)&(this->img)))));


{  enum cudaError __cuda_local_var_103443_16_non_const__m_cudaStat;
# 382 "../src/CUDA_HOG.cu"
__cuda_local_var_103443_16_non_const__m_cudaStat = (cudaMalloc(((void **)(&__cuda_local_var_103440_10_non_const_d_imgPtr)), (3UL * (_ZNK6Image34sizeEv((((const struct Image3 *)&(this->img)))))))); if (((int)__cuda_local_var_103443_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103443_16_non_const__m_cudaStat)), 383, ((const char *)("../src/CUDA_HOG.cu")));
# 382 "../src/CUDA_HOG.cu"
exit(1); } }
;
{  enum cudaError __cuda_local_var_103451_16_non_const__m_cudaStat;
# 384 "../src/CUDA_HOG.cu"
__cuda_local_var_103451_16_non_const__m_cudaStat = (cudaMemcpy(((void *)__cuda_local_var_103440_10_non_const_d_imgPtr), ((const void *)__cuda_local_var_103440_21_non_const_h_imgPtr), (3UL * (_ZNK6Image34sizeEv((((const struct Image3 *)&(this->img)))))), cudaMemcpyHostToDevice)); if (((int)__cuda_local_var_103451_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103451_16_non_const__m_cudaStat)), 386, ((const char *)("../src/CUDA_HOG.cu")));
# 384 "../src/CUDA_HOG.cu"
exit(1); } }

;


{  enum cudaError __cuda_local_var_103464_16_non_const__m_cudaStat;
# 389 "../src/CUDA_HOG.cu"
__cuda_local_var_103464_16_non_const__m_cudaStat = (cudaMemcpy(((void *)(&(__cuda_local_var_103428_10_non_const_d_img->data))), ((const void *)(&__cuda_local_var_103440_10_non_const_d_imgPtr)), 8UL, cudaMemcpyHostToDevice)); if (((int)__cuda_local_var_103464_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103464_16_non_const__m_cudaStat)), 391, ((const char *)("../src/CUDA_HOG.cu")));
# 389 "../src/CUDA_HOG.cu"
exit(1); } }

;
# 398 "../src/CUDA_HOG.cu"
{  enum cudaError __cuda_local_var_103481_16_non_const__m_cudaStat;
# 398 "../src/CUDA_HOG.cu"
__cuda_local_var_103481_16_non_const__m_cudaStat = (cudaMalloc(((void **)(&__cuda_local_var_103479_8_non_const_d_imgGradient)), 24UL)); if (((int)__cuda_local_var_103481_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103481_16_non_const__m_cudaStat)), 398, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
{  enum cudaError __cuda_local_var_103482_16_non_const__m_cudaStat;
# 399 "../src/CUDA_HOG.cu"
__cuda_local_var_103482_16_non_const__m_cudaStat = (cudaMemcpy(((void *)__cuda_local_var_103479_8_non_const_d_imgGradient), ((const void *)(&(this->imgGradient))), 24UL, cudaMemcpyHostToDevice)); if (((int)__cuda_local_var_103482_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103482_16_non_const__m_cudaStat)), 401, ((const char *)("../src/CUDA_HOG.cu")));
# 399 "../src/CUDA_HOG.cu"
exit(1); } }

;



{  enum cudaError __cuda_local_var_103496_16_non_const__m_cudaStat;
# 405 "../src/CUDA_HOG.cu"
__cuda_local_var_103496_16_non_const__m_cudaStat = (cudaMalloc(((void **)(&__cuda_local_var_103494_10_non_const_d_imgGradientPtr)), (8UL * (_ZNK4Vec24sizeEv((((const struct Vec2 *)&(this->imgGradient)))))))); if (((int)__cuda_local_var_103496_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103496_16_non_const__m_cudaStat)), 407, ((const char *)("../src/CUDA_HOG.cu")));
# 405 "../src/CUDA_HOG.cu"
exit(1); } }

;


{  enum cudaError __cuda_local_var_103509_16_non_const__m_cudaStat;
# 410 "../src/CUDA_HOG.cu"
__cuda_local_var_103509_16_non_const__m_cudaStat = (cudaMemcpy(((void *)(&(__cuda_local_var_103479_8_non_const_d_imgGradient->data))), ((const void *)(&__cuda_local_var_103494_10_non_const_d_imgGradientPtr)), 8UL, cudaMemcpyHostToDevice)); if (((int)__cuda_local_var_103509_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103509_16_non_const__m_cudaStat)), 412, ((const char *)("../src/CUDA_HOG.cu")));
# 410 "../src/CUDA_HOG.cu"
exit(1); } }

;
_ZN4dim3C1Ejjj((&__cuda_local_var_103520_7_non_const_gridSize), 20U, 20U, 1U);
_ZN4dim3C1Ejjj((&__cuda_local_var_103521_7_non_const_blockSize), 32U, 24U, 1U);

cudaEventRecord(__cuda_local_var_103424_14_non_const_start, ((struct CUstream_st *)0LL));
(cudaConfigureCall(__cuda_local_var_103520_7_non_const_gridSize, __cuda_local_var_103521_7_non_const_blockSize, 0UL, ((struct CUstream_st *)0LL))) ? ((void)0) : (__device_stub__ZN4CUDA15computeGradientEPK6Image3P4Vec2(((const struct Image3 *)__cuda_local_var_103428_10_non_const_d_img), __cuda_local_var_103479_8_non_const_d_imgGradient));
cudaEventRecord(__cuda_local_var_103424_21_non_const_stop, ((struct CUstream_st *)0LL));
{  enum cudaError __cuda_local_var_103526_16_non_const__m_cudaStat;
# 419 "../src/CUDA_HOG.cu"
__cuda_local_var_103526_16_non_const__m_cudaStat = (cudaEventSynchronize(__cuda_local_var_103424_21_non_const_stop)); if (((int)__cuda_local_var_103526_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103526_16_non_const__m_cudaStat)), 419, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
__cuda_local_var_103527_8_non_const_milliseconds = (0.0F);
cudaEventElapsedTime((&__cuda_local_var_103527_8_non_const_milliseconds), __cuda_local_var_103424_14_non_const_start, __cuda_local_var_103424_21_non_const_stop);
printf(((const char *)"Time for gradient kernel: %f ms\n"), ((double)__cuda_local_var_103527_8_non_const_milliseconds));
{  enum cudaError __cuda_local_var_103530_16_non_const__m_cudaStat;
# 423 "../src/CUDA_HOG.cu"
__cuda_local_var_103530_16_non_const__m_cudaStat = (cudaThreadSynchronize()); if (((int)__cuda_local_var_103530_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103530_16_non_const__m_cudaStat)), 423, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;

{  enum cudaError __cuda_local_var_103532_16_non_const__m_cudaStat;
# 425 "../src/CUDA_HOG.cu"
__cuda_local_var_103532_16_non_const__m_cudaStat = (cudaMemcpy(((void *)((this->imgGradient).data)), ((const void *)__cuda_local_var_103494_10_non_const_d_imgGradientPtr), (8UL * (_ZNK4Vec24sizeEv((((const struct Vec2 *)&(this->imgGradient)))))), cudaMemcpyDeviceToHost)); if (((int)__cuda_local_var_103532_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103532_16_non_const__m_cudaStat)), 428, ((const char *)("../src/CUDA_HOG.cu")));
# 425 "../src/CUDA_HOG.cu"
exit(1); } }



{  enum cudaError __cuda_local_var_103546_16_non_const__m_cudaStat;
# 429 "../src/CUDA_HOG.cu"
__cuda_local_var_103546_16_non_const__m_cudaStat = (cudaGetLastError()); if (((int)__cuda_local_var_103546_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103546_16_non_const__m_cudaStat)), 429, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
# 436 "../src/CUDA_HOG.cu"
__cuda_local_var_103553_9_non_const_totalBlockNum = ((size_t)((((this->numWindowsX) * (this->numWindowsY)) * 7U) * 15U));
{  enum cudaError __cuda_local_var_103554_16_non_const__m_cudaStat;
# 437 "../src/CUDA_HOG.cu"
__cuda_local_var_103554_16_non_const__m_cudaStat = (cudaMalloc(((void **)(&__cuda_local_var_103551_17_non_const_d_hogDsc)), (144UL * __cuda_local_var_103553_9_non_const_totalBlockNum))); if (((int)__cuda_local_var_103554_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103554_16_non_const__m_cudaStat)), 439, ((const char *)("../src/CUDA_HOG.cu")));
# 437 "../src/CUDA_HOG.cu"
exit(1); } }

;


{  enum cudaError __cuda_local_var_103567_16_non_const__m_cudaStat;
# 442 "../src/CUDA_HOG.cu"
__cuda_local_var_103567_16_non_const__m_cudaStat = (cudaMemset(((void *)__cuda_local_var_103551_17_non_const_d_hogDsc), 0, (144UL * __cuda_local_var_103553_9_non_const_totalBlockNum))); if (((int)__cuda_local_var_103567_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103567_16_non_const__m_cudaStat)), 443, ((const char *)("../src/CUDA_HOG.cu")));
# 442 "../src/CUDA_HOG.cu"
exit(1); } }
;

__cuda_local_var_103520_7_non_const_gridSize = ((_ZN4dim3C1Ejjj((&__T219), 7U, 15U, ((this->numWindowsX) * (this->numWindowsY)))) , __T219);
__cuda_local_var_103521_7_non_const_blockSize = ((_ZN4dim3C1Ejjj((&__T220), 16U, 16U, 1U)) , __T220);
__cuda_local_var_103578_8_non_const_numWindows = (_Z10make_uint2jj((this->numWindowsX), (this->numWindowsY)));
cudaEventRecord(__cuda_local_var_103424_14_non_const_start, ((struct CUstream_st *)0LL));
(cudaConfigureCall(__cuda_local_var_103520_7_non_const_gridSize, __cuda_local_var_103521_7_non_const_blockSize, ((144UL * ((unsigned long)(__cuda_local_var_103521_7_non_const_blockSize.x))) * ((unsigned long)(__cuda_local_var_103521_7_non_const_blockSize.y))), ((struct CUstream_st *)0LL))) ? ((void)0) : (__device_stub__ZN4CUDA16computeHistogramEPK4Vec2P13HOGDescriptor5uint2(((const struct Vec2 *)__cuda_local_var_103479_8_non_const_d_imgGradient), __cuda_local_var_103551_17_non_const_d_hogDsc, __cuda_local_var_103578_8_non_const_numWindows));
cudaEventRecord(__cuda_local_var_103424_21_non_const_stop, ((struct CUstream_st *)0LL));
{  enum cudaError __cuda_local_var_103582_16_non_const__m_cudaStat;
# 451 "../src/CUDA_HOG.cu"
__cuda_local_var_103582_16_non_const__m_cudaStat = (cudaEventSynchronize(__cuda_local_var_103424_21_non_const_stop)); if (((int)__cuda_local_var_103582_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103582_16_non_const__m_cudaStat)), 451, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
cudaEventElapsedTime((&__cuda_local_var_103527_8_non_const_milliseconds), __cuda_local_var_103424_14_non_const_start, __cuda_local_var_103424_21_non_const_stop);
printf(((const char *)"Time for histogram kernel: %f ms\n"), ((double)__cuda_local_var_103527_8_non_const_milliseconds));

{  enum cudaError __cuda_local_var_103586_16_non_const__m_cudaStat;
# 455 "../src/CUDA_HOG.cu"
__cuda_local_var_103586_16_non_const__m_cudaStat = (cudaThreadSynchronize()); if (((int)__cuda_local_var_103586_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103586_16_non_const__m_cudaStat)), 455, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
{  enum cudaError __cuda_local_var_103587_16_non_const__m_cudaStat;
# 456 "../src/CUDA_HOG.cu"
__cuda_local_var_103587_16_non_const__m_cudaStat = (cudaGetLastError()); if (((int)__cuda_local_var_103587_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103587_16_non_const__m_cudaStat)), 456, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;

{  enum cudaError __cuda_local_var_103589_16_non_const__m_cudaStat;
# 458 "../src/CUDA_HOG.cu"
__cuda_local_var_103589_16_non_const__m_cudaStat = (cudaMemcpy(((void *)(this->hogDsc)), ((const void *)__cuda_local_var_103551_17_non_const_d_hogDsc), (144UL * __cuda_local_var_103553_9_non_const_totalBlockNum), cudaMemcpyDeviceToHost)); if (((int)__cuda_local_var_103589_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103589_16_non_const__m_cudaStat)), 460, ((const char *)("../src/CUDA_HOG.cu")));
# 458 "../src/CUDA_HOG.cu"
exit(1); } }

;




__cuda_local_var_103521_7_non_const_blockSize = ((_ZN4dim3C1Ejjj((&__T221), 36U, 1U, 1U)) , __T221);
cudaEventRecord(__cuda_local_var_103424_14_non_const_start, ((struct CUstream_st *)0LL));
(cudaConfigureCall(__cuda_local_var_103520_7_non_const_gridSize, __cuda_local_var_103521_7_non_const_blockSize, 0UL, ((struct CUstream_st *)0LL))) ? ((void)0) : (__device_stub__ZN4CUDA18normalizeHistogramEP13HOGDescriptor(__cuda_local_var_103551_17_non_const_d_hogDsc));
cudaEventRecord(__cuda_local_var_103424_21_non_const_stop, ((struct CUstream_st *)0LL));
{  enum cudaError __cuda_local_var_103608_16_non_const__m_cudaStat;
# 469 "../src/CUDA_HOG.cu"
__cuda_local_var_103608_16_non_const__m_cudaStat = (cudaEventSynchronize(__cuda_local_var_103424_21_non_const_stop)); if (((int)__cuda_local_var_103608_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103608_16_non_const__m_cudaStat)), 469, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
cudaEventElapsedTime((&__cuda_local_var_103527_8_non_const_milliseconds), __cuda_local_var_103424_14_non_const_start, __cuda_local_var_103424_21_non_const_stop);
printf(((const char *)"Time for normalization kernel: %f ms\n"), ((double)__cuda_local_var_103527_8_non_const_milliseconds));

{  enum cudaError __cuda_local_var_103612_16_non_const__m_cudaStat;
# 473 "../src/CUDA_HOG.cu"
__cuda_local_var_103612_16_non_const__m_cudaStat = (cudaThreadSynchronize()); if (((int)__cuda_local_var_103612_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103612_16_non_const__m_cudaStat)), 473, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;
{  enum cudaError __cuda_local_var_103613_16_non_const__m_cudaStat;
# 474 "../src/CUDA_HOG.cu"
__cuda_local_var_103613_16_non_const__m_cudaStat = (cudaGetLastError()); if (((int)__cuda_local_var_103613_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103613_16_non_const__m_cudaStat)), 474, ((const char *)("../src/CUDA_HOG.cu"))); exit(1); } } ;

{  enum cudaError __cuda_local_var_103615_16_non_const__m_cudaStat;
# 476 "../src/CUDA_HOG.cu"
__cuda_local_var_103615_16_non_const__m_cudaStat = (cudaMemcpy(((void *)(this->hogDsc)), ((const void *)__cuda_local_var_103551_17_non_const_d_hogDsc), (144UL * __cuda_local_var_103553_9_non_const_totalBlockNum), cudaMemcpyDeviceToHost)); if (((int)__cuda_local_var_103615_16_non_const__m_cudaStat) != 0) { fprintf(stderr, ((const char *)"Error %s at line %d in file %s\n"), (cudaGetErrorString(__cuda_local_var_103615_16_non_const__m_cudaStat)), 478, ((const char *)("../src/CUDA_HOG.cu")));
# 476 "../src/CUDA_HOG.cu"
exit(1); } }

;


for (__cuda_local_var_103627_19_non_const_y = 0U; (__cuda_local_var_103627_19_non_const_y < (__cuda_local_var_103578_8_non_const_numWindows.y)); __cuda_local_var_103627_19_non_const_y++) {
for (__cuda_local_var_103627_16_non_const_x = 0U; (__cuda_local_var_103627_16_non_const_x < (__cuda_local_var_103578_8_non_const_numWindows.x)); __cuda_local_var_103627_16_non_const_x++) {
_ZN8CUDA_HOG18writeFeatureVectorEjj(this, __cuda_local_var_103627_16_non_const_x, __cuda_local_var_103627_19_non_const_y);

}
}
_ZN8CUDA_HOG13writeGradientEv(this);
cudaEventDestroy(__cuda_local_var_103424_14_non_const_start);
cudaEventDestroy(__cuda_local_var_103424_21_non_const_stop);
cudaFree(((void *)__cuda_local_var_103428_10_non_const_d_img));
cudaFree(((void *)__cuda_local_var_103440_10_non_const_d_imgPtr));
cudaFree(((void *)__cuda_local_var_103479_8_non_const_d_imgGradient));
cudaFree(((void *)__cuda_local_var_103494_10_non_const_d_imgGradientPtr));
cudaFree(((void *)__cuda_local_var_103551_17_non_const_d_hogDsc)); { if (!(this)) { __T222 = 0; }  }

}
__asm__(".align 2");
# 325 "../src/CUDA_HOG.cu"
void _ZN8CUDA_HOG18writeFeatureVectorEjj( struct CUDA_HOG *const this,  unsigned _windowX, 
unsigned _windowY) {  struct _ZSs __T223;
 struct _ZSs __T224;
 struct _ZSs __T225;
 _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE13__string_typeE __T226;
 _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE13__string_typeE __T227;
 int __T228;
# 327 "../src/CUDA_HOG.cu"
 struct stat __cuda_local_var_103382_14_non_const_st;



 _ZSt8ofstream __cuda_local_var_103386_16_non_const_outfile;
 _ZSt12stringstream __cuda_local_var_103387_20_non_const_ss1;
# 332 "../src/CUDA_HOG.cu"
 _ZSt12stringstream __cuda_local_var_103387_25_non_const_ss2;


 unsigned __cuda_local_var_103390_15_non_const_windowIdx;

 _ZSt6string __cuda_local_var_103392_14_non_const_name;
# 328 "../src/CUDA_HOG.cu"
if ((stat(((const char *)"GPU_features"), (&__cuda_local_var_103382_14_non_const_st))) == (-1)) {
mkdir(((const char *)"GPU_features"), 511U);
}
_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev((&__cuda_local_var_103386_16_non_const_outfile));
_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode((&__cuda_local_var_103387_20_non_const_ss1), (_ZStorSt13_Ios_OpenmodeS_(_ZSt6_S_out, _ZSt5_S_in))); _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode((&__cuda_local_var_103387_25_non_const_ss2), (_ZStorSt13_Ios_OpenmodeS_(_ZSt6_S_out, _ZSt5_S_in)));
_ZNSolsEj((((struct _ZSo *)&(((*(struct _ZSd *)&__cuda_local_var_103387_20_non_const_ss1)).__b_So))), _windowX);
_ZNSolsEj((((struct _ZSo *)&(((*(struct _ZSd *)&__cuda_local_var_103387_25_non_const_ss2)).__b_So))), _windowY);
__cuda_local_var_103390_15_non_const_windowIdx = ((((_windowY * (this->numWindowsX)) + _windowX) * 7U) * 15U);

_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_((&__cuda_local_var_103392_14_non_const_name), ((_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_((&__T223), ((_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_((&__T224), ((_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_((&__T225), ((const char *)"GPU_features/vector_"), ((_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv((&__T226), (((const struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *)&__cuda_local_var_103387_20_non_const_ss1)))) , (((const struct _ZSs *)&__T226))))) , (((const struct _ZSs *)&__T225))), ((const char *)"_"))) , (((const struct _ZSs *)&__T224))), ((_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv((&__T227), (((const struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *)&__cuda_local_var_103387_25_non_const_ss2)))) , (((const struct _ZSs *)&__T227))))) , (((const struct _ZSs *)&__T223))), ((const char *)".txt")); _ZNSsD1Ev((&__T223)); _ZNSsD1Ev((&__T227)); _ZNSsD1Ev((&__T224)); _ZNSsD1Ev((&__T225)); _ZNSsD1Ev((&__T226));

_ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&__cuda_local_var_103386_16_non_const_outfile), (_ZNKSs5c_strEv((((const struct _ZSs *)&__cuda_local_var_103392_14_non_const_name)))), (_ZStorSt13_Ios_OpenmodeS_(_ZSt6_S_out, _ZSt8_S_trunc))); {
 unsigned i;
# 340 "../src/CUDA_HOG.cu"
i = 0U; for (; (i < 105U); i++) { {

 unsigned j;
# 342 "../src/CUDA_HOG.cu"
j = 0U; 
#pragma unroll 36
for (; (j < 36U); j++)
# 342 "../src/CUDA_HOG.cu"
{
_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEf((((struct _ZSo *)&__cuda_local_var_103386_16_non_const_outfile)), (((((this->hogDsc)[(__cuda_local_var_103390_15_non_const_windowIdx + i)]).bin))[j]))), ((const char *)"\n"));
} }


} }
_ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv((&__cuda_local_var_103386_16_non_const_outfile)); { if (!(this)) { __T228 = 0; } _ZNSsD1Ev((&__cuda_local_var_103392_14_non_const_name)); _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev((&__cuda_local_var_103387_25_non_const_ss2)); _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev((&__cuda_local_var_103387_20_non_const_ss1)); _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_103386_16_non_const_outfile));  }
}
__asm__(".align 2");
void _ZN8CUDA_HOG13writeGradientEv( struct CUDA_HOG *const this) {  struct _ZSaIcE __T229;
 int __T230;
 _ZSt8ofstream __cuda_local_var_103408_16_non_const_outfile;

 _ZSt6string __cuda_local_var_103410_14_non_const_name;

 struct float2 *__cuda_local_var_103412_10_non_const_grdPtr;
# 353 "../src/CUDA_HOG.cu"
_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev((&__cuda_local_var_103408_16_non_const_outfile));

_ZNSsC1EPKcRKSaIcE((&__cuda_local_var_103410_14_non_const_name), ((const char *)"gradient.txt"), ((_ZNSaIcEC1Ev((&__T229))) , (((const struct _ZSaIcE *)&__T229)))); _ZNSaIcED1Ev((&__T229));
_ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&__cuda_local_var_103408_16_non_const_outfile), (_ZNKSs5c_strEv((((const struct _ZSs *)&__cuda_local_var_103410_14_non_const_name)))), (_ZStorSt13_Ios_OpenmodeS_(_ZSt6_S_out, _ZSt8_S_trunc))); {

 unsigned y;
# 358 "../src/CUDA_HOG.cu"
y = 0U; for (; (y < ((unsigned)(_ZNK4Vec26heightEv((((const struct Vec2 *)&(this->imgGradient))))))); y++) {
__cuda_local_var_103412_10_non_const_grdPtr = (_ZNK4Vec211getConstPtrEjj((((const struct Vec2 *)&(this->imgGradient))), 0U, y)); {
 unsigned x;
# 360 "../src/CUDA_HOG.cu"
x = 0U; for (; (x < ((unsigned)(_ZNK4Vec25widthEv((((const struct Vec2 *)&(this->imgGradient))))))); x++) {
_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEf((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEf((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((((struct _ZSo *)&__cuda_local_var_103408_16_non_const_outfile)), ((const char *)"M: "))), ((__cuda_local_var_103412_10_non_const_grdPtr[x]).x))), ((const char *)"A: "))), ((__cuda_local_var_103412_10_non_const_grdPtr[x]).y))), ((const char *)"\t"));
} }
_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((((struct _ZSo *)&__cuda_local_var_103408_16_non_const_outfile)), ((const char *)"\n"));
} }
_ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv((&__cuda_local_var_103408_16_non_const_outfile)); { if (!(this)) { __T230 = 0; } _ZNSsD1Ev((&__cuda_local_var_103410_14_non_const_name)); _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_103408_16_non_const_outfile));  }
}
__asm__(".align 2");
# 113 "/usr/include/c++/4.8/bits/allocator.h" 3
extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcEC1Ev( struct _ZSaIcE *const this) { _ZN9__gnu_cxx13new_allocatorIcEC2Ev(((struct _ZN9__gnu_cxx13new_allocatorIcEE *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcEC2Ev( struct _ZSaIcE *const this) {  _ZNSaIcEC1Ev(this);  }
__asm__(".align 2");
# 115 "/usr/include/c++/4.8/bits/allocator.h" 3
extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcEC1ERKS_( struct _ZSaIcE *const this,  const struct _ZSaIcE *__a)
{ _ZN9__gnu_cxx13new_allocatorIcEC2ERKS1_(((struct _ZN9__gnu_cxx13new_allocatorIcEE *)this), ((const struct _ZN9__gnu_cxx13new_allocatorIcEE *)((struct _ZN9__gnu_cxx13new_allocatorIcEE *)__a)));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcEC2ERKS_( struct _ZSaIcE *const this,  const struct _ZSaIcE *__T231) {  _ZNSaIcEC1ERKS_(this, __T231);  }
__asm__(".align 2");

extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSaIcED1Ev( struct _ZSaIcE *const this) {  { _ZN9__gnu_cxx13new_allocatorIcED2Ev(((struct _ZN9__gnu_cxx13new_allocatorIcEE *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSaIcED2Ev( struct _ZSaIcE *const this) {  _ZNSaIcED1Ev(this);  }
# 242 "/usr/include/c++/4.8/bits/char_traits.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE6assignERcRKc */ __inline__ __attribute__((visibility("default"))) void _ZNSt11char_traitsIcE6assignERcRKc( _ZNSt11char_traitsIcE9char_typeE *__c1,  const _ZNSt11char_traitsIcE9char_typeE *__c2)
{ (*__c1) = (*__c2);  }
# 258 "/usr/include/c++/4.8/bits/char_traits.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE6lengthEPKc */ __inline__ __attribute__((visibility("default"))) _ZSt6size_t _ZNSt11char_traitsIcE6lengthEPKc( const _ZNSt11char_traitsIcE9char_typeE *__s)
{ return __builtin_strlen(__s); }
# 270 "/usr/include/c++/4.8/bits/char_traits.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11char_traitsIcE4copyEPcPKcm */ __inline__ __attribute__((visibility("default"))) _ZNSt11char_traitsIcE9char_typeE *_ZNSt11char_traitsIcE4copyEPcPKcm( _ZNSt11char_traitsIcE9char_typeE *__s1,  const _ZNSt11char_traitsIcE9char_typeE *__s2,  _ZSt6size_t __n)
{ return (_ZNSt11char_traitsIcE9char_typeE *)(__builtin_memcpy(((void *)__s1), ((const void *)__s2), __n)); }
__asm__(".align 2");
# 292 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) char *_ZNKSs7_M_dataEv( const struct _ZSs *const this)
{  int __T232;
# 293 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T232 = 0; } return (((struct _ZSs *)this)->_M_dataplus)._M_p; } }
__asm__(".align 2");





extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNKSs6_M_repEv( const struct _ZSs *const this)
{  int __T233;
# 301 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T233 = 0; } return ((struct _ZNSs4_RepE *)(_ZNKSs7_M_dataEv(this))) + (-1); } }
# 354 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs7_M_copyEPcPKcm( char *__d,  const char *__s,  _ZNSs9size_typeE __n)
{
if (__n == 1UL) {
_ZNSt11char_traitsIcE6assignERcRKc(__d, __s); } else  {

_ZNSt11char_traitsIcE4copyEPcPKcm(__d, __s, __n); } 
}
# 399 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs13_S_copy_charsEPcS_S_( char *__p,  char *__k1,  char *__k2)
{ _ZNSs7_M_copyEPcPKcm(__p, ((const char *)__k1), ((_ZNSs9size_typeE)(__k2 - __k1)));  }
# 426 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNSs12_S_empty_repEv(void)
{ return _ZNSs4_Rep12_S_empty_repEv(); }
__asm__(".align 2");
# 437 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSsC1Ev( struct _ZSs *const this)

{  struct _ZSaIcE __T234;
# 439 "/usr/include/c++/4.8/bits/basic_string.h" 3
_ZNSs12_Alloc_hiderC1EPcRKSaIcE((&(this->_M_dataplus)), (_ZNSs4_Rep10_M_refdataEv((_ZNSs12_S_empty_repEv()))), ((_ZNSaIcEC1Ev((&__T234))) , (((const struct _ZSaIcE *)&__T234)))); _ZNSaIcED1Ev((&__T234));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSsC2Ev( struct _ZSs *const this) {  _ZNSsC1Ev(this);  }
__asm__(".align 2");
# 538 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSsD1Ev( struct _ZSs *const this)
{  _ZNSs14allocator_typeE __T235;
# 539 "/usr/include/c++/4.8/bits/basic_string.h" 3
(_ZNSs4_Rep10_M_disposeERKSaIcE((_ZNKSs6_M_repEv(((const struct _ZSs *)this))), ((_ZNKSs13get_allocatorEv((&__T235), ((const struct _ZSs *)this))) , (((const struct _ZSaIcE *)&__T235))))) , (void)(_ZNSaIcED1Ev((&__T235))); { _ZNSs12_Alloc_hiderD1Ev((&(this->_M_dataplus))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSsD2Ev( struct _ZSs *const this) {  _ZNSsD1Ev(this);  }
__asm__(".align 2");



extern __inline__ __attribute__((visibility("default"))) struct _ZSs *_ZNSsaSERKSs( struct _ZSs *const this,  const struct _ZSs *__str)
{  int __T236;
# 547 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T236 = 0; } return _ZNSs6assignERKSs(this, __str); } }
__asm__(".align 2");
# 715 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSs9size_typeE _ZNKSs4sizeEv( const struct _ZSs *const this)
{  int __T237;
# 716 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T237 = 0; } return ((_ZNKSs6_M_repEv(this))->__b_NSs9_Rep_baseE)._M_length; } }
__asm__(".align 2");
# 1006 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZSs *_ZNSs6appendEPKc( struct _ZSs *const this,  const char *__s)
{  int __T238;
; {
if (!(this)) { __T238 = 0; } return _ZNSs6appendEPKcm(this, __s, (_ZNSt11char_traitsIcE6lengthEPKc(__s))); }
}
__asm__(".align 2");
# 1800 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) const char *_ZNKSs5c_strEv( const struct _ZSs *const this)
{  int __T239;
# 1801 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T239 = 0; } return (const char *)(_ZNKSs7_M_dataEv(this)); } }
__asm__(".align 2");
# 1817 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSs13get_allocatorEv( _ZNSs14allocator_typeE *__T240,  const struct _ZSs *const this)
{  int __T241;
# 1818 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ _ZNSaIcEC1ERKS_(__T240, ((const struct _ZSaIcE *)(((struct _ZSaIcE *)&(((struct _ZSs *)this)->_M_dataplus))))); if (!(this)) { __T241 = 0; } return; } }
__asm__(".align 2");
# 532 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSsC1IPcEET_S1_RKSaIcE */ __attribute__((visibility("default"))) void _ZNSsC1IPcEET_S1_RKSaIcE( struct _ZSs *const this, 
# 228 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__beg,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__end,  const struct _ZSaIcE *__a)

{ _ZNSs12_Alloc_hiderC1EPcRKSaIcE((&(this->_M_dataplus)), (_ZNSs12_S_constructIPcEES0_T_S1_RKSaIcE(__beg, __end, __a)), __a);  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSsC2IPcEET_S1_RKSaIcE */ __attribute__((visibility("default"))) void _ZNSsC2IPcEET_S1_RKSaIcE( struct _ZSs *const this,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__T242,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__T243,  const struct _ZSaIcE *__T244) {  _ZNSsC1IPcEET_S1_RKSaIcE(this, __T242, __T243, __T244);  }
# 1743 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSs12_S_constructIPcEES0_T_S1_RKSaIcE */ __inline__ __attribute__((visibility("default"))) char *_ZNSs12_S_constructIPcEES0_T_S1_RKSaIcE( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__beg,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__end,  const struct _ZSaIcE *__a)
{  _ZZNSs12_S_constructIPcEES0_T_S1_RKSaIcEE9_Integral_64231 __T245;

return _ZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_type(__beg, __end, __a, __T245);
}
# 1721 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_type */ __inline__ __attribute__((visibility("default"))) char *_ZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_type( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__beg,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__end, 
const struct _ZSaIcE *__a,  struct _ZSt12__false_type __T246)
{  _ZZNSs16_S_construct_auxIPcEES0_T_S1_RKSaIcESt12__false_typeE4_Tag_64242 __T247;

return _ZNSs12_S_constructIPcEES0_T_S1_RKSaIcESt20forward_iterator_tag(__beg, __end, __a, ((*(struct _ZSt20forward_iterator_tag *)((struct _ZSt26bidirectional_iterator_tag *)&__T247))));
}
# 1759 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSs12_S_constructIPcEES0_T_S1_RKSaIcESt20forward_iterator_tag */ __attribute__((visibility("default"))) char *_ZNSs12_S_constructIPcEES0_T_S1_RKSaIcESt20forward_iterator_tag(
# 124 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__beg,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__end,  const struct _ZSaIcE *__a,  struct _ZSt20forward_iterator_tag __T248)

{ static struct __C5 __T249[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 int __T250;
 struct _ZSaIcE __T251;
 int __T252;
 struct __C8 __T253;




 _ZNSs9size_typeE __cuda_local_var_91900_18_non_const___dnew;


 struct _ZNSs4_RepE *__cuda_local_var_91903_8_non_const___r;
# 128 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
if ((__T250 = 0) , (((__T252 = ((__beg == __end) && (_ZSteqIcEbRKSaIT_ES3_(__a, ((_ZNSaIcEC1Ev((&__T251))) , ((__T250 = 1) , (((const struct _ZSaIcE *)&__T251)))))))) , (void)((__T250) ? ((_ZNSaIcED1Ev((&__T251))) , (void)((void)0)) : ((void)0))) , __T252)) {
return _ZNSs4_Rep10_M_refdataEv((_ZNSs12_S_empty_repEv())); }


if ((_ZN9__gnu_cxx17__is_null_pointerIcEEbPT_(__beg)) && (__beg != __end)) {
_ZSt19__throw_logic_errorPKc(((const char *)"basic_string::_S_construct null not valid")); }

__cuda_local_var_91900_18_non_const___dnew = ((_ZNSs9size_typeE)(_ZSt8distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_(__beg, __end)));


__cuda_local_var_91903_8_non_const___r = (_ZNSs4_Rep9_S_createEmmRKSaIcE(__cuda_local_var_91900_18_non_const___dnew, 0UL, __a)); { (__T253.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T253); (__T253.kind) = ((unsigned char)5U); (((__T253.variant).try_block).catch_entries) = (__T249); (((__T253.variant).try_block).rtinfo) = ((void *)0LL); (((__T253.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T253.variant).try_block).setjmp_buffer)))) == 0)
{; _ZNSs13_S_copy_charsEPcS_S_((_ZNSs4_Rep10_M_refdataEv(__cuda_local_var_91903_8_non_const___r)), __beg, __end); }

else  { __exception_caught();
_ZNSs4_Rep10_M_destroyERKSaIcE(__cuda_local_var_91903_8_non_const___r, __a);
__rethrow();
} __curr_eh_stack_entry = (__T253.next); }
_ZNSs4_Rep26_M_set_length_and_sharableEm(__cuda_local_var_91903_8_non_const___r, __cuda_local_var_91900_18_non_const___dnew);
return _ZNSs4_Rep10_M_refdataEv(__cuda_local_var_91903_8_non_const___r);
}
# 181 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) struct _ZNSs4_RepE *_ZNSs4_Rep12_S_empty_repEv(void)
{



 void *__cuda_local_var_90477_10_non_const___p;
# 186 "/usr/include/c++/4.8/bits/basic_string.h" 3
__cuda_local_var_90477_10_non_const___p = ((void *)_ZNSs4_Rep20_S_empty_rep_storageE);
return (struct _ZNSs4_RepE *)__cuda_local_var_90477_10_non_const___p;
}
__asm__(".align 2");
# 203 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep15_M_set_sharableEv( struct _ZNSs4_RepE *const this)
{  int __T254;
# 204 "/usr/include/c++/4.8/bits/basic_string.h" 3
((this->__b_NSs9_Rep_baseE)._M_refcount) = 0; { if (!(this)) { __T254 = 0; }  } }
__asm__(".align 2");

extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep26_M_set_length_and_sharableEm( struct _ZNSs4_RepE *const this,  _ZNSs9size_typeE __n)
{  int __T255;

if (__builtin_expect(((long)(this != (_ZNSs4_Rep12_S_empty_repEv()))), 0L))

{
_ZNSs4_Rep15_M_set_sharableEv(this);
((this->__b_NSs9_Rep_baseE)._M_length) = __n;
_ZNSt11char_traitsIcE6assignERcRKc(((_ZNSs4_Rep10_M_refdataEv(this)) + __n), (&_ZNSs4_Rep11_S_terminalE));


} { if (!(this)) { __T255 = 0; }  }
}
__asm__(".align 2");

extern __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) char *_ZNSs4_Rep10_M_refdataEv( struct _ZNSs4_RepE *const this)
{  int __T256;
# 223 "/usr/include/c++/4.8/bits/basic_string.h" 3
{ if (!(this)) { __T256 = 0; } return (char *)(this + 1); } }
__asm__(".align 2");
# 237 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs4_Rep10_M_disposeERKSaIcE( struct _ZNSs4_RepE *const this,  const struct _ZSaIcE *__a)
{  int __T257;

if (__builtin_expect(((long)(this != (_ZNSs4_Rep12_S_empty_repEv()))), 0L))

{

;
if ((_ZN9__gnu_cxx27__exchange_and_add_dispatchEPii((&((this->__b_NSs9_Rep_baseE)._M_refcount)), (-1))) <= 0)

{
;
_ZNSs4_Rep10_M_destroyERKSaIcE(this, __a);
}
} { if (!(this)) { __T257 = 0; }  }
}
__asm__(".align 2");
# 274 "/usr/include/c++/4.8/bits/basic_string.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderC1EPcRKSaIcE( struct _ZNSs12_Alloc_hiderE *const this,  char *__dat,  const struct _ZSaIcE *__a)
{ _ZNSaIcEC2ERKS_(((struct _ZSaIcE *)this), __a); (this->_M_p) = __dat;  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderC2EPcRKSaIcE( struct _ZNSs12_Alloc_hiderE *const this,  char *__T258,  const struct _ZSaIcE *__T259) {  _ZNSs12_Alloc_hiderC1EPcRKSaIcE(this, __T258, __T259);  }
__asm__(".align 2");
# 272 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSs12_Alloc_hiderD1Ev */ __inline__ __attribute__((__nothrow__)) __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderD1Ev( struct _ZNSs12_Alloc_hiderE *const this) {  { _ZNSaIcED2Ev(((struct _ZSaIcE *)this)); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSs12_Alloc_hiderD2Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSs12_Alloc_hiderD2Ev( struct _ZNSs12_Alloc_hiderE *const this) {  _ZNSs12_Alloc_hiderD1Ev(this);  }
__asm__(".align 2");
# 197 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this)
{  (this->__vptr) = (_ZTVSt15basic_streambufIcSt11char_traitsIcEE + 2); { _ZNSt6localeD1Ev((&(this->_M_buf_locale))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 463 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEEC1Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this)



{  (this->__vptr) = (_ZTVSt15basic_streambufIcSt11char_traitsIcEE + 2); (this->_M_in_beg) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); (this->_M_in_cur) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); (this->_M_in_end) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); (this->_M_out_beg) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); (this->_M_out_cur) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); (this->_M_out_end) = ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL); _ZNSt6localeC1Ev((&(this->_M_buf_locale)));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  _ZNSt15basic_streambufIcSt11char_traitsIcEEC1Ev(this);  }
__asm__(".align 2");
# 488 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv( const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  int __T260;
# 488 "/usr/include/c++/4.8/streambuf" 3
{ if (!(this)) { __T260 = 0; } return this->_M_in_end; } }
__asm__(".align 2");
# 529 "/usr/include/c++/4.8/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv( const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  int __T261;
# 529 "/usr/include/c++/4.8/streambuf" 3
{ if (!(this)) { __T261 = 0; } return this->_M_out_beg; } }
__asm__(".align 2");

extern __inline__ __attribute__((visibility("default"))) _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv( const struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  int __T262;
# 532 "/usr/include/c++/4.8/streambuf" 3
{ if (!(this)) { __T262 = 0; } return this->_M_out_cur; } }
__asm__(".align 2");
# 131 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSt8ios_base7iostateE _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv( const struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this)
{  int __T263;
# 132 "/usr/include/c++/4.8/bits/basic_ios.h" 3
{ if (!(this)) { __T263 = 0; } return (this->__b_St8ios_base)._M_streambuf_state; } }
__asm__(".align 2");
# 151 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this,  _ZNSt8ios_base7iostateE __state)
{  int __T264;
# 152 "/usr/include/c++/4.8/bits/basic_ios.h" 3
_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(this, (_ZStorSt12_Ios_IostateS_((_ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv(((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)this))), __state))); { if (!(this)) { __T264 = 0; }  } }
__asm__(".align 2");
# 276 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); { _ZNSt8ios_baseD2Ev((&(this->__b_St8ios_base))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 454 "/usr/include/c++/4.8/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this)


{ _ZNSt8ios_baseC2Ev((&(this->__b_St8ios_base))); ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); (this->_M_tie) = ((struct _ZSo *)0LL); (this->_M_fill) = ((_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE)0); (this->_M_fill_init) = ((char)0); (this->_M_streambuf) = ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL); (this->_M_ctype) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *)0LL); (this->_M_num_put) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *)0LL); (this->_M_num_get) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *)0LL);  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(this);  }
__asm__(".align 2");
# 93 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD2Ev( struct _ZSo *const this,  const long *const *__T265) {  (this->__vptr) = (*__T265); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T265 + 1UL));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD0Ev( struct _ZSo *const this) {  _ZNSoD1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD1Ev( struct _ZSo *const this) {  const long *const *__T266;
__T266 = (_ZTTSo); _ZNSoD2Ev(this, __T266);
# 93 "/usr/include/c++/4.8/ostream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEED2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
# 192 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEj( struct _ZSo *const this,  unsigned __n)
{  int __T267;
# 193 "/usr/include/c++/4.8/ostream" 3
{


if (!(this)) { __T267 = 0; } return _ZNSo9_M_insertImEERSoT_(this, ((unsigned long)__n)); }
}
__asm__(".align 2");
# 224 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEf( struct _ZSo *const this,  float __f)
{  int __T268;
# 225 "/usr/include/c++/4.8/ostream" 3
{


if (!(this)) { __T268 = 0; } return _ZNSo9_M_insertIdEERSoT_(this, ((double)__f)); }
}
__asm__(".align 2");
# 384 "/usr/include/c++/4.8/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoC2Ev( struct _ZSo *const this,  const long *const *__T269)
{  (this->__vptr) = (*__T269); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T269 + 1UL)); _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)]))), ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSoC1Ev( struct _ZSo *const this) {  const long *const *__T270;
__T270 = (_ZTTSo); (this->__vptr) = (*__T270);
# 385 "/usr/include/c++/4.8/ostream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); _ZNSoC2Ev(this, __T270);  }
__asm__(".align 2");
# 103 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev( struct _ZSi *const this,  const long *const *__T271)
{  (this->__vptr) = (*__T271); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T271 + 1UL)); (this->_M_gcount) = 0L;  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev( struct _ZSi *const this) {  _ZNSiD1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev( struct _ZSi *const this) {  const long *const *__T272;
__T272 = (_ZTTSi); _ZNSiD2Ev(this, __T272);
# 104 "/usr/include/c++/4.8/istream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEED2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
# 606 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiC2Ev( struct _ZSi *const this,  const long *const *__T273)

{  (this->__vptr) = (*__T273); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T273 + 1UL)); (this->_M_gcount) = 0L; _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)]))), ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiC1Ev( struct _ZSi *const this) {  const long *const *__T274;
__T274 = (_ZTTSi); (this->__vptr) = (*__T274);
# 608 "/usr/include/c++/4.8/istream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); _ZNSiC2Ev(this, __T274);  }
__asm__(".align 2");
# 827 "/usr/include/c++/4.8/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD2Ev( struct _ZSd *const this,  const long *const *__T275) {  ((this->__b_Si).__vptr) = (*__T275); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T275 + 5UL)); (((*(struct _ZSo *)&(this->__b_So))).__vptr) = (*(__T275 + 6UL)); { _ZNSoD2Ev((((struct _ZSo *)&(this->__b_So))), (__T275 + 3UL)); _ZNSiD2Ev(((struct _ZSi *)this), (__T275 + 1UL)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD0Ev( struct _ZSd *const this) {  _ZNSdD1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSdD1Ev( struct _ZSd *const this) {  const long *const *__T276;
__T276 = (_ZTTSd); _ZNSdD2Ev(this, __T276);
# 827 "/usr/include/c++/4.8/istream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEED2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)));  }
__asm__(".align 2");

extern __inline__ __attribute__((visibility("default"))) void _ZNSdC2Ev( struct _ZSd *const this,  const long *const *__T277)
{ _ZNSiC2Ev(((struct _ZSi *)this), (__T277 + 1UL)); _ZNSoC2Ev((((struct _ZSo *)&(this->__b_So))), (__T277 + 3UL)); ((this->__b_Si).__vptr) = (*__T277); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T277 + 5UL)); (((*(struct _ZSo *)&(this->__b_So))).__vptr) = (*(__T277 + 6UL));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSdC1Ev( struct _ZSd *const this) {  const long *const *__T278;
__T278 = (_ZTTSd); ((this->__b_Si).__vptr) = (*__T278);
# 831 "/usr/include/c++/4.8/istream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); _ZNSdC2Ev(this, __T278);  }
__asm__(".align 2");
# 219 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this)
{  ((this->__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(this); { _ZNSt12__basic_fileIcED1Ev((&(this->_M_file))); _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 625 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const long *const *__T279)
{ _ZNSoC2Ev(((struct _ZSo *)this), (__T279 + 1UL)); ((this->__b_So).__vptr) = (*__T279); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T279 + 3UL)); _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev((&(this->_M_filebuf))); _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), (&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T280;
__T280 = (_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE); ((this->__b_So).__vptr) = (*__T280);
# 626 "/usr/include/c++/4.8/fstream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2Ev(this, __T280);  }
__asm__(".align 2");
# 673 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const long *const *__T281)
{  ((this->__b_So).__vptr) = (*__T281); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T281 + 3UL)); { _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev((&(this->_M_filebuf))); _ZNSoD2Ev(((struct _ZSo *)this), (__T281 + 1UL)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED0Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this) {  _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T282;
__T282 = (_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE); _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev(this, __T282);
# 674 "/usr/include/c++/4.8/fstream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEED2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
# 713 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const char *__s, 
_ZNSt8ios_base8openmodeE __mode)
{  int __T283;
if (!(_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&(this->_M_filebuf)), __s, (_ZStorSt13_Ios_OpenmodeS_(__mode, _ZSt6_S_out))))) {
_ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)4)); } else  {



_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)0)); } { if (!(this)) { __T283 = 0; }  }
}
__asm__(".align 2");
# 753 "/usr/include/c++/4.8/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this)
{  int __T284;
if (!(_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv((&(this->_M_filebuf))))) {
_ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)4)); } { if (!(this)) { __T284 = 0; }  }
}
__asm__(".align 2");
# 98 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode( struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this,  _ZNSt8ios_base8openmodeE __mode)

{ _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))); ((this->__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt15basic_stringbufIcSt11char_traitsIcESaIcEE + 2); (this->_M_mode) = __mode; _ZNSsC1Ev((&(this->_M_string)));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode( struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this,  _ZNSt8ios_base8openmodeE __T285) {  _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode(this, __T285);  }
__asm__(".align 2");
# 126 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSt15basic_stringbufIcSt11char_traitsIcESaIcEE3strEv( _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE *__T286,  const struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this)
{  int __T287;
_ZNSsC1Ev(__T286);
if (_ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))))
{

if ((_ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE)))) > (_ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))))) {  _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE __T288;
 struct _ZSaIcE __T289;
# 133 "/usr/include/c++/4.8/sstream" 3
((_ZNSsaSERKSs(__T286, ((_ZNSsC1IPcEET_S1_RKSaIcE((&__T288), (_ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE)))), (_ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE)))), ((_ZNSaIcEC1Ev((&__T289))) , (((const struct _ZSaIcE *)&__T289))))) , (((const struct _ZSs *)&__T288))))) , (void)(_ZNSsD1Ev((&__T288)))) , (void)(_ZNSaIcED1Ev((&__T289))); } else  {  _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEE13__string_typeE __T290;
 struct _ZSaIcE __T291;
((_ZNSsaSERKSs(__T286, ((_ZNSsC1IPcEET_S1_RKSaIcE((&__T290), (_ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE)))), (_ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE)))), ((_ZNSaIcEC1Ev((&__T291))) , (((const struct _ZSaIcE *)&__T291))))) , (((const struct _ZSs *)&__T290))))) , (void)(_ZNSsD1Ev((&__T290)))) , (void)(_ZNSaIcED1Ev((&__T291))); }
} else  {

_ZNSsaSERKSs(__T286, (&(this->_M_string))); } {
if (!(this)) { __T287 = 0; } return; }
}
__asm__(".align 2");
# 93 "/usr/include/c++/4.8/iosfwd" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev( struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this) {  ((this->__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt15basic_stringbufIcSt11char_traitsIcESaIcEE + 2); { _ZNSsD1Ev((&(this->_M_string))); _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED0Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED0Ev( struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this) {  _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED2Ev */ __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED2Ev( struct _ZSt15basic_stringbufIcSt11char_traitsIcESaIcEE *const this) {  _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev(this);  }
__asm__(".align 2");
# 537 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode( struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this,  const long *const *__T292,  _ZNSt8ios_base8openmodeE __m)

{ _ZNSdC2Ev(((struct _ZSd *)this), (__T292 + 1UL)); (((this->__b_Sd).__b_Si).__vptr) = (*__T292); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((((this->__b_Sd).__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T292 + 8UL)); (((*(struct _ZSo *)&(((*(struct _ZSd *)this)).__b_So))).__vptr) = (*(__T292 + 9UL)); _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode((&(this->_M_stringbuf)), __m); _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((((this->__b_Sd).__b_Si).__vptr)[(-3L)]))), (&((this->_M_stringbuf).__b_St15basic_streambufIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode( struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this,  _ZNSt8ios_base8openmodeE __T293) {  const long *const *__T294;
__T294 = (_ZTTSt18basic_stringstreamIcSt11char_traitsIcESaIcEE); (((this->__b_Sd).__b_Si).__vptr) = (*__T294);
# 539 "/usr/include/c++/4.8/sstream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode(this, __T294, __T293);  }
__asm__(".align 2");
# 564 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev( struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this,  const long *const *__T295)
{  (((this->__b_Sd).__b_Si).__vptr) = (*__T295); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((((this->__b_Sd).__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T295 + 8UL)); (((*(struct _ZSo *)&(((*(struct _ZSd *)this)).__b_So))).__vptr) = (*(__T295 + 9UL)); { _ZNSt15basic_stringbufIcSt11char_traitsIcESaIcEED1Ev((&(this->_M_stringbuf))); _ZNSdD2Ev(((struct _ZSd *)this), (__T295 + 1UL)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED0Ev( struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this) {  _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev(this); _ZdlPv(((void *)this));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev( struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this) {  const long *const *__T296;
__T296 = (_ZTTSt18basic_stringstreamIcSt11char_traitsIcESaIcEE); _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev(this, __T296);
# 565 "/usr/include/c++/4.8/sstream" 3
_ZNSt9basic_iosIcSt11char_traitsIcEED2Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)));  }
__asm__(".align 2");
# 583 "/usr/include/c++/4.8/sstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv( _ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEE13__string_typeE *__T297,  const struct _ZSt18basic_stringstreamIcSt11char_traitsIcESaIcEE *const this)
{  int __T298;
# 584 "/usr/include/c++/4.8/sstream" 3
{ _ZNKSt15basic_stringbufIcSt11char_traitsIcESaIcEE3strEv(__T297, (&(this->_M_stringbuf))); if (!(this)) { __T298 = 0; } return; } }
__asm__(".align 2");
# 79 "/usr/include/c++/4.8/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC1Ev */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcEC1Ev( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcEC2Ev( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this) {  _ZN9__gnu_cxx13new_allocatorIcEC1Ev(this);  }
__asm__(".align 2");
# 81 "/usr/include/c++/4.8/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC1ERKS1_ */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcEC1ERKS1_( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this,  const struct _ZN9__gnu_cxx13new_allocatorIcEE *__T299) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcEC2ERKS1_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcEC2ERKS1_( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this,  const struct _ZN9__gnu_cxx13new_allocatorIcEE *__T2100) {  _ZN9__gnu_cxx13new_allocatorIcEC1ERKS1_(this, __T2100);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcED1Ev */ __inline__ __attribute__((__nothrow__)) void _ZN9__gnu_cxx13new_allocatorIcED1Ev( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorIcED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorIcED2Ev( struct _ZN9__gnu_cxx13new_allocatorIcEE *const this) {  _ZN9__gnu_cxx13new_allocatorIcED1Ev(this);  }
__asm__(".align 2");
# 9460 "../src/CImg.h"
 __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library4CImgIhED1Ev */ __inline__ void _ZN12cimg_library4CImgIhED1Ev( struct _ZN12cimg_library4CImgIhEE *const this) {
if (!(this->_is_shared)) { _ZdaPv(((void *)(this->_data))); } 
}
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library4CImgIhED2Ev */ __inline__ void _ZN12cimg_library4CImgIhED2Ev( struct _ZN12cimg_library4CImgIhEE *const this) {  _ZN12cimg_library4CImgIhED1Ev(this);  }
__asm__(".align 2");
# 44519 "../src/CImg.h"
 __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library8CImgListIhED1Ev */ __inline__ void _ZN12cimg_library8CImgListIhED1Ev( struct _ZN12cimg_library8CImgListIhEE *const this) {
__cxa_vec_delete((this->_data), 32UL, 8UL, _ZN12cimg_library4CImgIhED1Ev); 
}
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN12cimg_library8CImgListIhED2Ev */ __inline__ void _ZN12cimg_library8CImgListIhED2Ev( struct _ZN12cimg_library8CImgListIhEE *const this) {  _ZN12cimg_library8CImgListIhED1Ev(this);  }
# 119 "/usr/include/c++/4.8/bits/ios_base.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZStorSt13_Ios_OpenmodeS_ */ __inline__ __attribute__((visibility("default"))) enum _ZSt13_Ios_Openmode _ZStorSt13_Ios_OpenmodeS_( enum _ZSt13_Ios_Openmode __a,  enum _ZSt13_Ios_Openmode __b)
{ return (enum _ZSt13_Ios_Openmode)(((int)__a) | ((int)__b)); }
# 157 "/usr/include/c++/4.8/bits/ios_base.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZStorSt12_Ios_IostateS_ */ __inline__ __attribute__((visibility("default"))) enum _ZSt12_Ios_Iostate _ZStorSt12_Ios_IostateS_( enum _ZSt12_Ios_Iostate __a,  enum _ZSt12_Ios_Iostate __b)
{ return (enum _ZSt12_Ios_Iostate)(((int)__a) | ((int)__b)); }
# 530 "/usr/include/c++/4.8/ostream" 3
extern __inline__ struct _ZSo *_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc( struct _ZSo *__out,  const char *__s)
{
if (!(__s)) {
_ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate(((__out) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__out) + ((__out->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)), ((_ZNSt8ios_base7iostateE)1)); } else  {

_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__out, __s, ((_ZSt10streamsize)(_ZNSt11char_traitsIcE6lengthEPKc(__s)))); }

return __out;
}
# 692 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_ */ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_( struct _ZSs *__T2101,  const char *__lhs, 
const struct _ZSs *__rhs)
{



 _ZZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_E11__size_type_64462 __cuda_local_var_92432_25_non_const___len;
# 695 "/usr/include/c++/4.8/bits/basic_string.tcc" 3
;


__cuda_local_var_92432_25_non_const___len = (_ZNSt11char_traitsIcE6lengthEPKc(__lhs));
_ZNSsC1Ev(__T2101);
_ZNSs7reserveEm(__T2101, (__cuda_local_var_92432_25_non_const___len + (_ZNKSs4sizeEv(__rhs))));
_ZNSs6appendEPKcm(__T2101, __lhs, __cuda_local_var_92432_25_non_const___len);
_ZNSs6appendERKSs(__T2101, __rhs);
return;
}
# 2402 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_ */ __inline__ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_( struct _ZSs *__T2102,  const struct _ZSs *__lhs, 
const char *__rhs)
{
_ZNSsC1ERKSs(__T2102, __lhs);
_ZNSs6appendEPKc(__T2102, __rhs);
return;
}
# 2365 "/usr/include/c++/4.8/bits/basic_string.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_ */ void _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_( struct _ZSs *__T2103,  const struct _ZSs *__lhs, 
const struct _ZSs *__rhs)
{
_ZNSsC1ERKSs(__T2103, __lhs);
_ZNSs6appendERKSs(__T2103, __rhs);
return;
}
# 133 "/usr/include/c++/4.8/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSteqIcEbRKSaIT_ES3_ */ __inline__ char _ZSteqIcEbRKSaIT_ES3_( const struct _ZSaIcE *__T2104,  const struct _ZSaIcE *__T2105)
{ return ((char)1); }
# 114 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_ */ __inline__ _ZNSt15iterator_traitsIPcE15difference_typeE _ZSt8distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__first,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__last)
{

return _ZSt10__distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag(__first, __last, (_ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_((((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *const *)&__first)))));

}
# 201 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_ */ __inline__ _ZNSt15iterator_traitsIPcE17iterator_categoryE _ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *const *__T2106)
{  _ZNSt15iterator_traitsIPcE17iterator_categoryE __T2107;
# 202 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3
return __T2107; }
# 90 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt10__distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag */ __inline__ _ZNSt15iterator_traitsIPcE15difference_typeE _ZSt10__distanceIPcENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__first,  _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__last,  struct _ZSt26random_access_iterator_tag __T2108)

{



return __last - __first;
}
# 48 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx18__exchange_and_addEPVii( volatile _Atomic_word *__mem,  int __val)
{ return (int)(__atomic_fetch_add_4(((volatile void *)__mem), ((unsigned)__val), 4)); }
# 65 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx25__exchange_and_add_singleEPii( _Atomic_word *__mem,  int __val)
{
 _Atomic_word __cuda_local_var_89619_18_non_const___result;
# 67 "/usr/include/c++/4.8/ext/atomicity.h" 3
__cuda_local_var_89619_18_non_const___result = (*__mem);
(*__mem) += __val;
return __cuda_local_var_89619_18_non_const___result;
}
# 78 "/usr/include/c++/4.8/ext/atomicity.h" 3
static __inline__ __attribute__((__unused__)) __attribute__((visibility("default"))) _Atomic_word _ZN9__gnu_cxx27__exchange_and_add_dispatchEPii( _Atomic_word *__mem,  int __val)
{

if (_Z18__gthread_active_pv()) {
return _ZN9__gnu_cxx18__exchange_and_addEPVii(((volatile _Atomic_word *)__mem), __val); } else  {

return _ZN9__gnu_cxx25__exchange_and_add_singleEPii(__mem, __val); }



}
# 150 "/usr/include/c++/4.8/ext/type_traits.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx17__is_null_pointerIcEEbPT_ */ __inline__ char _ZN9__gnu_cxx17__is_null_pointerIcEEbPT_( _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *__ptr)
{ return (char)(__ptr == ((_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *)0LL)); }
static void __sti___16_CUDA_HOG_cpp1_ii_04c76ffe(void) {
# 74 "/usr/include/c++/4.8/iostream" 3
_ZNSt8ios_base4InitC1Ev((&__nv_static_29__16_CUDA_HOG_cpp1_ii_04c76ffe__ZSt8__ioinit)); __cxa_atexit(_ZNSt8ios_base4InitD1Ev, ((void *)(&__nv_static_29__16_CUDA_HOG_cpp1_ii_04c76ffe__ZSt8__ioinit)), (&__dso_handle));  }

#include "CUDA_HOG.cudafe1.stub.c"
