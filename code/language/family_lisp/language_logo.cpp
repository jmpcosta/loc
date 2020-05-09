// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Logo language
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
#include "language/family_lisp/language_logo.hh"


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

TRACE_CLASSNAME( language_logo )


language_logo::language_logo()
{
 TRACE_POINT

 lang = languageType::LOGO;
 name = "Logo";
}




