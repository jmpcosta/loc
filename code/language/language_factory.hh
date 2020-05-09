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
#include "language/language_fileExtensions.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for creating new specific languages
class language_factory
{
public:

		/// @brief Class constructor
						language_factory	();

		/// @brief Class destructor
						~language_factory	() {}

		/// @brief Create a new language object
		/// @param [in] lang - The language identifier
		/// @return A pointer to a new language object
		language 	*		build				( languageType lang					);

		/// @brief Obtain a language identifier based on a file extension
		/// @param [in] fileExtension - The given file extension
		/// @return The language identifier for the file extension
		languageType		getLanguageType		( const char   *     fileExtension	);

private:

		// Methods
		/// @brief Obtain a language identifier based on a file extension
		/// @param [in] where - Where to search for the file extension
		/// @param [in] what  - The file extension to search
		/// @return The language identifier for the file extension
		languageType		getType				( void * where, const char * what	);

		// Variables
		void * lang[ LOG_LANGUAGE_FEXT_AZ ];

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_LANGUAGE_FACTORY_HH_
