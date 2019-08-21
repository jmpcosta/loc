// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a text format base report
//
// *****************************************************************************************

#ifndef LOC_TEXT_REPORT_HH_
#define LOC_TEXT_REPORT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import own headers
#include "trace_macros.hh"
#include "options.hh"
#include "files/fileSet.hh"
#include "report/report.hh"




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class textReport : public report
{
public:
						~textReport		( void ) {}
						textReport		( void ) {}

		// All reports must have a generate method with the same signature
		void			generate		( progOptions & options, fileSet * files );

private:
		// Output result
		void			printStats		( const char * str, statistics &				);
		void			printHeader		( void											);
		void			printSeparator	( void											);

		// Variables
		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_TERMINAL_REPORT_HH_
