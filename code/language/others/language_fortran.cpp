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

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/others/language_fortran.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
constexpr const char * LANGUAGE_FORTRAN_TOKEN_SINGLE	= "!";

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
 p_cmt->setStart( LANGUAGE_FORTRAN_TOKEN_SINGLE );
 p_cmt->setMultipleCase();
 comments.push_back( p_cmt );
}



