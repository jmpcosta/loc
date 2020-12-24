// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the ML language
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
#include "language/family_ml/language_ml.hh"


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

TRACE_CLASSNAME( language_ml )


language_ml::language_ml()
{
 TRACE_POINT

 lang = languageType::ML;
 name = "ML";
}



