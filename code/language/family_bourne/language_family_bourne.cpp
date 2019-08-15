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

#include "language/family_bourne/language_family_bourne.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_bourne )



language_family_bourne::language_family_bourne( void )
{
 comment * p_cmt =  nullptr;

 lang = languageType::BOURNE;

 p_cmt = new comment();
 p_cmt->setStart( "#" );
 comments.push_back( p_cmt );
}


