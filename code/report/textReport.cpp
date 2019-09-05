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

 std::cout.width(140);
 std::cout.fill('=');
 std::cout << std::left << "=";
 std::cout << std::endl;
}

void textReport::writeHeader( void )
{
 TRACE_ENTER

 std::cout << std::left << std::endl;

 std::cout.fill(' ');
 std::cout << std::setw(40) << "File name";

 std::cout.fill(' ');
 std::cout << std::setw(20) << "Language";

 std::cout.fill(' ');
 std::cout << std::right << std::setw(20) << " Number of lines";

 std::cout.fill(' ');
 std::cout << std::setw(20) << " Empty lines";

 std::cout.fill(' ');
 std::cout << std::setw(15) << " Comments";

 std::cout.fill(' ');
 std::cout << std::setw(20) << " Lines of Code";

 std::cout << std::endl;

 writeSeparator();

 TRACE_EXIT
}

void textReport::writeSummary( void )
{
 StatisticsProvider		&	prov	= StatisticsProvider::getInstance();

 TRACE_ENTER

 std::string msg = "Total: ";
 msg += std::to_string( prov.getNumberFiles() );
 msg += " file(s)";

 if( details ) writeSeparator();

 writeLangStats();
 writeItem( msg.c_str(), LOC_EMPTY_STRING, prov.getGlobal() );

 std::cout << std::endl;

 TRACE_EXIT
}

void textReport::writeItem( const char * p_name, const char * p_lang, statistics & stats )
{
 TRACE_ENTER

 textReport::writeStatistics( p_name, p_lang, stats );

 TRACE_EXIT
}

void textReport::writeStatistics( const char * p_name, const char * p_lang, statistics & stats )
{
 TRACE_ENTER

 std::cout << std::left;

 std::cout.fill(' ');
 std::cout << std::setw(40) << p_name;
 std::cout << std::setw(20) << p_lang;

 std::cout << std::right;
 std::cout << std::setw(20) << stats.getLines();
 std::cout << std::setw(20) << stats.getEmptyLines();
 std::cout << std::setw(20) << stats.getComments();
 std::cout << std::setw(20) << stats.getLoc();
 std::cout << std::endl;

 TRACE_EXIT
}


void textReport::writeLangStats( void )
{
 TRACE_ENTER

 StatisticsProvider::getInstance().walk( writeStatistics );

 TRACE_EXIT
}


