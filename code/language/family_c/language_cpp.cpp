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
#include "language/family_c/language_cpp.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_cpp )


language_cpp::language_cpp()
{
 TRACE_POINT

 lang = languageType::CPP;
 name = "C++";
}


bool language_cpp::isExtension( const char * extension )
{
 return true;
}

bool language_cpp::isExtension( const std::string & extension )
{
 return true;
}

