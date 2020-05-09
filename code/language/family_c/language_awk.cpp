// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the AWK scripting language
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
#include "language/family_c/language_awk.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_AWK_TOKEN_SINGLE = LOC_TOKEN_COMMENT_HASH;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_awk )


language_awk::language_awk()
{
 TRACE_POINT

 lang = languageType::AWK;
 name = "AWK";

 comments.clear();		// To remove family inheritance

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_AWK_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}




