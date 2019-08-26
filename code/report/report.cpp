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

 nFiles			= 0;
 p_iStreamBuf	= nullptr;
 details		= false;
}

void report::writeFiles( fileSet * p_files )
{
 LanguageProvider 		&	prov	= LanguageProvider::getInstance();
 std::filesystem::path		myPath;

 TRACE_POINT

 // Print each file statistics
 for( auto it : *p_files )
    {
	  statistics & stats	= it->getStatistics();
	  languageType lType	= it->getLanguage();

	  if( stats.areAvailable() )
	    {
		  nFiles++;

		  // Add current file statistics to global
		  global.addStats( stats );

		  // Add current file statistics to respective language stats
		  if( prov.isLanguageAvailable( lType ) )
		    {
			  langTypes.insert( lType );
			  prov.getLanguage( lType )->getStatistics().addStats( stats );
		    }

		  if( details )
		    {
			  myPath = it->getName();
			  writeStats( myPath.filename().generic_string().c_str(), stats );
		    }
	    }
    }

 TRACE_EXIT
}


void report::writeLangStats( void )
{
 LanguageProvider 		&	prov	= LanguageProvider::getInstance();

 TRACE_POINT

 // Print each file statistics
 for( auto it : langTypes )
    {
	  if( prov.isLanguageAvailable( it ) )
	    {
		  language * p_lang		= prov.getLanguage( it );
		  statistics & stats	= p_lang->getStatistics();

		  std::string lang = "Language ";
		  lang += p_lang->getName();

		  writeStats( lang.c_str(), stats );
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


