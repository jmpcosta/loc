// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the declarations for a programming language factory.
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FACTORY_HH_
#define LOC_LANGUAGE_FACTORY_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import project headers
#include "trace_macros.hh"
#include "language/language.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for creating new specific languages
class language_factory
{
public:

	/// @brief Create a new language object
	/// @param [in] lang - The language identifier
	/// @return A pointer to a new language object
	static language *	build		( languageType lang					);

	/// @brief Obtain a language identifier based on a file extension
	/// @param [in] fileExtension - The given file extension
	/// @return The language identifier for the file extension
	static languageType		getLanguage	( const std::string & fileExtension	);

	/// @brief Obtain a language identifier based on a file extension
	/// @param [in] fileExtension - The given file extension
	/// @return The language identifier for the file extension
	static languageType		getLanguage	( const char   *     fileExtension	);

private:

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_LANGUAGE_FACTORY_HH_
