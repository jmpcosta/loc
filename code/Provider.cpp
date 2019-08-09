// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a programming language relevant (to the application) settings
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <iostream>

// Import module declarations
#include "Provider.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

namespace code
{



Provider & Provider::get()
{
 static	Provider instance;

 return instance;
}


language * Provider::getParser( languageType which )
{
 language * p_lang = nullptr;

 for( const auto & i : iLanguages )
 	  if( which == i->getType() )
		{
		  std::cerr << "Found a matching language" << std::endl;
		  p_lang = i;
		  return p_lang;
		}

 // If no current language parser exists, create one
 if( p_lang == nullptr )
	 p_lang = language::builder( which );

 // If we were able to create such parser, add it to the list
 if( p_lang != nullptr )
   {
	 std::cerr << "New language added to list:" << static_cast<int>( which ) << std::endl;
	 iLanguages.push_back( p_lang );
   }

 return p_lang;
}


}	// End of namespace "code"
