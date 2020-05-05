// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a IDL family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_IDL_HH_
#define LOC_LANGUAGE_FAMILY_IDL_HH_

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
class language_family_idl : public language
{
public:
		/// @brief Class constructor
		language_family_idl();

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_IDL_HH_
