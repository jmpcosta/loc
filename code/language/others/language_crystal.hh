// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_CRYSTAL_HH_
#define LOC_LANGUAGE_CRYSTAL_HH_

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


/// @brief Class responsible for implementing the Crystal language
class language_crystal : public language
{
public:
		/// @brief Class constructor
						language_crystal	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif
