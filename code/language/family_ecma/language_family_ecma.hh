// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for an ECMAScript family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_ECMA_HH_
#define LOC_LANGUAGE_FAMILY_ECMA_HH_

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



class language_family_ecma : public language
{
public:
		language_family_ecma();

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_ECMA_HH_
