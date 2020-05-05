// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a Pascal family of programming languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import Project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_pascal/language_family_pascal.hh"


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

TRACE_CLASSNAME( language_family_pascal )


language_family_pascal::language_family_pascal( void )
{
 lang = languageType::PASCAL;
}


