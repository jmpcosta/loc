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

textReport::textReport()
{
 TRACE_POINT
}

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

void textReport::writeSummary( void )
{
 std::string msg = "Total (";
 msg += std::to_string( nFiles );
 msg += " files)";

 if( details ) writeSeparator();

 writeLangStats();
 writeStats( msg.c_str(), global );

 std::cout << std::endl;
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



