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

#include "files/fileExtensions.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


bool parse_command_line( int argc, t_char * argv[], progOptions & options )
{
 bool ret = false;

 // Set defaults
 options.setVerbose( false );

 for( int i = 1; i < argc; i++ )
    {
	  /* Check for Language
	  if( strcmp( argv[ i ], "-l" ) == 0 && ( i + 1 < argc ) )
	    {

		  options.setLanguage( fileExtensions::get_language( argv[ i + 1 ] ) );
	    }
	  */

	  // Check for Verbosity
	  if( strcmp( argv[ i ], "-v" ) == 0 )
	    {
		  options.setVerbose( true );
	    }

    }


 if( argc > 1 && ! ret )	// A file name was provided ?
   {
	 // The last argument must be the source directory or filename
	 options.setPath( argv[ argc - 1 ] );
	 ret = true;
   }

 return ret;
}
