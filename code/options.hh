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
#include "report/reportType.hh"


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

		void 					setPath			( const std::string & path	)  	{ pathname = path;	}
		void 					setPath			( const char * path			)	{ pathname = path;	}
		const std::string &	 	getPath			( void ) const         		  	{ return pathname;	}

		void					setVerbose		( bool verb )					{ iVerbose = verb;	}
		bool					isVerbose		( void 		)					{ return iVerbose;	}

		void					setFormat		( reportType type )				{ iType = type;		}
		reportType 				getFormat		( void )						{ return iType;		}

		void					setOutput		( const std::string name )		{ iName = name;		}
		std::string				getOutput		( void )	const				{ return iName;		}

private:

		languageType			language;
		std::string				pathname;
		bool					iVerbose;
		reportType				iType;
		std::string				iName;

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_OPTIONS_HH_
