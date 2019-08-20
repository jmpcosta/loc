// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_BASH_HH_
#define LOC_LANGUAGE_BASH_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/family_bourne/language_family_bourne.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language_bash : public language_family_bourne
{
public:
					language_bash	( void );

		bool		isExtension	( const t_char * ext	);
		bool		isExtension	( const t_string & ext	);


private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_BASH_HH_
