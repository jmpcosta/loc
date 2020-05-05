// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the PHP language
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
#include "language/family_c/language_php.hh"

// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_PHP[] = { ".php", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_php )


language_php::language_php()
{
 TRACE_POINT

 lang = languageType::PHP;
 name = "PHP";
}

bool language_php::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_PHP );
}



