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
						textReport		( void );

private:
		// Output result
		void			writeStats		( const char * name, statistics & stats	);

		void			writeHeader		( void	);
		void			writeSeparator	( void	);
		void			writeSummary	( void 	);

		// Variables

		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_TERMINAL_REPORT_HH_
