// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the ADA language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include Standard headers

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_pascal/language_ada.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_ADA_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_DHYFEN;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_ada )


language_ada::language_ada()
{
 TRACE_POINT

 lang = languageType::ADA;
 name = "ADA";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_ADA_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}



