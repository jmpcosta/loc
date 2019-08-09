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
#include "languageType.hh"
#include "statistics.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class file
{
public:
								~file		( void );
		const std::string &		getName		( void ) const { return iName; };
		void 					insight		( void );

								// Factory method
		static file  *			builder		( const std::string & pathname );

private:

								file		( const std::string & filename );

		std::string				iName;
		languageType			iLang;
		code::statistics		iStats;
};




#endif // LOC_FILE_HH_
