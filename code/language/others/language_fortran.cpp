// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Fortran language
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
#include "language/others/language_fortran.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_FORTRAN[] = { ".c", ".h", ".hhh", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_fortran )


language_fortran::language_fortran()
{
 TRACE_POINT

 lang = languageType::FORTRAN;
 name = "Fortran";

 comment * p_cmt = new comment();
 p_cmt->setStart( "!" );
 p_cmt->setMultipleCase();
 comments.push_back( p_cmt );
}

bool language_fortran::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_FORTRAN );
}



