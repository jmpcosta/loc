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
 std::cout << std::endl;

 std::cout << "File name" << separator;

 std::cout << "Number of lines" << separator;

 std::cout << "Empty lines" << separator;

 std::cout << "Lines of Code";

 std::cout << std::endl;
}

void csvReport::writeStats( const char * str, statistics & stats )
{
 std::cout << str 					<< separator;
 std::cout << stats.getLines()      << separator;
 std::cout << stats.getEmptyLines() << separator;
 std::cout << stats.getLoc();

 std::cout << std::endl;
}



// *****************************************************************************************
//
// Section: Public Function definition
//
// *****************************************************************************************


void csvReport::generate( progOptions & options, fileSet * p_files )
{
 statistics					gStats;
 std::filesystem::path		myPath;
 //LanguageProvider 		&	prov	= LanguageProvider::getInstance();

 writeHeader();

 // Print each file statistics
 for( auto it : *p_files )
    {
	  statistics & stats = it->getStatistics();

	  if( stats.areAvailable() )
	    {
		  // Add current file statistics to global
		  gStats.addStats( stats );

		  if( options.isVerbose() )
		    {
			  myPath = it->getName();
			  writeStats( myPath.filename().c_str(), stats );
		    }
	    }
    }

 writeStats( "Total", gStats );
}
