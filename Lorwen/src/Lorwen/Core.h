#pragma once


#ifdef LW_PLATFORM_WINDOWS
	#ifdef LW_BUILD_DLL
#define LORWEN_API __declspec(dllexport)
	#else
#define LORWEN_API __declspec(dllimport)
	#endif
#else
	#error Lorwen ONLY supports Windows!
#endif