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
#include <stdexcept>
#include <iostream>

// Import project declarations
#include "trace.hh"
#include "language/LanguageProvider.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( LanguageProvider )

LanguageProvider::~LanguageProvider( void )
{
 TRACE_ENTER

 for( auto i : iLanguages )
    {
	  TRACE( "Deleting language: ", i->getName() )
	  delete i;
    }

 iLanguages.clear();

 TRACE_EXIT
}


language * LanguageProvider::getLanguage( languageType which )
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
	 p_lang = iLFactory.build( which );

 // If we were able to create such parser, add it to the list
 if( p_lang != nullptr )
   {
	 TRACE( "New language added to list:", static_cast<int>( which ) )
	 iLanguages.push_back( p_lang );
   }

 TRACE_EXIT

 return p_lang;
}


parser * LanguageProvider::getParser( language * p_lang )
{
 parser 	* 	p_parser	= nullptr;
 parserType		pType		= p_lang->getParserType();

 TRACE_ENTER

 if( p_lang == nullptr ) throw std::invalid_argument( "Language pointer is null" );

 // Each language decides which parser they want
 for( const auto & i : iParsers )
 	  if( pType == i->getType() )
		{
		  TRACE( "Found a matching parser: " )
		  p_parser = i;
		  return p_parser;
		}

 // If no current language parser exists, create one
 if( p_parser == nullptr )
	 p_parser = iPFactory.build( pType );

 // If we were able to create such parser, add it to the list
 if( p_parser != nullptr )
   {
	 TRACE( "New parser added to list:" )
	 iParsers.push_back( p_parser );
   }

 TRACE_EXIT

 return p_parser;
}


bool LanguageProvider::isLanguageAvailable( languageType which )
{
 TRACE_ENTER

 for( const auto & i : iLanguages )
 	  if( which == i->getType() )
		{
		  TRACE( "Found a matching language: ", i->getName() )
		  return true;
		}

 TRACE_EXIT

 return false;
}


languageType LanguageProvider::getLanguageType( const char * p_fileExtension )
{
 return iLFactory.getLanguageType( p_fileExtension );
}

