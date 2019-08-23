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
#include "report/textReport.hh"


// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( textReport )

inline void textReport::writeSeparator( void )
{
 TRACE_POINT

 std::cout.width(100);
 std::cout.fill('=');
 std::cout << std::left << "=";
 std::cout << std::endl;
}

void textReport::writeHeader( void )
{
 TRACE_POINT

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

 writeSeparator();
}

void textReport::writeStats( const char * str, statistics & stats )
{
 TRACE_POINT

 std::cout << std::left;

 std::cout.fill(' ');
 std::cout << std::setw(40) << str;

 std::cout << std::right;
 std::cout << std::setw(20) << stats.getLines();
 std::cout << std::setw(20) << stats.getEmptyLines();
 std::cout << std::setw(20) << stats.getLoc();
 std::cout << std::endl;
}



void textReport::writeDetails( fileSet * p_files, bool details, std::size_t & counter, statistics & gStats )
{
 std::filesystem::path		myPath;

 TRACE_POINT

 // Print each file statistics
 for( auto it : *p_files )
    {
	  statistics & stats = it->getStatistics();

	  if( stats.areAvailable() )
	    {
		  counter++;

		  // Add current file statistics to global
		  gStats.addStats( stats );

		  if( details )
		    {
			  myPath = it->getName();
			  writeStats( myPath.filename().c_str(), stats );
		    }
	    }
    }

 if( details )	 writeSeparator();

 TRACE_EXIT
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
 std::size_t				counter = 0;

 TRACE_ENTER

 //LanguageProvider 		&	prov	= LanguageProvider::getInstance();

 std::streambuf * coubuf = std::cout.rdbuf(); //save old buf

 std::ofstream out( options.getOutput().c_str() );
 if( options.getOutput().size() > 0 )
   {
	 TRACE( "Output file exists: ", options.getOutput().c_str() )

	 std::cout.rdbuf( out.rdbuf() );	// Redirect Standard Output to "out" file stream
   }

 writeHeader	();
 writeDetails	( p_files, options.isVerbose(), counter, gStats );

 // Summary
 std::string msg = "Total (";
 msg += std::to_string( counter );
 msg += " files)";
 writeStats( msg.c_str(), gStats );

 std::cout << std::endl;

 std::cout.rdbuf( coubuf ); 		//reset to standard output again

 TRACE_EXIT
}
