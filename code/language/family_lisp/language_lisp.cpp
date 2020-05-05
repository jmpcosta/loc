// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Lisp language
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

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_lisp/language_lisp.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_LISP[] = { ".lisp", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_lisp )


language_lisp::language_lisp()
{
 TRACE_POINT

 lang = languageType::LISP;
 name = "Lisp";
}

bool language_lisp::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_LISP );
}



