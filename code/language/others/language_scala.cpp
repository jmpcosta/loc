// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Scala language
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
#include "language/others/language_scala.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_SCALA_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_SCALA_TOKEN_START		= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_SCALA_TOKEN_END		= LOC_TOKEN_COMMENT_CLOSE;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_scala )


language_scala::language_scala()
{
 TRACE_POINT

 lang = languageType::SCALA;
 name = "Scala";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_SCALA_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_SCALA_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_SCALA_TOKEN_END		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}



