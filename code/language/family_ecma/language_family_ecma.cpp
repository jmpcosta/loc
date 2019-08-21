// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define an ECMA family of programming languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_ecma/language_family_ecma.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_ecma )


language_family_ecma::language_family_ecma( void )
{
 lang = languageType::ECMASCRIPT;

 comment * p_cmt = new comment();

 p_cmt->setStart( "//" );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( "/*" );
 p_cmt->setEnd  ( "*/" );
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}


