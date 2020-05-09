// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the CSH language
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
#include "language/family_bourne/language_csh.hh"


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

TRACE_CLASSNAME( language_csh )


language_csh::language_csh()
{
 TRACE_POINT

 lang = languageType::CSH;
 name = "C Shell";
}



