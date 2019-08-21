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
#include "report/textReport.hh"


// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( textReport )

void textReport::printSeparator( void )
{
 std::cout.width(100);
 std::cout.fill('=');
 std::cout << std::left << "=";
 std::cout << std::endl;
}

void textReport::printHeader( void )
{
 std::cout << std::left << std::endl;

 std::cout.fill(' ');
 std::cout << std::setw(40) << "File name";

 std::cout.fill(' ');
 std::cout << std::right << std::setw(20) << " Number of lines";

 std::cout.fill(' ');
 std::cout << std::setw(20) << " Empty lines";

 std::cout.fill(' ');
 std::cout << std::setw(20) << " Lines of Code";

 std::cout << std::endl;

 printSeparator();
}

void textReport::printStats( const char * str, statistics & stats )
{
 std::cout << std::left;

 std::cout.fill(' ');
 std::cout << std::setw(40) << str;

 std::cout << std::right;
 std::cout << std::setw(20) << stats.getLines();
 std::cout << std::setw(20) << stats.getEmptyLines();
 std::cout << std::setw(20) << stats.getLoc();
 std::cout << std::endl;
}



// *****************************************************************************************
//
// Section: Public Function definition
//
// *****************************************************************************************


void textReport::generate( progOptions & options, fileSet * p_files )
{
 statistics					gStats;
 std::filesystem::path		myPath;
 //LanguageProvider 		&	prov	= LanguageProvider::getInstance();

 printHeader();

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
			  printStats( myPath.filename().c_str(), stats );
		    }
	    }
  }

 if( options.isVerbose() )
	 printSeparator();

 printStats( "Total:", gStats );

}
