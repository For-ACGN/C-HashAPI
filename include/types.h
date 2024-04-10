#ifndef TYPES_H
#define TYPES_H

// reference basic types from Go
typedef char      int8;
typedef short     int16;
typedef int       int32;
typedef long long int64;

typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;
typedef unsigned long long uint64;

#ifdef _WIN64
    typedef int64  integer;
    typedef uint64 uint;
    typedef uint64 uintptr;
#elif _WIN32
    typedef int32  integer;
    typedef uint32 uint;
    typedef uint32 uintptr;
#endif

typedef float  float32;
typedef double float64;

typedef unsigned char byte;
typedef int32         rune;

#define TRUE  1
#define FALSE 0

#define NULL 0

// copy from <stdint.h>
#define INT8_MIN   (-127i8 - 1)
#define INT16_MIN  (-32767i16 - 1)
#define INT32_MIN  (-2147483647i32 - 1)
#define INT64_MIN  (-9223372036854775807i64 - 1)
#define INT8_MAX   127i8
#define INT16_MAX  32767i16
#define INT32_MAX  2147483647i32
#define INT64_MAX  9223372036854775807i64
#define UINT8_MAX  0xFFui8
#define UINT16_MAX 0xFFFFui16
#define UINT32_MAX 0xFFFFFFFFui32
#define UINT64_MAX 0xFFFFFFFFFFFFFFFFui64

#endif // TYPES_H
