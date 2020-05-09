// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the HTML language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_HTML_HH_
#define LOC_LANGUAGE_HTML_HH_

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


/// @brief Class responsible for implementing the HTML language
class language_html : public language_family_sgml
{
public:
		/// @brief Class constructor
								language_html	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_HTML_HH_
