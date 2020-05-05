// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define an ECMA family of programming languages
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
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_ecma/language_family_ecma.hh"



// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_ecma )


language_family_ecma::language_family_ecma( void )
{
 lang = languageType::ECMASCRIPT;

}


