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


class LanguageProvider : public Singleton<LanguageProvider>
{
public:
									~LanguageProvider	( void 					);

		language		*			getParser			( languageType which	);
		bool 						isLanguageAvailable	( languageType which	);
		language		*			getLanguage			( languageType which	);

private:
		// Methods

		// Variables
		std::vector<language *>		iLanguages;

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGEPROVIDER_HH_
