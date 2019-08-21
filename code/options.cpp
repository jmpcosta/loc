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
#include "loc_defs.hh"
#include "options.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


progOptions::progOptions()
{
 language = languageType::autodetect;
 pathname = LOC_STRING(".");
 iVerbose = false;
}
