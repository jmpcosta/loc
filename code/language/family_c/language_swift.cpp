// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the SWIFT language
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
#include "language/family_c/language_swift.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_SWIFT[] = { ".swift", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_swift )


language_swift::language_swift()
{
 TRACE_POINT

 lang = languageType::SWIFT;
 name = "Swift";
}

bool language_swift::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_SWIFT );
}



