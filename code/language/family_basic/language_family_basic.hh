// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a BASIC family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_BASIC_HH_
#define LOC_LANGUAGE_FAMILY_BASIC_HH_

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


/// @brief Class responsible for implementing a language of the Algol family
class language_family_basic : public language
{
public:
		/// @brief Class constructor
		language_family_basic() {}

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_BASIC_HH_
