// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the JULIA language
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
#include "language/others/language_julia.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_JULIA_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_HASH;
const char * LANGUAGE_JULIA_TOKEN_START		= "#=";
const char * LANGUAGE_JULIA_TOKEN_END		= "=#";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_julia )


language_julia::language_julia()
{
 TRACE_POINT

 lang = languageType::JULIA;
 name = "Julia";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_JULIA_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_JULIA_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_JULIA_TOKEN_END		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}



