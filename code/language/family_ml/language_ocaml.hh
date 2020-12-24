// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_OCAML_HH_
#define LOC_LANGUAGE_OCAML_HH_

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


/// @brief Class responsible for implementing the OCAML language
class language_ocaml : public language_family_ml
{
public:
		/// @brief Class constructor
								language_ocaml	( void				);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif
