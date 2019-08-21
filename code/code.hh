// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the processing of a
//			programming language file.
//
// *****************************************************************************************

#ifndef LOC_CODE_HH_
#define LOC_CODE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstdint>
#include <iostream>

#include "files/file.hh"
#include "files/fileSet.hh"
#include "language/language.hh"
#include "trace_macros.hh"
#include "options.hh"


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


private:
		// Methods
		bool			hasInformation	( const char * str, std::size_t len 			);
		void			parse			( std::ifstream & sourceFile					);

		void			search			( std::string & line, std::size_t start			);
		void			endComment		( std::string & line, std::size_t start			);
		void			beginComment	( std::string & line, std::size_t start			);
		void			processLine		( std::string & line							);
		void			loc				( file * fl										);
		void			processFiles	( progOptions & options, fileSet * files		);
		void			generateReport	( progOptions & options, fileSet * files		);

		// Wrapper methods for statistics
		void			reset			( file 	*	p_file								);
		void			setAvailable	( file 	*	p_file, bool value					);
		void			addLine			( void 											);
		void			addEmptyLine	( void 											);
		void			addLoc			( void 											);


		// Variables
		language *		p_lang;
		bool			codeAvailable;
		bool			commentOpen;
		file	*		ip_file;

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_CODE_HH_
