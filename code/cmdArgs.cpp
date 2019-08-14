// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Parse the command line arguments
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
#include <cstring>

// Import module declarations
#include "cmdArgs.hh"
#include "fileExtensions.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


bool parse_command_line( int argc, t_char * argv[], progOptions & options )
{
 bool ret = false;

 /*
 for( int i = 1; i < argc; i++ )
    {
	  // Check for Language
	  if( strcmp( argv[ i ], "-l" ) == 0 && ( i + 1 < argc ) )
	    {

		  options.setLanguage( fileExtensions::get_language( argv[ i + 1 ] ) );
	    }
    }
*/

 if( argc == 2 && ! ret )	// A file name was provided ?
   {
	 options.setPath( argv[ 1 ] );
	 ret = true;
   }

 return ret;
}
