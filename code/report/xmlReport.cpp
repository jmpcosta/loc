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
#include "report/xmlReport.hh"


// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( xmlReport )


void xmlReport::writeHeader( void )
{
 TRACE_POINT

 std::cout << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" 		<< std::endl;

 std::cout << "<report>" 										<< std::endl;
 std::cout << "<header>" 										<< std::endl;

 std::cout << "<filename name=\"File name\"/>" 					<< std::endl;

 std::cout << "<language name=\"Name of language\"/>"			<< std::endl;

 std::cout << "<lines name=\"Number of lines\"/>" 				<< std::endl;

 std::cout << "<emptylines name=\"Number of empty lines\"/>" 	<< std::endl;

 std::cout << "<comments name=\"Number of comments\"/>"	 		<< std::endl;

 std::cout << "<loc name=\"Number of lines of code\"/>"      	<< std::endl;

 std::cout << "</header>" 										<< std::endl;

 if( details )
 std::cout << "<details>" 										<< std::endl;
}

void xmlReport::writeItem( const char * p_name, const char * p_lang, statistics & stats )
{
 TRACE_ENTER

 xmlReport::writeStatistics( p_name, p_lang, stats );

 TRACE_EXIT
}

void xmlReport::writeStatistics( const char * p_name, const char * p_lang, statistics & stats )
{
 TRACE_ENTER

 std::cout << "<item>" 															<< std::endl;

 std::cout << "<filename>" 		<< p_name					<< "</filename>"	<< std::endl;
 std::cout << "<language>" 		<< p_lang					<< "</language>"	<< std::endl;
 std::cout << "<lines>" 		<< stats.getLines() 		<< "</lines>"		<< std::endl;
 std::cout << "<emptylines>" 	<< stats.getEmptyLines() 	<< "</emptylines>"	<< std::endl;
 std::cout << "<comments>" 		<< stats.getComments()	 	<< "</comments>"	<< std::endl;
 std::cout << "<loc>" 			<< stats.getLoc() 			<< "</loc>"			<< std::endl;

 std::cout << "</item>" 														<< std::endl;

 TRACE_EXIT
}


void xmlReport::writeSummary( void )
{
 StatisticsProvider		&	prov	= StatisticsProvider::getInstance();

 if( details )
 std::cout << "</details>" 		<< std::endl;

 std::cout << "<summary>" 		<< std::endl;

 std::string msg = "Total: ";
 msg += std::to_string( prov.getNumberFiles() );
 msg += " file(s)";

 writeLangStats();
 writeItem( msg.c_str(), LOC_EMPTY_STRING, prov.getGlobal() );

 std::cout << "</summary>" 		<< std::endl;
 std::cout << "</report>" 		<< std::endl;
}




void xmlReport::writeLangStats( void )
{
 TRACE_ENTER

 StatisticsProvider::getInstance().walk( writeStatistics );

 TRACE_EXIT
}

