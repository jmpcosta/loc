// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_BASH_HH_
#define LOC_LANGUAGE_BASH_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/family_bourne/language_family_bourne.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing a BASH language
class language_bash : public language_family_bourne
{
public:
		/// @brief Class constructor
							language_bash	( void				);

		/// @brief Check if a file extension is a known extension for this programming language
		/// @param [in] ext - File extension
		/// @return True if the language is a known extension for the language
		static	bool		isExtension		( const char * ext	);


private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_BASH_HH_
