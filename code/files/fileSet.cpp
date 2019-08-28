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

file * fileSet::fileBuilder( const path & pathname )
{
 std::string		filename;
 file  			*	p_file		= nullptr;

 if( is_regular_file( pathname ) )
   {
	 filename = pathname.generic_string();

	 // TODO: Add only files that are known extensions of languages that this application supports

	 p_file = file::builder( filename );
   }

 return p_file;
}

fileSet * fileSet::directoryBuilder( const std::string & pathname )
{
 fileSet  * 			p_files	= nullptr;
 file	  *	 			p_file	= nullptr;
 std::vector<file *>	vec;

 TRACE_ENTER

 try
 {

  path	dirname( pathname, path::format::generic_format );
  recursive_directory_iterator	dirIterator( dirname, directory_options::skip_permission_denied );

  for( const auto & it: dirIterator )
  	 {
	   p_file = fileSet::fileBuilder( it.path() );
	   if( p_file != nullptr )
		   vec.push_back( p_file );
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
   path		pname( pathname, path::format::generic_format );

   if( is_directory( pname ) )
	   p_files = fileSet::directoryBuilder( pathname );
   else
     {
	   p_file = fileSet::fileBuilder( pname );
	   if( p_file != nullptr )
		   p_files = new fileSet( p_file );
     }

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


