// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_TCL_HH_
#define LOC_LANGUAGE_TCL_HH_

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
#include "language/family_bourne/language_family_bourne.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a TCL shell language
class language_tcl : public language_family_bourne
{
public:
		/// @brief Class constructor
							language_tcl 	( void 				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
