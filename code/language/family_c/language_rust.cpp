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

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "language/family_c/language_rust.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_RUST[] = { ".rs", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_rust )


language_rust::language_rust()
{
 TRACE_POINT

 lang = languageType::RUST;
 name = "Rust";
}

bool language_rust::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_RUST );
}



