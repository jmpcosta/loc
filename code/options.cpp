// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implement the progOptions class
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import module declarations
#include "trace.hh"
#include "options.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( progOptions )


progOptions::progOptions()
{
 TRACE_POINT

 language = languageType::autodetect;
 pathname = ".";
 iVerbose = false;
 iType	  = reportType::text;
}
