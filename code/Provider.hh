// ***********************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a Provider of a programming language parser
//
// ***********************************************************************************************

#ifndef LOC_CODE_PROVIDER_HH_
#define LOC_CODE_PROVIDER_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "languageType.hh"
#include "language.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

namespace code
{


class Provider
{
public:
									~Provider() {}

		static Provider	&			get( void );		// Singleton method
		language		*			getParser( languageType which );

		// delete copy and move constructors and assign operators
		Provider(Provider const&) 				= delete;		// Copy construct
		Provider(Provider &&     )				= delete;		// Move construct
		Provider& operator=(Provider const&)	= delete; 		// Copy assign
		Provider& operator=(Provider &&    )	= delete;		// Move assign

private:
		// Methods
									Provider() {}


		// Variables
		std::vector<language *>		iLanguages;
};





} 		// End of namespace "code"




#endif // LOC_CODE_PROVIDER_HH_
