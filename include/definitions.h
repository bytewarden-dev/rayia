
#ifndef FS_DEFINITIONS_H
#define FS_DEFINITIONS_H

static constexpr auto STATUS_NAME = "The WS2812 LEDriver";

static constexpr auto STATUS_VERSION = "2.2";
static constexpr auto STATUS_DEVELOPERS = "The Duwles AVR";
#define __FIRMWARE_VERSION__            "2.2.7811"

// ============================
//    Wykrywanie kompilatora
// ============================
//
#ifndef OXY_COMPILER

#if defined(__clang__)
    #define OXY_COMPILER "Clang version: " __clang_version__
#elif defined(__GNUC__)
    #define OXY_COMPILER "GCC version: " __VERSION__
#elif defined(_MSC_VER)
    #define OXY_COMPILER "Microsoft Visual C++ version: " _MSC_VER
#elif defined(__INTEL_COMPILER)
    #define OXY_COMPILER "Intel C++ Compiler version: " __INTEL_COMPILER
#else
    #define OXY_COMPILER "Unknown compiler"
#endif

#endif // !OXY_COMPILER

// ==============================
//	  Wykrywanie standardu C++
// ==============================
//
#ifndef __STDCPP_V__
#if __cplusplus == 199711L
    #define __STDCPP_V__ "C++98"
#elif __cplusplus == 201103L
    #define __STDCPP_V__ "C++11"
#elif __cplusplus == 201402L
    #define __STDCPP_V__ "C++14"
#elif __cplusplus == 201703L
    #define __STDCPP_V__ "C++17"
#elif __cplusplus >= 202002L
    #define __STDCPP_V__ "C++20"
#else
    #define __STDCPP_V__ "Unknown standard C++"
#endif // __cplusplus
#endif // !__STDCPP_V__

#ifndef __FUNCTION__
#define __FUNCTION__ __func__
#endif

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif


#endif // FS_DEFINITIONS_H
