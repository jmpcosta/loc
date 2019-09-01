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
 TRACE_ENTER

 iName 		= filename;
 iLang		= lType;

 TRACE_EXIT
}

file::~file()
{
 TRACE_POINT
}


file * file::builder( const path & pathname )
{
 std::string		filename, fileExtension;
 file 			*	p_file		= nullptr;
 languageType		lType		= languageType::unknown;

  TRACE_ENTER

  try
  {
	  if( is_regular_file( pathname ) )
	    {
		  filename = pathname.generic_string();
		  fileExtension = pathname.extension().generic_string();

		  lType = LanguageProvider::getInstance().getLanguageType( fileExtension );

		  if( lType != languageType::unknown )
		    {
			  TRACE( "New file:", pathname )
			  p_file = new file( filename, lType );
		    }
	    }

  }

  catch( const std::exception & e )
       { std::cerr << "Exception found: " << e.what() << std::endl; }

  TRACE_EXIT

  return p_file;
}


