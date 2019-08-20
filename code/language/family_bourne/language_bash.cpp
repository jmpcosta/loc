// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the BASH language
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
#include "language/languageType.hh"
#include "language/family_bourne/language_bash.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_bash )


language_bash::language_bash()
{
 TRACE_POINT

 lang = languageType::BASH;
 name = "BASH";
}

bool language_bash::isExtension( const t_char * extension )
{
 return true;
}

bool language_bash::isExtension( const t_string & extension )
{
 return true;
}


