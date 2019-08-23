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



class language_javascript : public language_family_ecma
{
public:
								language_javascript	( void				);

		static	bool			isExtension			( const char * ext	);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_JAVASCRIPT_HH_
