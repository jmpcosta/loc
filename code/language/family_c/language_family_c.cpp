// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a C family of programming languages
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
#include "language/family_c/language_family_c.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_c )


language_family_c::language_family_c( void )
{
 lang = languageType::C;

 comment * p_cmt = new comment();

 p_cmt->setStart( "//" );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( "/*" );
 p_cmt->setEnd  ( "*/" );
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}


