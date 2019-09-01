// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the GO language
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

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "language/family_c/language_go.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_GO[] = { ".go", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_go )


language_go::language_go()
{
 TRACE_POINT

 lang = languageType::GO;
 name = "GO";
}

bool language_go::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_GO );
}



