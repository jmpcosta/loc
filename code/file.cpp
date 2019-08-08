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
#include <vector>
#include <filesystem>

// Import module declarations
#include "file.hh"
#include "fileExtensions.hh"


using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************




file::file( const string & filename )
{
  iName = filename;
  iLang = fileExtensions::get_language( filename );
}

file::~file()
{}


file * file::builder( const std::string & pathname )
{
  file * p_file = nullptr;

  try
  {
	  if( filesystem::is_regular_file( pathname ) )
	    {
		  cerr << "New file:" << pathname << endl;
		  p_file = new file( pathname );
	    }
  }

  catch( const std::exception & e )
       { cerr << "Exception found: " << e.what() << endl; }

  return p_file;
}



void file::insight( void )
{
  cerr << __FUNCTION__ << ": Processing file:" << iName << endl;
}

