// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the JADE language
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
#include "language/others/language_jade.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_JADE_TOKEN_SINGLE		= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_JADE_TOKEN_START		= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_JADE_TOKEN_END		= LOC_TOKEN_COMMENT_CLOSE;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_jade )


language_jade::language_jade()
{
 TRACE_POINT

 lang = languageType::JADE;
 name = "Jade";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_JADE_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_JADE_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_JADE_TOKEN_END	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}



