// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the JavaScript programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_JAVASCRIPT_HH_
#define LOC_LANGUAGE_JAVASCRIPT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_ecma/language_family_ecma.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a JavaScript language
class language_javascript : public language_family_ecma
{
public:
		/// @brief Class constructor
								language_javascript	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_JAVASCRIPT_HH_
