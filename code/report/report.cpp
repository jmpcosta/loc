// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a generic report
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <filesystem>
#include <fstream>

// Import project headers
#include "trace.hh"

#include "language/LanguageProvider.hh"
#include "statistics/StatisticsProvider.hh"
//#include "statistics/walker.hh"

#include "report/csvReport.hh"
#include "report/textReport.hh"
#include "report/xmlReport.hh"
#include "report/report.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( report )

// Factory method
report * report::build( reportType type )
{
 switch( type )
 {
  case reportType::text:	return new textReport;
  case reportType::csv:		return new csvReport;
  case reportType::xml:		return new xmlReport;
 }

 return nullptr;
}


report::report( void )
{
 TRACE_POINT

 p_iStreamBuf	= nullptr;
 details		= false;
}

void report::writeFiles( fileSet * p_files )
{
 StatisticsProvider		&	prov	= StatisticsProvider::getInstance();
 std::filesystem::path		myPath;

 TRACE_POINT

 if( ! details )	 return;

 // Print each file statistics
 for( auto it : *p_files )
    {
	  if( prov.exists( it ) )
	    {
		  statistics & stats	= prov.getFile( it );

		  if( stats.areAvailable() )
		  	{
			  myPath = it->getName();
			  writeItem( myPath.filename().generic_string().c_str(), stats );
		  	}
	    }
    }

 TRACE_EXIT
}


void report::setOutput( progOptions & options )
{
 TRACE_ENTER

 p_iStreamBuf = std::cout.rdbuf(); //save old buf

 output.open( options.getOutput().c_str() );

 if( options.getOutput().size() == 0 )
	 std::cout << std::endl;
 else
   {
	 TRACE( "Output file exists: ", options.getOutput().c_str() )

	 std::cout.rdbuf( output.rdbuf() );	// Redirect Standard Output to "out" file stream
   }

 TRACE_EXIT
}


void report::restoreOutput( void )
{
 TRACE_ENTER

 if( output.is_open() )
	 output.close();

 std::cout.rdbuf( p_iStreamBuf ); 		//reset to standard output again

 TRACE_EXIT
}



void report::generate( progOptions & options, fileSet * p_files )
{
 TRACE_ENTER

 details = options.isVerbose();

 setOutput( options );

 writeHeader	();
 writeFiles		( p_files );
 writeSummary	();

 restoreOutput();

 TRACE_EXIT
}


