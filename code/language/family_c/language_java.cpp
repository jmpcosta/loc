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

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import project headers
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_c/language_java.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_JAVA[] = { ".java", ".jav", nullptr };

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

bool language_java::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_JAVA );
}



