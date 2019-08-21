// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a SGML family of programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FAMILY_SGML_HH_
#define LOC_LANGUAGE_FAMILY_SGML_HH_

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



class language_family_sgml : public language
{
public:
		language_family_sgml();

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_FAMILY_SGML_HH_
