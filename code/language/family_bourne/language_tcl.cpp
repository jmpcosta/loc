// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the TCL language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_bourne/language_tcl.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_tcl )


language_tcl::language_tcl()
{
 TRACE_POINT

 lang = languageType::TCL;
 name = "TCL";
}



