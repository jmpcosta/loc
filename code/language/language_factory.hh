// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the declarations for a programming language factory.
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FACTORY_HH_
#define LOC_LANGUAGE_FACTORY_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import project headers
#include "trace_macros.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class language_factory
{
public:

	static language *	build		( languageType lang					);

	static languageType		getLanguage	( const std::string & fileExtension	);
	static languageType		getLanguage	( const char *        fileExtension	);

private:

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_LANGUAGE_FACTORY_HH_
