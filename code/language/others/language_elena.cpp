// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Elena language
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
#include "language/others/language_elena.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_ELENA_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_elena )


language_elena::language_elena()
{
 TRACE_POINT

 lang = languageType::ELENA;
 name = "ELENA";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_ELENA_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}



