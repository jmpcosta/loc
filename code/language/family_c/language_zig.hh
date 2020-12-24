// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_ZIG_HH_
#define LOC_LANGUAGE_ZIG_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_c/language_family_c.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the GO language
class language_zig : public language_family_c
{
public:
		/// @brief Class constructor
								language_zig	( void				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
