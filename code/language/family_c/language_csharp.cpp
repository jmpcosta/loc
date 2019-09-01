// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the C++ language
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
#include "language/family_c/language_csharp.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_CSHARP[] = { ".cs", nullptr };


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_csharp )


language_csharp::language_csharp()
{
 TRACE_POINT

 lang = languageType::CSHARP;
 name = "C#";
}


bool language_csharp::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_CSHARP );
}


