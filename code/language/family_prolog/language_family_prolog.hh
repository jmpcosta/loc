// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a Prolog family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_PROLOG_HH_
#define LOC_LANGUAGE_FAMILY_PROLOG_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "trace_macros.hh"
#include "language/language.hh"



// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a language of the C family
class language_family_prolog : public language
{
public:
		/// @brief Class constructor
		language_family_prolog();

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_PROLOG_HH_
