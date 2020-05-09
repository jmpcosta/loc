// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Pascal language
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
#include "language/family_pascal/language_pascal.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_PASCAL_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_PASCAL_TOKEN_START1	= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_PASCAL_TOKEN_END1		= LOC_TOKEN_COMMENT_CLOSE;
const char * LANGUAGE_PASCAL_TOKEN_START2	= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_PASCAL_TOKEN_END2		= LOC_TOKEN_COMMENT_CLOSE;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_pascal )


language_pascal::language_pascal()
{
 TRACE_POINT

 lang = languageType::PASCAL;
 name = "Pascal";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_PASCAL_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_PASCAL_TOKEN_START1	);
 p_cmt->setEnd  ( LANGUAGE_PASCAL_TOKEN_END1	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_PASCAL_TOKEN_START2	);
 p_cmt->setEnd  ( LANGUAGE_PASCAL_TOKEN_END2	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}



