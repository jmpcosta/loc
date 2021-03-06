// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_ADA_HH_
#define LOC_LANGUAGE_ADA_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_pascal/language_family_pascal.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the Ada language
class language_ada : public language_family_pascal
{
public:
		/// @brief Class constructor
								language_ada	( void				);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_ADA_HH_
