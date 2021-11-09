#ifndef TILT_TILT_HPP
#define TILT_TILT_HPP

//
// Engine versioning
//

//
// Preprocessors to identify the compiler
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
