#pragma once

#ifdef SL_PLATFORM_WINDOWS
    #ifdef SL_BUILD_DLL
        #define SALEM_API __declspec(dllexport)
    #else
        #define SALEM_API __declspec(dllimport)
    #endif
#else
    #error Salem only support windows!
#endif