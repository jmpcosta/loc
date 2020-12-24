// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the NIM language
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
#include "language/others/language_nim.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_NIM_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_HASH;
const char * LANGUAGE_NIM_TOKEN_START	= "#[";
const char * LANGUAGE_NIM_TOKEN_END		= "]#";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_nim )


language_nim::language_nim()
{
 TRACE_POINT

 lang = languageType::NIM;
 name = "NIM";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_NIM_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_NIM_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_NIM_TOKEN_END	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}



