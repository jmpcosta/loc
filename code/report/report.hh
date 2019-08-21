// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a generic Report
//
// *****************************************************************************************

#ifndef LOC_REPORT_HH_
#define LOC_REPORT_HH_

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
#include "report/reportType.hh"




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class report
{
public:
		virtual					~report	( void ) {}
								report	( void ) {}

		// All reports must have a generate method with the same signature
		virtual void			generate	( progOptions & options, fileSet * files ) = 0;

		// Factory method
		static	report *		build( reportType type );

private:
		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_REPORT_HH_
