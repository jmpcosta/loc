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
#include "language/language_factory.hh"
#include "files/file.hh"


using namespace std::filesystem;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( file )


file::file( const std::string & filename )
{
 TRACE_ENTER

 iName 		= filename;

 std::filesystem::path	pathname( filename );
 std::string			extension( pathname.extension() );

 iLang		= language_factory::getLanguage( extension );

 TRACE_EXIT
}

file::~file()
{
 TRACE_POINT
}


file * file::builder( const std::string & pathname )
{
  file * p_file = nullptr;

  TRACE_ENTER

  try
  {
	  if( is_regular_file( pathname ) )
	    {
		  TRACE( "New file:", pathname )
		  p_file = new file( pathname );
	    }
  }

  catch( const std::exception & e )
       { std::cerr << "Exception found: " << e.what() << std::endl; }

  TRACE_EXIT

  return p_file;
}


