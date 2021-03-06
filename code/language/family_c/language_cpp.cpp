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

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_c/language_cpp.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************


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



