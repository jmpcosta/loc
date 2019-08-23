// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for handling the FS elements to be processed
//
// *****************************************************************************************

#ifndef LOC_FILE_HH_
#define LOC_FILE_HH_

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
#include "statistics.hh"
#include "language/languageType.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class file
{
public:
								~file			( void );
		const std::string &		getName			( void ) const	{ return iName;		}
		languageType			getLanguage		( void ) const	{ return iLang;		}
		statistics & 			getStatistics	( void ) 		{ return iStats;	}

		// Factory method
		static file  *			builder			( const std::string & pathname );

private:
								file			( const std::string & filename );

		std::string				iName;
		languageType			iLang;
		statistics				iStats;

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_FILE_HH_
