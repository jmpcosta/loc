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

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "language/family_bourne/language_bourne.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_bourne )


language_bourne::language_bourne()
{
 TRACE_POINT

 lang = languageType::BOURNE;
 name = "Bourne shell";
}


bool language_bourne::isExtension( const char * extension )
{
 return true;
}

bool language_bourne::isExtension( const std::string & extension )
{
 return true;
}

