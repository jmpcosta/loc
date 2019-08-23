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
#include "trace.hh"
#include "loc_defs.hh"
#include "files/file.hh"
#include "files/fileSet.hh"

using namespace std::filesystem;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( fileSet )


fileSet * fileSet::directoryBuilder( const std::string & pathname )
{
 fileSet  * 			p_files	= nullptr;
 file	  *	 			p_file	= nullptr;
 std::vector<file *>	vec;

 TRACE_ENTER

 try
 {

  recursive_directory_iterator	dirIterator( pathname, directory_options::skip_permission_denied );

  for( const auto & it: dirIterator )
  	 {
	   p_file = file::builder( it.path().c_str() );

	   if( p_file != nullptr )
	     {
		   TRACE( "Adding file to list:", it.path().c_str() )
		   vec.push_back( p_file );
	     }
  	 }

  if( vec.size() > 0 )
	  p_files = new fileSet( vec );
 }

 catch( const std::exception & e )
 { std::cerr << "Exception found: " << e.what() << std::endl; }

 TRACE_EXIT

 return p_files;
}


fileSet * fileSet::builder( const std::string & pathname )
{
 fileSet * p_files	= nullptr;
 file	  *	p_file	= nullptr;

 TRACE_ENTER

 try
 {
   if( is_regular_file( pathname ) )
     {
	   p_file = file::builder( pathname );
	   if( p_file != nullptr )
	     {
		   TRACE( "Adding file to list:", pathname )
		   p_files = new fileSet( p_file );
	     }
     }

   if( is_directory( pathname ) )
	   p_files = fileSet::directoryBuilder( pathname );
 }

 catch( const std::exception & e )
 { std::cerr << "Exception found: " << e.what() << std::endl; }

 TRACE_EXIT

 return p_files;
}



fileSet::fileSet( file * p_file )
{
 TRACE_ENTER

 locations.push_back( p_file );
}


fileSet::fileSet( std::vector<file *> & vec )
{
 TRACE_ENTER

 locations = std::move( vec );

 TRACE_EXIT
}

fileSet::~fileSet()
{
 TRACE_POINT

 for( const auto i : locations )
	  delete i;
}


