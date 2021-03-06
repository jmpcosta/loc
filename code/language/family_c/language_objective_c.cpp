// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Objective C language
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
#include "language/family_c/language_objective_c.hh"

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

TRACE_CLASSNAME( language_objective_c )


language_objective_c::language_objective_c()
{
 TRACE_POINT

 lang = languageType::OBJECTIVE_C;
 name = "Objective C";
}




