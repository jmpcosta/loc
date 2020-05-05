// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Ruby language
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
#include "language/others/language_ruby.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Language File extensions
const char * LOC_LANGUAGE_RUBY[] = { ".rbx", nullptr };

// Comment token
const char * LANGUAGE_RUBY_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_HASH;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_ruby )


language_ruby::language_ruby()
{
 TRACE_POINT

 lang = languageType::RUBY;
 name = "Ruby";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_RUBY_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}

bool language_ruby::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_RUBY );
}



