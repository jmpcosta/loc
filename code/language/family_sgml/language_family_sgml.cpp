// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a SGML family of languages
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
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_sgml/language_family_sgml.hh"


// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************

constexpr const char * LANGUAGE_FAMILY_SGML_TOKEN_START	= "<!--";
constexpr const char * LANGUAGE_FAMILY_SGML_TOKEN_END	= "-->";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_sgml )


language_family_sgml::language_family_sgml( void )
{
 lang = languageType::SGML;

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_FAMILY_SGML_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_FAMILY_SGML_TOKEN_END  	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}


