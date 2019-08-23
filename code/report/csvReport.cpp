// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a report for the standard output
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
#include <fstream>
#include <iomanip>
#include <filesystem>

// Import project headers
#include "trace.hh"
#include "language/LanguageProvider.hh"
#include "report/csvReport.hh"


// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( csvReport )


void csvReport::writeHeader( void )
{
 TRACE_POINT


 std::cout << "File name" << separator;

 std::cout << "Number of lines" << separator;

 std::cout << "Empty lines" << separator;

 std::cout << "Lines of Code";

 std::cout << std::endl;
}

void csvReport::writeStats( const char * str, statistics & stats )
{
 TRACE_POINT

 std::cout << str 					<< separator;
 std::cout << stats.getLines()      << separator;
 std::cout << stats.getEmptyLines() << separator;
 std::cout << stats.getLoc();

 std::cout << std::endl;
}



void csvReport::writeDetails( fileSet * p_files, bool details, statistics & gStats )
{
 std::filesystem::path		myPath;

 TRACE_POINT

 // Print each file statistics
 for( auto it : *p_files )
    {
	  statistics & stats = it->getStatistics();

	  if( stats.areAvailable() )
	    {
		  // Add current file statistics to global
		  gStats.addStats( stats );

		  if( details )
		    {
			  myPath = it->getName();
			  writeStats( myPath.filename().c_str(), stats );
		    }
	    }
    }

 TRACE_EXIT
}


// *****************************************************************************************
//
// Section: Public Function definition
//
// *****************************************************************************************


void csvReport::generate( progOptions & options, fileSet * p_files )
{
 statistics					gStats;

 //LanguageProvider 		&	prov	= LanguageProvider::getInstance();

 TRACE_ENTER

 std::streambuf * coubuf = std::cout.rdbuf(); //save old buf

 std::ofstream out( options.getOutput().c_str() );
 if( options.getOutput().size() == 0 )
	 std::cout << std::endl;
 else
   {
	 TRACE( "Output file exists: ", options.getOutput().c_str() )

	 std::cout.rdbuf( out.rdbuf() );	// Redirect Standard Output to "out" file stream
   }

 writeHeader	();
 writeDetails	( p_files, options.isVerbose(), gStats );
 writeStats		( "Total", gStats );

 std::cout.rdbuf( coubuf ); 		//reset to standard output again

 if( options.getOutput().size() == 0 )	// When on terminal. write one more line separator
 	 std::cout << std::endl;

 TRACE_EXIT
}
