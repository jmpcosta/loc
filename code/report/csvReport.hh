// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a report written in CSV format
//
// *****************************************************************************************

#ifndef LOC_CSV_REPORT_HH_
#define LOC_CSV_REPORT_HH_

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


class csvReport : public report
{
public:
						~csvReport	( void ) {}
						csvReport	( void ) { separator = ';'; }

private:
		// Output result
		void			writeStats		( const char * str, statistics & s	);

		void			writeHeader		( void );
		void			writeSummary	( void );

		// variables
		char			separator;

		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_CSV_REPORT_HH_
