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
#include "parser/parser.hh"
#include "parser/parser_factory.hh"
#include "language/languageType.hh"
#include "language/language.hh"
#include "language/language_factory.hh"


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
		/// @param [in] lang - The language object from where to retrieve the parser type
		/// @return Pointer to the requested language parser. A null pointer otherwise
		parser			*			getParser			( language * lang		);

		/// @brief Verify if a language is already provided
		/// @param [in] which - The language identifier
		/// @return True if language is managed by this class. False otherwise
		bool 						isLanguageAvailable	( languageType which	);

		/// @brief Obtain a language object pointer for a given language
		/// @param [in] which - For which language the parser is required
		/// @return Pointer to the requested language object. An exception otherwise
		language		*			getLanguage			( languageType which	);

		/// @brief Obtain the language identifier based on the file extension
		/// @param [in] ext - File extension
		/// @return Language Identifier
		languageType				getLanguageType		( const char * ext 			);

		/// @brief Obtain the language identifier based on the file extension
		/// @param [in] ext - File extension
		/// @return Language Identifier
		languageType				getLanguageType		( const std::string & ext	);

private:
		// Methods

		// Variables
		language_factory			iLFactory;		///< The language factory is implicitly a singleton
		parser_factory				iPFactory;		///< The parser factory is implicitly a singleton
		std::vector<language *>		iLanguages;		///< List of pointers to different language objects
		std::vector<parser *>		iParsers;		///< List of pointers to different language parsers

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGEPROVIDER_HH_
