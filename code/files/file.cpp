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
#include "files/fileExtensions.hh"
#include "files/file.hh"


using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( file )


file::file( const string & filename )
{
 TRACE_ENTER

 iName 		= filename;
 iLang		= fileExtensions::get_language( filename );

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
	  if( filesystem::is_regular_file( pathname ) )
	    {
		  TRACE( "New file:", pathname )
		  p_file = new file( pathname );
	    }
  }

  catch( const std::exception & e )
       { cerr << "Exception found: " << e.what() << endl; }

  TRACE_EXIT

  return p_file;
}


