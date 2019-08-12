// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the file extensions API
//
// *****************************************************************************************

#ifndef LOC_EXTENSIONS_HH_
#define LOC_EXTENSIONS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "languageType.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

class fileExtensions
{
public:
		static	languageType get_language( const std::string & filename );
		static	languageType get_language( const char * filename 		);

private:

		// Variables
		TRACE_CLASSNAME_DECLARATION
};

#endif // LOC_EXTENSIONS_HH_
