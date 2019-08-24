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


void csvReport::writeSummary( void )
{

}


