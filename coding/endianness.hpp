#pragma once

#include "../base/base.hpp"

// #define ENDIAN_IS_BIG

inline bool IsBigEndian()
{
#ifdef ENDIAN_IS_BIG
  return true;
#else
  return false;
#endif
}

template <typename T> T ReverseByteOrder(T t)
{
  // TODO: Static check that T is primitive type
  T res;
  char const * a = reinterpret_cast<char const *>(&t);
  char * b = reinterpret_cast<char *>(&res);
  for (size_t i = 0; i < sizeof(T); ++i)
    b[i] = a[sizeof(T) - 1 - i];
  return res;
}

template <typename T> inline T SwapIfBigEndian(T t)
{
#ifdef ENDIAN_IS_BIG
  return ReverseByteOrder(t);
#else
  return t;
#endif
}
