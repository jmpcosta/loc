// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the F# language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include Standard headers

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_ecma/language_fsharp.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_FSHARP_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_FSHARP_TOKEN_START	= "(*";
const char * LANGUAGE_FSHARP_TOKEN_END		= "*)";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_fsharp )


language_fsharp::language_fsharp()
{
 TRACE_POINT

 lang = languageType::FSHARP;
 name = "F#";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_FSHARP_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_FSHARP_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_FSHARP_TOKEN_END		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}




