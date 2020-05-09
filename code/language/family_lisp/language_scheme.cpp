// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Scheme language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <string>

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_lisp/language_scheme.hh"


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

TRACE_CLASSNAME( language_scheme )


language_scheme::language_scheme()
{
 TRACE_POINT

 lang = languageType::SCHEME;
 name = "Scheme";
}




