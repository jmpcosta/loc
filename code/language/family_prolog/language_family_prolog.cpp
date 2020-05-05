// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a Prolog family of programming languages
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
#include "language/family_prolog/language_family_prolog.hh"


// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_FAMILY_PROLOG_TOKEN_SINGLE	= "%";
const char * LANGUAGE_FAMILY_PROLOG_TOKEN_START		= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_FAMILY_PROLOG_TOKEN_END		= LOC_TOKEN_COMMENT_CLOSE;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_prolog )


language_family_prolog::language_family_prolog( void )
{
 lang = languageType::PROLOG;

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_FAMILY_PROLOG_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_FAMILY_PROLOG_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_FAMILY_PROLOG_TOKEN_END 		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}


