// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_YAM_HH_
#define LOC_LANGUAGE_YAM_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the YAM language
class language_yam : public language
{
public:
		/// @brief Class constructor
								language_yam	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_YAM_HH_
