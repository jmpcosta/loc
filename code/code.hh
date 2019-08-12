// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the command line arguments
//
// *****************************************************************************************

#ifndef LOC_INSIGHT_HH_
#define LOC_INSIGHT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstdint>
#include <iostream>

// Import application headers
#include "trace_macros.hh"
#include "options.hh"
#include "file.hh"
#include "fileSet.hh"
#include "language.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************






class code
{
public:
						code			();
						~code			() {}

		void			insight			( progOptions & options, fileSet * files		);
		void			loc				( file * fl										);


private:
		// Methods
		bool			hasInformation	( const char * str, std::size_t len 			);
		void			parse			( std::ifstream & sourceFile					);

		void			processLine		( std::string & line							);
		void			search			( std::string & line, std::size_t start			);
		void			endComment		( std::string & line, std::size_t start			);
		void			beginComment	( std::string & line, std::size_t start			);

		// Variables
		language *		p_lang;
		bool			codeAvailable;
		bool			commentOpen;
		statistics		iStats;

		TRACE_CLASSNAME_DECLARATION

};

#endif // LOC_INSIGHT_HH_
