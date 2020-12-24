// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Modula language
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
#include "language/family_pascal/language_modula.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_MODULA_TOKEN_START	= "(*";
const char * LANGUAGE_MODULA_TOKEN_END		= "*)";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_modula )


language_modula::language_modula()
{
 TRACE_POINT

 lang = languageType::MODULA;
 name = "Modula";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_MODULA_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_MODULA_TOKEN_END		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}



