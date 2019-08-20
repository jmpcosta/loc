// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the JAVA language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import project headers
#include "trace.hh"
#include "loc_defs.hh"
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_c/language_java.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_java )


language_java::language_java()
{
 TRACE_POINT

 lang = languageType::JAVA;
 name = "Java";
}

bool language_java::isExtension( const t_char * extension )
{
 return true;
}

bool language_java::isExtension( const t_string & extension )
{
 return true;
}


