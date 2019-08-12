// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions for the program arguments
//
// *****************************************************************************************

#ifndef LOC_OPTIONS_HH_
#define LOC_OPTIONS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "languageType.hh"


// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************



class progOptions
{
public:
								progOptions		()								{ language = languageType::autodetect; pathname = "."; }
								~progOptions	()								{}

		void 					setLanguage		( languageType lang )			{ language = lang; }
		languageType			getLanguage		( void ) const           		{ return language; }

		void 					setPath			( const std::string & path )   	{ pathname = path; }
		void 					setPath			( const t_char * path      )   	{ pathname = path; }
		const std::string & 	getPath			( void ) const         		  	{ return pathname; }

private:

		languageType			language;
		std::string				pathname;

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_OPTIONS_HH_
