// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Make (file) language
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
#include "language/family_bourne/language_make.hh"


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

TRACE_CLASSNAME( language_make )


language_make::language_make()
{
 TRACE_POINT

 lang = languageType::MAKE;
 name = "Makefile";
}



