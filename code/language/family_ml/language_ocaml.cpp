// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the OCAML language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <string>

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/family_ml/language_ocaml.hh"


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

TRACE_CLASSNAME( language_ocaml )


language_ocaml::language_ocaml()
{
 TRACE_POINT

 lang = languageType::OCAML;
 name = "OCAML";
}



