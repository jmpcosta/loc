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
#include "statistics/StatisticsProvider.hh"
#include "report/csvReport.hh"


// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( csvReport )

char csvReport::separator = ';';

void csvReport::writeHeader( void )
{
 TRACE_POINT


 std::cout << "File name"		<< csvReport::separator;

 std::cout << "Number of lines" << csvReport::separator;

 std::cout << "Empty lines"		<< csvReport::separator;

 std::cout << "Lines of Code";

 std::cout << std::endl;
}

void csvReport::writeItem( const char * str, statistics & stats )
{
 TRACE_ENTER

 csvReport::writeStatistics( str, stats );

 TRACE_EXIT
}

void csvReport::writeStatistics( const char * str, statistics & stats )
{
 TRACE_ENTER

 std::cout << str 					<< separator;
 std::cout << stats.getLines()      << separator;
 std::cout << stats.getEmptyLines() << separator;
 std::cout << stats.getLoc();

 std::cout << std::endl;

 TRACE_EXIT
}


void csvReport::writeSummary( void ) { TRACE_POINT }


void csvReport::writeLangStats( void )
{
 TRACE_ENTER

 StatisticsProvider::getInstance().walk( writeStatistics );

 TRACE_EXIT
}


