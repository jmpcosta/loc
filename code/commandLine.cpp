// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Parse the command line arguments
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <cstring>
#include <codecvt>
#include <iostream>
#include <string>
#include <locale>

// Import module declarations
#include "trace.hh"
#include "converter.hh"
#include "commandLine.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( commandLine )


bool commandLine::checkParam( const char * option, std::string & parameter )
{
 TRACE_ENTER

 converter::lower( parameter );

 if( strcmp( parameter.c_str(), option ) == 0 ) return true;

 TRACE_EXIT

 return false;
}


void commandLine::setOutputFormat( std::string & format, progOptions & options )
{
 TRACE_ENTER

 if( checkParam( LOC_OUTPUT_TYPE_CSV, format ) )
   {
	 TRACE( "Setting output report as CSV" )
	 options.setFormat( reportType::csv );
   }

 if( checkParam( LOC_OUTPUT_TYPE_XML, format ) )
   {
	 TRACE( "Setting output report as XML" )
	 options.setFormat( reportType::xml );
   }

 // Other formats...

 TRACE_EXIT
}


bool commandLine::parse( int argc, t_char * argv[], progOptions & options )
{
 bool ret = false;

 TRACE_ENTER

 // Set defaults
 options.setVerbose( false );

 std::string opt;
 std::string arg;

 // Process options
 for( int i = 1; i < argc - 1 ; i++ )
    {
	  // Make sure that each command line argument is in UTF-8
	  converter::UTF8( argv[ i ], opt );

	  if( checkParam( LOC_SWITCH_DETAILS, opt ) )
		  options.setVerbose( true );

	  if( checkParam( LOC_SWITCH_OUTPUT, opt  ) && argc > i + 1 )
	    {
		  TRACE( "Output format switch found")
		  // What type is selected
		  converter::UTF8( argv[ i + 1 ], arg );
		  setOutputFormat( arg, options );
	    }

	  if( checkParam( LOC_SWITCH_OUTPUT_FILE, opt ) && argc > i + 1 )
	    {
		  if( argv[ i + 1 ][0] != '-' )
		    {
		      // Ensure that output file name is in UTF-8
			  converter::UTF8( argv[ i + 1 ], arg );

			  if( arg.length() > 0 )  options.setOutput( arg );
		    }
	    }
    }

 if( argc > 1 && ! ret )	// A file name was provided ?
   {
	 converter::UTF8( argv[ argc - 1 ], arg );

	 TRACE( "Processing pathname:", arg )

	 // The last argument must be the source directory or filename
	 options.setPath( arg );
	 ret = true;
   }

 TRACE_EXIT

 return ret;
}
