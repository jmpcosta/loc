// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the DOS scripting programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_DOS_HH_
#define LOC_LANGUAGE_DOS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a BATCH language
class language_batch : public language
{
public:
		/// @brief Class constructor
								language_batch	( void 				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_DOS_HH_
