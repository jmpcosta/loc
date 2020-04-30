// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_RUST_HH_
#define LOC_LANGUAGE_RUST_HH_

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
#include "language/family_c/language_family_c.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a Rust language
class language_rust : public language_family_c
{
public:
		/// @brief Class constructor
								language_rust	( void				);

		/// @brief Check if a file extension is a known extension for this programming language
		/// @param [in] ext - File extension
		/// @return True if the language is a known extension for the language
		static	bool			isExtension		( const char * ext	);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_RUST_HH_
