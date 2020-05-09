// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Forth language
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
#include "language/others/language_forth.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_FORTH_TOKEN_SINGLE	= LOC_TOKEN_COMENT_DBSLASH;
const char * LANGUAGE_FORTH_TOKEN_START		= "(";
const char * LANGUAGE_FORTH_TOKEN_END		= ")";


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_forth )


language_forth::language_forth()
{
 TRACE_POINT

 lang = languageType::FORTRAN;
 name = "Fortran";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_FORTH_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_FORTH_TOKEN_START	 );
 p_cmt->setEnd  ( LANGUAGE_FORTH_TOKEN_END		);

 comments.push_back( p_cmt );

}



