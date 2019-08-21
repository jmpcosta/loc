// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the command line arguments
//
// *****************************************************************************************

#ifndef LOC_COMMANDLINE_HH_
#define LOC_COMMANDLINE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "options.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

class commandLine
{
public:
				commandLine		( void ) {}
				~commandLine	( void ) {}

		bool 	parse				( int argc, t_char * argv[],		progOptions & options	);

private:
		void 	convert2UTF8		( const std::string  & source, 		std::string & target 	);
		void 	convert2UTF8		( const std::wstring & source,		std::string & target 	);
		bool 	checkParam			( const std::string  & parameter,	const char * option		);
		void 	setOutputFormat		( const std::string  & format,		progOptions & options	);

		// Variables
		TRACE_CLASSNAME_DECLARATION
};

#endif // LOC_COMMANDLINE_HH_
