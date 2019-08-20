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

// Import project declarations
#include "trace.hh"
#include "language/language_factory.hh"
#include "language/LanguageProvider.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( LanguageProvider )




language * LanguageProvider::getParser( languageType which )
{
 language * p_lang = nullptr;

 TRACE_ENTER

 for( const auto & i : iLanguages )
 	  if( which == i->getType() )
		{
		  TRACE( "Found a matching language: ", i->getName() )
		  p_lang = i;
		  return p_lang;
		}

 // If no current language parser exists, create one
 if( p_lang == nullptr )
	 p_lang = language_factory::build( which );

 // If we were able to create such parser, add it to the list
 if( p_lang != nullptr )
   {
	 TRACE( "New language added to list:", static_cast<int>( which ) )
	 iLanguages.push_back( p_lang );
   }

 TRACE_EXIT

 return p_lang;
}


