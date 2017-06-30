#ifndef COMMON_DEFINE_H
#define COMMON_DEFINE_H

#ifdef TRINITY_API_USE_DYNAMIC_LINKING
#  if TRINITY_COMPILER == TRINITY_COMPILER_MICROSOFT
#    define TC_API_EXPORT __declspec(dllexport)
#    define TC_API_IMPORT __declspec(dllimport)
#  elif TRINITY_COMPILER == TRINITY_COMPILER_GNU
#    define TC_API_EXPORT __attribute__((visibility("default")))
#    define TC_API_IMPORT
#  else
#    error compiler not supported!
#  endif
#else
#  define TC_API_EXPORT
#  define TC_API_IMPORT
#endif

#ifdef _WIN32
#  ifdef TRINITY_API_EXPORT_COMMON
#    define TC_COMMON_API TC_API_EXPORT
#  else
#    define TC_COMMON_API TC_API_IMPORT
#  endif
#else
#  define TC_COMMON_API
#endif

#endif