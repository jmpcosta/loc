// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_CLOSURE_HH_
#define LOC_LANGUAGE_CLOSURE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_lisp/language_family_lisp.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the Closure language
class language_closure : public language_family_lisp
{
public:
		/// @brief Class constructor
								language_closure	( void				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
