// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_SCALA_HH_
#define LOC_LANGUAGE_SCALA_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the Scala language
class language_scala : public language
{
public:
		/// @brief Class constructor
								language_scala	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_SCALA_HH_
