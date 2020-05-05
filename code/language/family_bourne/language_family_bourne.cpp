// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a C family of programming languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/comment.hh"
#include "language/languageType.hh"

// Import module declarations
#include "language/family_bourne/language_family_bourne.hh"



// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************

const char * LANGUAGE_FAMILY_BOURNE_TOKEN_SINGLE = LOC_TOKEN_COMMENT_HASH;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_bourne )



language_family_bourne::language_family_bourne( void )
{
 comment * p_cmt =  nullptr;

 lang = languageType::BOURNE;

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_FAMILY_BOURNE_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}


