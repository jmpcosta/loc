// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a Bourne shell family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_BOURNE_HH_
#define LOC_LANGUAGE_FAMILY_BOURNE_HH_

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


/// @brief Class responsible for implementing a language for the Bourne shell family of languages
class language_family_bourne : public language
{
public:

protected:
		/// @brief Class constructor
		language_family_bourne();

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_BOURNE_HH_
