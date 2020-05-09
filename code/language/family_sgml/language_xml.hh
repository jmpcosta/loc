// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the XML language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_XML_HH_
#define LOC_LANGUAGE_XML_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "trace_macros.hh"
#include "language/family_sgml/language_family_sgml.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the XML language
class language_xml : public language_family_sgml
{
public:
		/// @brief Class constructor
								language_xml	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_XML_HH_
