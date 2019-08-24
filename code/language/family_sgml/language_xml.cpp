// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the XML language
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

// Import module declarations
#include "trace.hh"
#include "language/languageType.hh"
#include "language/family_sgml/language_xml.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

const char * LOC_LANGUAGE_XML[] = { ".xml", ".xsl", ".xslt", nullptr };

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_xml )


language_xml::language_xml()
{
 TRACE_POINT

 lang = languageType::XML;
 name = "XML";
}

bool language_xml::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_XML );
}



