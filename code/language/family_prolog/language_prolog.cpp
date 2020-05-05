// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Prolog language
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
#include "language/family_prolog/language_prolog.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_PROLOG[] = { ".pl", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_prolog )


language_prolog::language_prolog()
{
 TRACE_POINT

 lang = languageType::PROLOG;
 name = "Prolog";
}

bool language_prolog::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_PROLOG );
}



