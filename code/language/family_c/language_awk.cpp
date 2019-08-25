// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the AWK scripting language
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
#include "language/family_c/language_awk.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_AWK[] = { ".awk", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_awk )


language_awk::language_awk()
{
 TRACE_POINT

 comments.clear();		// To remove family inheritance

 comment * p_cmt = new comment();

 p_cmt->setStart( "//" );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( "/*" );
 p_cmt->setEnd  ( "*/" );
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

 lang = languageType::AWK;
 name = "AWK";
}

bool language_awk::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_AWK );
}



