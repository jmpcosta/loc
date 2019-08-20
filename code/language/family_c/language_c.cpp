// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the C language
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
#include "language/family_c/language_c.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_c )


language_c::language_c()
{
 TRACE_POINT

 lang = languageType::C;
 name = "C";
}

bool language_c::isExtension( const t_char * extension )
{
 return true;
}

bool language_c::isExtension( const t_string & extension	)
{
 return true;
}


