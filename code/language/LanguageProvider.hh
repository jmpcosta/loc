// ***********************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a Provider of a programming language parser
//
// ***********************************************************************************************

#ifndef LOC_LANGUAGEPROVIDER_HH_
#define LOC_LANGUAGEPROVIDER_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <vector>

// Import application headers
#include "trace_macros.hh"
#include "singleton.hh"
#include "language/language.hh"
#include "language/languageType.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief This class provides acts as a service provider of languages
class LanguageProvider : public Singleton<LanguageProvider>
{
public:
		/// @brief Class destructor
									~LanguageProvider	( void 					);

		/// @brief Obtain a language parser
		/// @param [in] which - For which language the parser is required
		/// @return Pointer to the requested language parser. A null pointer otherwise
		language		*			getParser			( languageType which	);

		/// @brief Verify if a language is already provided
		/// @param [in] which - The language identifier
		/// @return True if language is managed by this class. False otherwise
		bool 						isLanguageAvailable	( languageType which	);

		/// @brief Obtain a language object pointer for a given language
		/// @param [in] which - For which language the parser is required
		/// @return Pointer to the requested language object. An exception otherwise
		language		*			getLanguage			( languageType which	);

private:
		// Methods

		// Variables
		std::vector<language *>		iLanguages;		///< List of pointers to different language objects

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGEPROVIDER_HH_
