// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the C language
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
#include "language/family_c/language_c.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_C[] = { ".c", ".h", ".hhh", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_c )


language_c::language_c()
{
 TRACE_POINT

 lang = languageType::C;
 name = "C";
}

bool language_c::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_C );
}



