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

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_bourne/language_bourne.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_BOURNE[] = { ".sh", nullptr };

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


bool language_bourne::isExtension( const char * p_extension )
{
	return language::checkExtension( p_extension, LOC_LANGUAGE_BOURNE );
}


