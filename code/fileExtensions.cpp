// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Associate language with file name extensions
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

// Import module declarations
#include "file_extensions.hh"
#include "fileExtensions.hh"


using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

// File name must be already strip of directory path
languageType fileExtensions::get_language( const std::string & filename )
{
 int 			i, j;
 string			ext;

 // Get filename extension
 filesystem::path myPath( filename );
 ext = myPath.extension().string();

 i = 0;
 while( file_extensions[ i ][ 0 ] != nullptr )
      {
	 	j = 0;
	 	while( file_extensions[ i ][ j ] != nullptr && j < LOC_LANGUAGE_EXTENSIONS_MAX )
	 		 {
	 		   if( ext.compare( file_extensions[ i ][ j ] ) == 0 )	// Strings match
	 			   return static_cast<languageType>( i );
	 	 	   j++;
	 		 }
    	i++;
      }

 return languageType::unknown;
}


languageType fileExtensions::get_language( const char * filename )
{
 string 	fn = filename;
 return     get_language( fn );
}


