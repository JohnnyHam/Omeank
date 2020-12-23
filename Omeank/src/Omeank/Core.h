#pragma once

#ifdef OKEG_PLATFORM_WINDOWS
	#ifdef OKEG_BUILD_DLL
		#define OKEG_API __declspec(dllexport)
	#else
		#define OKEG_API __declspec(dllimport)
	#endif // OK_BUILD_DLL
#else
	#error Omeank only supports Windos now!

#endif
