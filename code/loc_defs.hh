// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions of the Monkey project
//
// *****************************************************************************************

#ifndef LOC_DEFS_HH_
#define LOC_DEFS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************

#if defined(OS_LINUX) || defined(__linux__) || defined(LINUX)

 #define OS_LINUX		1
 #define MONKEY_MAIN	main
 #define t_char			char

#elif defined(OS_WINDOWS) || defined(_WIN32) || defined(_WIN64)

 #define OS_WINDOWS		1
 #define MONKEY_MAIN	wmain
 #define t_char			wchar_t

#endif

#endif // LOC_DEFS_HH_
