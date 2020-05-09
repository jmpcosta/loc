// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Perl language
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
#include "language/others/language_perl.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_PERL_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_HASH;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_perl )


language_perl::language_perl()
{
 TRACE_POINT

 lang = languageType::PERL;
 name = "Perl";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_PERL_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}



