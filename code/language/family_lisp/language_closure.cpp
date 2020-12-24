// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Closure language
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
#include "language/family_lisp/language_closure.hh"


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

TRACE_CLASSNAME( language_closure )


language_closure::language_closure()
{
 TRACE_POINT

 lang = languageType::CLOSURE;
 name = "Closure";
}




