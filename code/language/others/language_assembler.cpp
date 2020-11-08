// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Assembler language
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
#include "language/others/language_assembler.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_ASSEMBLER_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_SEMICOLON;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_assembler )


language_assembler::language_assembler()
{
 TRACE_POINT

 lang = languageType::ASSEMBLER;
 name = "Assembler";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_ASSEMBLER_TOKEN_SINGLE );
 comments.push_back( p_cmt );


}



