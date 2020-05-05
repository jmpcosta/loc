// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the Eiffel programming language
//			Standard ECMA-367.
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_EIFFEL_HH_
#define LOC_LANGUAGE_EIFFEL_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "language/family_ecma/language_family_ecma.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a JavaScript language
class language_eiffel : public language_family_ecma
{
public:
		/// @brief Class constructor
								language_eiffel		( void				);

		/// @brief Check if a file extension is a known extension for this programming language
		/// @param [in] ext - File extension
		/// @return True if the language is a known extension for the language
		static	bool			isExtension			( const char * ext	);

private:
		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_EIFFEL_HH_
