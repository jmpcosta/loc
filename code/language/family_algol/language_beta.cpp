// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Beta language
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
#include "language/family_algol/language_beta.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_BETA_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_BETA_TOKEN_START	= "(*";
const char * LANGUAGE_BETA_TOKEN_END	= "*)";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_beta )


language_beta::language_beta()
{
 TRACE_POINT

 lang = languageType::BETA;
 name = "Beta";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_BETA_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_BETA_TOKEN_START );
 p_cmt->setEnd  ( LANGUAGE_BETA_TOKEN_END	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}



