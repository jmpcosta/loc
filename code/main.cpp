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
#include <commandLine.hh>
#include <iostream>
#include <cstdlib>
#include <filesystem>

#include "trace.hh"
#include "loc_defs.hh"
#include "code.hh"
#include "files/fileSet.hh"

using namespace std;


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Global function to provide a usage help message
void display_usage( t_char * progname );

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


void display_usage( t_char * progname )
{
	loc_cout << progname;
	cout << "\t<options>\t[ base code directory | source file name ]" 			<< endl 	<< endl;

	cout << "  Where <options>:" 															<< endl;
	cout << "\t\t\t-d \t\t=> enable verbose output"  		    							<< endl;
	cout << "\t\t\t-t [text | csv | xml] => output format (text is default)"				<< endl;
	cout << endl;
}



int LOC_MAIN( int argc, t_char * argv[] )
{
 commandLine	cmdLine;
 progOptions	options;
 code			code;

 if( ! cmdLine.parse( argc, argv, options ) )
	 display_usage( argv[ 0 ] );
 else
   {
	 const std::string & pathname = options.getPath();
	 if( ! filesystem::exists( pathname ) )
	   {
		 cerr << "Unknown pathname:" << options.getPath() << endl;
		 return EXIT_FAILURE;
	   }

	 fileSet * files = fileSet::builder( pathname );
	 if( files == nullptr )
	   {
		 loc_cerr << "Error when creating the list of processing files." << endl;
		 return EXIT_FAILURE;
	   }

	 code.insight( options, files );

	 delete files;
   }


 return EXIT_SUCCESS;
}
