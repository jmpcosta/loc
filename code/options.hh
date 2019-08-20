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

// Import own headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"


// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************



class progOptions
{
public:
								progOptions		();
								~progOptions	()								{}

		void 					setLanguage		( languageType lang )			{ language = lang;	}
		languageType			getLanguage		( void ) const           		{ return language;	}

		void 					setPath			( const t_string & path		)  	{ pathname = path;	}
		void 					setPath			( const t_char * path		)  	{ pathname = path;	}
		const t_string &	 	getPath			( void ) const         		  	{ return pathname;	}

		void					setVerbose		( bool verb )					{ iVerbose = verb;	}
		bool					isVerbose		( void 		)					{ return iVerbose;	}

private:

		languageType			language;
		t_string				pathname;
		bool					iVerbose;

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_OPTIONS_HH_
