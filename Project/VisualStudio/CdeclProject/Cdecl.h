#pragma once

#ifdef DYNAMIC_EXPORT
#define _API_ __declspec(dllexport)
#else
#define _API_ __declspec(dllimport)
#endif

#ifdef STATIC_LIBRARY
#define EAPI// int
#else
#define EAPI/* extern "C"*/ _API_
#endif //STATIC_LIBRARY

/*#define CALLTYPE */

EAPI int __cdecl add(int a, int b);

EAPI void func();

EAPI int func2(float a, double b, bool c);
