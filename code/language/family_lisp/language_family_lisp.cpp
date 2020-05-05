// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a Lisp family of programming languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import Project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_lisp/language_family_lisp.hh"


// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_FAMILY_LISP_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_SEMICOLON;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_lisp )


language_family_lisp::language_family_lisp( void )
{
 lang = languageType::LISP;

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_FAMILY_LISP_TOKEN_SINGLE );
 comments.push_back( p_cmt );

}


