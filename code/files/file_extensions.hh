// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions of the known file extensions for programming languages
//
// *****************************************************************************************

#ifndef LOC_FILE_EXTENSIONS_HH_
#define LOC_FILE_EXTENSIONS_HH_

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

#define LOC_LANGUAGE_EXTENSIONS_MAX		20		// Max number of extensions strings in each language

#define LOC_LANGUAGE_C		{ ".c", ".h", ".hhh", nullptr 													}
#define LOC_LANGUAGE_CPP	{ ".c++", ".cc", ".cpp", ".hh", ".cls", ".cxx", ".h++", ".hpp", ".hxx", nullptr	}
#define LOC_LANGUAGE_JAVA	{ ".java", ".jav", nullptr														}
#define LOC_LANGUAGE_BASH	{ ".bash", nullptr																}
#define LOC_LANGUAGE_BOURNE	{ ".sh", nullptr																}
#define LOC_LANGUAGE_CSH	{ ".csh", nullptr																}

const char * file_extensions[][ LOC_LANGUAGE_EXTENSIONS_MAX ] = {
		LOC_LANGUAGE_C,
		LOC_LANGUAGE_CPP,
		LOC_LANGUAGE_JAVA,
		LOC_LANGUAGE_BASH,
		LOC_LANGUAGE_BOURNE,
		LOC_LANGUAGE_CSH,
		nullptr
};


#endif // LOC_FILE_EXTENSIONS_HH_
