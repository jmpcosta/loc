// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for converting wide characters into UTF-8.
//
// *****************************************************************************************

#ifndef LOC_CONVERTER_HH_
#define LOC_CONVERTER_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "options.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for conversion of strings into an UTF-8 format.
class converter
{
public:
		/// @brief Convert a source string to an UTF-8 string
		/// @param [in]  source - A source UFT-8 string
		/// @param [out] target - A destination UTF-8 string
		static void 	UTF8		( const std::string  & source, 		std::string & target 	);

		/// @brief Convert a source string to an UTF-8 string
		/// @param [in]  source - A source wide string
		/// @param [out] target - A destination UTF-8 string
		static void 	UTF8		( const std::wstring & source,		std::string & target 	);

		/// @brief Convert a string to lower case
		/// @param [in,out]  str - A string to be converted
		static void 	lower		( std::string & str								 			);

		/// @brief Convert a string to lower case
		/// @param [in,out]  str - A string to be converted
		static void 	lower		( char * str									 			);

private:

		// Variables
		TRACE_CLASSNAME_DECLARATION
};

#endif // LOC_CONVERTER_HH_
