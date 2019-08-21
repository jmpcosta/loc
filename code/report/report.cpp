// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a generic report
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import project headers
#include "trace.hh"
#include "report/csvReport.hh"
#include "report/textReport.hh"
#include "report/report.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( report )

report * report::build( reportType type )
{
 switch( type )
 {
 	 case reportType::text:		return new textReport;
 	 case reportType::csv:		return new csvReport;
 }

 return nullptr;
}

