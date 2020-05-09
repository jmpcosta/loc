// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the powershell scripting language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_POWERSHELL_HH_
#define LOC_LANGUAGE_POWERSHELL_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the Powershell language
class language_powershell : public language
{
public:
		/// @brief Class constructor
								language_powershell	( void 				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_POWERSHELL_HH_
