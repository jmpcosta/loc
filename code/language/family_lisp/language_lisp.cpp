// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Lisp language
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
#include "language/family_lisp/language_lisp.hh"


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

TRACE_CLASSNAME( language_lisp )


language_lisp::language_lisp()
{
 TRACE_POINT

 lang = languageType::LISP;
 name = "Lisp";
}



