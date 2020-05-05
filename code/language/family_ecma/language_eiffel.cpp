// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Eiffel language
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
#include "language/family_ecma/language_eiffel.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// File extensions
const char * LOC_LANGUAGE_EIFFEL[] = { ".e", nullptr };

// Comment tokens
const char * LANGUAGE_EIFFEL_TOKEN_SINGLE = LOC_TOKEN_DOUBLE_SLASH;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_eiffel )


language_eiffel::language_eiffel()
{
 TRACE_POINT

 lang = languageType::EIFFEL;
 name = "Eiffel";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_EIFFEL_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}

bool language_eiffel::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_EIFFEL );
}



