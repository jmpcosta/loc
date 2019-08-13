// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Lines of Code main C++ function
//			Read the README.md file for more information on the project
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
#include <cstdlib>
#include <filesystem>

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "cmdArgs.hh"
#include "code.hh"
#include "fileSet.hh"

using namespace std;


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

void display_usage( t_char * progname );

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

void display_usage( t_char * progname )
{
	cout << progname << "\t[ base code directory | source file name ]" << endl << endl;
}

int LOC_MAIN( int argc, t_char * argv[] )
{
 progOptions	options;
 code			code;

 if( ! parse_command_line( argc, argv, options ) )
	 display_usage( argv[ 0 ] );
 else
   {
	 const string & pathname = options.getPath();
	 if( ! filesystem::exists( pathname ) )
	   {
		 cerr << "Unknown pathname:" << options.getPath() << endl;
		 return EXIT_FAILURE;
	   }

	 fileSet * files = fileSet::builder( pathname );
	 if( files == nullptr )
	   {
		 cerr << "Error when creating the list of processing files." << endl;
		 return EXIT_FAILURE;
	   }

	 code.insight( options, files );

	 delete files;
   }


 return EXIT_SUCCESS;
}
