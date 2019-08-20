// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the DOS scripting programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_DOS_HH_
#define LOC_LANGUAGE_DOS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language_dos : public language
{
public:
					language_dos	( void );

		bool		isExtension	( const t_char * ext 	);
		bool		isExtension	( const t_string & ext	);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_DOS_HH_
