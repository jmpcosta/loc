// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the JavaScript language
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
#include "language/family_ecma/language_javascript.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_JAVASCRIPT[] = { ".js", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_javascript )


language_javascript::language_javascript()
{
 TRACE_POINT

 lang = languageType::JAVASCRIPT;
 name = "JavaScript";
}

bool language_javascript::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_JAVASCRIPT );
}



