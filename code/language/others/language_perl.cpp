// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Python language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <string>

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "language/others/language_perl.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_PERL[] = { ".pl", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_perl )


language_perl::language_perl()
{
 TRACE_POINT

 lang = languageType::PERL;
 name = "Perl";

 comment * p_cmt = new comment();
 p_cmt->setStart( "#" );
 comments.push_back( p_cmt );
}

bool language_perl::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_PERL );
}



