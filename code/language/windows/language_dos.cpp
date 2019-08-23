// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Bourne language
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
#include "language/windows/language_dos.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_DOS[] = { ".bat", ".cmd", nullptr	};


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_dos )


language_dos::language_dos()
{
 TRACE_POINT

 lang = languageType::DOS;
 name = "DOS shell";

 comment * p_cmt = new comment();
 p_cmt->setStart( "rem" );
 p_cmt->setCaseInsensitive();
 comments.push_back( p_cmt );

}


bool language_dos::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_DOS );
}


