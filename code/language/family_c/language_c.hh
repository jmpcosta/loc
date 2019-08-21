// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_C_HH_
#define LOC_LANGUAGE_C_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_c/language_family_c.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language_c : public language_family_c
{
public:
						language_c	( void );

		bool			isExtension	( const char * ext			);
		bool			isExtension	( const std::string & ext	);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_C_HH_
