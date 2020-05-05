// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_IDL_OMG_HH_
#define LOC_LANGUAGE_IDL_OMG_HH_

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

// Import module headers
#include "language/family_idl/language_family_idl.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for implementing the OMG IDL language
class language_idl_omg : public language_family_idl
{
public:
		/// @brief Class constructor
								language_idl_omg	( void				);

		/// @brief Check if a file extension is a known extension for this programming language
		/// @param [in] ext - File extension
		/// @return True if the language is a known extension for the language
		static	bool			isExtension			( const char * ext	);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_IDL_OMG_HH_
