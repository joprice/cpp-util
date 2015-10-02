
/**
 * When compiling with unused wraningsenabled, along with -Werror, a function can be wrapped in this macro
 * to silence the error. This avoids having to remove or comment out the function and everything it calls, 
 * or having to disabled the warning all together.
 **/

#define STRINGIFY(a) #a

#if __clang__
#define UNUSED(f)  \
    _Pragma(STRINGIFY(clang diagnostic push)) \
 _Pragma(STRINGIFY(clang diagnostic ignored "-Wunused-function")) \
 f \
 _Pragma(STRINGIFY(clang diagnostic pop))
#else
#define UNUSED(f) 
#endif


