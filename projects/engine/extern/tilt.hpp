#ifndef TILT_TILT_HPP
#define TILT_TILT_HPP

//
// Engine versioning
//

//
// Platform Identification
//
#if defined(__linux__)
#define OS_ID "Linux"
#elif defined(__FreeBSD__) // IDK, but why not support our friends using BSD?
#define OS_ID "FreeBSD"
#elif defined(_WIN32)
#define OS_ID "Windows"
#endif

//
// Compiler Identification
//

// https://stackoverflow.com/questions/28166565/detect-gcc-as-opposed-to-msvc-clang-with-macro

#if defined(__clang__)

#define COMPILER_ID "Clang"
#define COMPILER_VERSION_MAJOR __clang_major__
#define COMPILER_VERSION_MINOR __clang_minor__

#elif defined(__GNUC__) || defined(__GNUG__)

#define COMPILER_ID "GNU"
#define COMPILER_VERSION_MAJOR __GNUC__
#define COMPILER_VERSION_MINOR __GNUC_MINOR__

#elif defined(_MSC_VER)

#define COMPILER_ID "MSVC"
#define COMPILER_VERSION_MAJOR _MSC_VER
#define COMPILER_VERSION_MINOR 0

#endif

#ifndef COMPILER_ID
#define COMPILER_ID "Unknown"
#define COMPILER_VERSION_MAJOR 0
#define COMPILER_VERSION_MINOR 0
#endif

#endif
