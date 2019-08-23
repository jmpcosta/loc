// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the CSH language
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
#include "language/family_bourne/language_csh.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_CSH[] = { ".csh", nullptr	};

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_csh )


language_csh::language_csh()
{
 TRACE_POINT

 lang = languageType::CSH;
 name = "C Shell";
}


bool language_csh::isExtension( const char * p_extension )
{
	return language::checkExtension( p_extension, LOC_LANGUAGE_CSH );
}

