// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Algol language
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
#include "language/family_algol/language_algol.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// File extensions
const char * LOC_LANGUAGE_ALGOL[] = { ".algol", nullptr };

// Comment tokens
const char * LANGUAGE_ALGOL_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_ALGOL_TOKEN_START		= "comment";
const char * LANGUAGE_ALGOL_TOKEN_END		= "comment";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_algol )


language_algol::language_algol()
{
 TRACE_POINT

 lang = languageType::ALGOL;
 name = "Algol";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_ALGOL_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_ALGOL_TOKEN_START );
 p_cmt->setEnd  ( LANGUAGE_ALGOL_TOKEN_END	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}

bool language_algol::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_ALGOL );
}



