// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Simula language
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
#include "language/family_algol/language_simula.hh"


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

TRACE_CLASSNAME( language_simula )


language_simula::language_simula()
{
 TRACE_POINT

 lang = languageType::SIMULA;
 name = "Simula";
}




