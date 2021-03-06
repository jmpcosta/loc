// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implementation for managing the file system elements to be processed
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
#include <string>
#include <filesystem>

// Import project headers
#include "trace.hh"
#include "language/LanguageProvider.hh"
#include "files/file.hh"


using namespace std::filesystem;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( file )


file::file( const std::string & filename, languageType lType )
{
 iName 		= filename;
 iLang		= lType;
}


file * file::builder( const path & pathname )
{
 file 			*	p_file		= nullptr;
 languageType		lType		= languageType::unknown;

  TRACE_ENTER

  try
  {
	  if( is_regular_file( pathname ) )
	    {

		  lType = LanguageProvider::getInstance().getLanguageType( pathname );

		  // If supported language, add it to the list
		  if( lType != languageType::unknown )
		    {
			  TRACE( "New file:", pathname )
			  p_file = new file( pathname.generic_string(), lType );
		    }
	    }

  }

  catch( const std::exception & e )
       { std::cerr << "Exception found: " << e.what() << std::endl; }

  TRACE_EXIT

  return p_file;
}


