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
#include "fileSet.hh"

using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************



fileSet * fileSet::directoryBuilder( const std::string & pathname )
{
  fileSet * 		p_files	= nullptr;
  file	  * 		p_file	= nullptr;
  vector<file *>	vec;

  try
  {
	  for( auto & it: filesystem::recursive_directory_iterator( pathname ) )
	  	 {
		   p_file = file::builder( it.path() );

		   if( p_file != nullptr )
		   	 {
			   cerr << "Adding file to list:" << it.path() << endl;
			   vec.push_back( p_file );
		   	 }
	  	 }

	  if( vec.size() > 0 )
		  p_files = new fileSet( vec );
  }

  catch( const std::exception & e )
       { cerr << "Exception found: " << e.what() << endl; }

  return p_files;
}


fileSet * fileSet::builder( const std::string & pathname )
{
  fileSet * p_files	= nullptr;
  file	  *	p_file	= nullptr;

  try
  {
	  if( filesystem::is_regular_file( pathname ) )
	    {
		  p_file = file::builder( pathname );
		  if( p_file != nullptr )
		    {
			  cerr << "Adding file to list:" << pathname << endl;
			  p_files = new fileSet( p_file );
		    }
	    }

	  if( filesystem::is_directory( pathname ) )
		  p_files = fileSet::directoryBuilder( pathname );
  }

  catch( const std::exception & e )
       { cerr << "Exception found: " << e.what() << endl; }

  return p_files;
}



fileSet::fileSet( file * p_file )
{
  locations.push_back( p_file );
}


fileSet::fileSet( vector<file *> & vec )
{
  locations = std::move( vec );
}

fileSet::~fileSet()
{
  for( const auto i : locations )
	   delete i;
}


