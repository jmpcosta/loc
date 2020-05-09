// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide insight into the code namely the number of lines of code
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
#include <fstream>
#include <filesystem>

// Import module declarations
#include "trace.hh"
#include "options.hh"
#include "code.hh"

#include "files/fileSet.hh"
#include "language/LanguageProvider.hh"
#include "report/report.hh"

using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( code )


code::code()
{
 TRACE_POINT
}

code::~code()
{
 TRACE_POINT
}


inline void code::processFiles( fileSet * p_files )
{
 parser		*	p_parser	= nullptr;
 language	*	p_lang		= nullptr;
 languageType	lType		= languageType::unknown;

 TRACE_ENTER

 LanguageProvider & prov	= LanguageProvider::getInstance();

 // Get insight for the set of files
 for( auto it : *p_files )
    {
	  TRACE( "Processing file:", it->getName() )

	  lType = it->getLanguageType();
	  if( lType == languageType::unknown )
	    {
		  TRACE( "Unknown programming language: Skipping file !" )
		  continue;
	    }

	  p_lang = prov.getLanguage( lType );
	  if( p_lang == nullptr )
	    {
		  TRACE( "No language available. Skip file." )
		  continue;
	    }

	  p_parser = prov.getParser( p_lang );
	  if( p_parser == nullptr )
		  cerr << "No parser available. Skip file." << endl;
	  else
		  p_parser->parse( it );
    }

 TRACE_EXIT
}

inline void code::generateReport( progOptions & options, fileSet * p_files )
{
 TRACE_ENTER

 report * rep = report::build( options.getFormat() );

 if( rep != nullptr )
	 rep->generate( options, p_files );

 TRACE_EXIT
}


void code::insight( progOptions & options, fileSet * p_files )
{
 TRACE_ENTER

 processFiles	( p_files );
 generateReport	( options, p_files );

 TRACE_EXIT
}



