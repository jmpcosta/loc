// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the BASIC language
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
#include "language/family_basic/language_basic.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_BASIC_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_REM;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_basic )


language_basic::language_basic()
{
 TRACE_POINT

 lang = languageType::BASIC;
 name = "BASIC";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_BASIC_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}




