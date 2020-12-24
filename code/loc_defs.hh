// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions of the Lines of Code project
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

// *****************************************************************************************
// OS dependent
// *****************************************************************************************

#if defined(OS_LINUX) || defined(__linux__) || defined(LINUX)

 #define OS_LINUX				1
 #define LOC_MAIN				main
 #define t_char					char
 #define loc_cout				std::cout
 #define loc_cerr				std::cerr

#elif defined(OS_WINDOWS) || defined(_WIN32) || defined(_WIN64)

 #define OS_WINDOWS				1
 #define LOC_MAIN				wmain
 #define t_char					wchar_t
 #define loc_cout				std::wcout
 #define loc_cerr				std::wcerr

#endif



// *****************************************************************************************
// OS Independent
// *****************************************************************************************

#define		LOC_FILE_READ_BUFFER_SIZE	65000
#define		LOC_LANGUAGE_DEFAULT_SIZE	100		// Initial reserve capacity for languages

#define		LOC_SWITCH_DETAILS		"-d"
#define		LOC_SWITCH_OUTPUT_FILE	"-o"
#define		LOC_SWITCH_OUTPUT		"-t"

#define		LOC_OUTPUT_TYPE_TERM	"term"
#define		LOC_OUTPUT_TYPE_CSV		"csv"
#define		LOC_OUTPUT_TYPE_XML		"xml"

#define		LOC_EMPTY_STRING		""


// Most used expressions defined at the project level
constexpr const char	LOC_LINE_IGNORE_CHARS[]			= { ' ', '\t', '\0' };
constexpr const char *	LOC_TOKEN_DOUBLE_SLASH			= "//";
constexpr const char *	LOC_TOKEN_COMMENT_OPEN			= "/*";
constexpr const char *	LOC_TOKEN_COMMENT_CLOSE			= "*/";
constexpr const char *	LOC_TOKEN_COMMENT_HASH			= "#";
constexpr const char *	LOC_TOKEN_COMMENT_SEMICOLON		= ";";
constexpr const char *	LOC_TOKEN_COMMENT_DQUOTE		= "\"";
constexpr const char *	LOC_TOKEN_COMMENT_DHYFEN		= "--";
constexpr const char *	LOC_TOKEN_COMMENT_REM			= "rem";
constexpr const char *	LOC_TOKEN_COMENT_DBSLASH		= "\\";
constexpr const char *	LOC_TOKEN_COMENT_PARSTAR		= "(*";
constexpr const char *	LOC_TOKEN_COMENT_STARPAR		= "*)";

#endif // LOC_DEFS_HH_
