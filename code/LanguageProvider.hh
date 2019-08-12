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
#include "languageType.hh"
#include "language.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


class LanguageProvider
{
public:
									~LanguageProvider() {}

		static LanguageProvider	&	get( void );		// Singleton method
		language		*			getParser( languageType which );

		// delete copy and move constructors and assign operators
		LanguageProvider(LanguageProvider const&) 				= delete;		// Copy construct
		LanguageProvider(LanguageProvider &&     )				= delete;		// Move construct
		LanguageProvider& operator=(LanguageProvider const&)	= delete; 		// Copy assign
		LanguageProvider& operator=(LanguageProvider &&    )	= delete;		// Move assign

private:
		// Methods
									LanguageProvider() {}


		// Variables
		std::vector<language *>		iLanguages;

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGEPROVIDER_HH_
