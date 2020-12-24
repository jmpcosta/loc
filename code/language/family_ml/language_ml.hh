// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the Meta (programming) Language or ML
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_ML_HH_
#define LOC_LANGUAGE_ML_HH_

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
#include "language/family_ml/language_family_ml.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the ML language
class language_ml : public language_family_ml
{
public:
		/// @brief Class constructor
								language_ml	( void				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
