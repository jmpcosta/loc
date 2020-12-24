// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_MODULA_HH_
#define LOC_LANGUAGE_MODULA_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_pascal/language_family_pascal.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the Modula language
class language_modula : public language_family_pascal
{
public:
		/// @brief Class constructor
								language_modula	( void				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
