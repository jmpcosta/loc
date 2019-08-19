// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the powershell scripting language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_POWERSHELL_HH_
#define LOC_LANGUAGE_POWERSHELL_HH_

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



class language_powershell : public language
{
public:
					language_powershell	( void );

		bool		isExtension	( const char * ext 			);
		bool		isExtension	( const std::string & ext	);


private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_POWERSHELL_HH_
