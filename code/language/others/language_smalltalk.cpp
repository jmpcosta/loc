// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the SmallTalk language
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
#include "language/others/language_smalltalk.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Language File extensions
const char * LOC_LANGUAGE_SMALLTALK[] = { ".sm", nullptr };

// Comment token
const char * LANGUAGE_SMALLTALK_TOKEN_SINGLE = LOC_TOKEN_COMMENT_DQUOTE;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_smalltalk )


language_smalltalk::language_smalltalk()
{
 TRACE_POINT

 lang = languageType::SMALLTALK;
 name = "Smalltalk";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_SMALLTALK_TOKEN_SINGLE	);
 p_cmt->setEnd  ( LANGUAGE_SMALLTALK_TOKEN_SINGLE	);

 comments.push_back( p_cmt );
}

bool language_smalltalk::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_SMALLTALK );
}



