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

// Import application headers
#include "trace_macros.hh"
#include "singleton.hh"
#include "languageType.hh"
#include "language.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class LanguageProvider : public Singleton<LanguageProvider>
{
public:
		language		*			getParser( languageType which );

private:
		// Methods

		// Variables
		std::vector<language *>		iLanguages;

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGEPROVIDER_HH_
