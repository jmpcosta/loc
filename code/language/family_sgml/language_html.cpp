// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the HTML language
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
#include "language/family_sgml/language_html.hh"


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

TRACE_CLASSNAME( language_html )


language_html::language_html()
{
 TRACE_POINT

 lang = languageType::HTML;
 name = "HTML";
}



