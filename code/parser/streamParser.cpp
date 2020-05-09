// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Parse a language
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
#include <filesystem>
#include <string>
#include <string_view>

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "files/fileSet.hh"
#include "converter.hh"
#include "language/LanguageProvider.hh"
#include "statistics/StatisticsProvider.hh"

// Import module declarations
#include "parser/streamParser.hh"

using namespace std;



// *****************************************************************************************
//
// Section: Constants and internal variables
//
// *****************************************************************************************

TRACE_CLASSNAME( streamParser )


// *****************************************************************************************
//
// Section: Public Function definition
//
// *****************************************************************************************



streamParser::streamParser()
{
 TRACE_ENTER

 p_lang			= nullptr;
 codeAvailable	= false;
 commentOpen	= false;
 p_iFile		= nullptr;
 ncomments		= 0;

 TRACE_EXIT
}



void streamParser::specificParse( void )
{
 std::string		input;
 std::string_view	line;

 TRACE_ENTER

 // Reserve capacity on the string to avoid reallocs
 // input.reserve( LOC_FILE_READ_BUFFER_SIZE );

 // Reset own variables
 commentOpen   = false;
 codeAvailable = false;

 iStats.setAvailable( true );

 while( std::getline( iSourceFile, input ) )
      {
	    iStats.addLine();
	    if( input.size() == 0 )
	    	iStats.addEmptyLine();
	    else
	      {
	    	line = input;
	    	processLine( line );
	      }

	    if( iSourceFile.eof() ) break;
      }

 // Copy statistics to provider
 StatisticsProvider::getInstance().addStatistics( p_iFile->getLanguageType(), (void *) p_iFile, iStats );

 TRACE_EXIT
}



// *****************************************************************************************
//
// Section: Private Function definition
//
// *****************************************************************************************



// Check if there are relevant characters in the string up to a given search length
bool streamParser::hasInfo( const char * str, std::size_t length )
{
 uint16_t	i, j, ignore;

 TRACE_ENTER

 TRACE( "Receiving string with size: ", length )

 for( i = 0; i < length; i++ )
    {
	  // Compare each character of the C-string with the list of ignore character list
	  j = 0; ignore = 0;
	  while( LOC_LINE_IGNORE_CHARS[ j ] != '\0' )
	       {
		     TRACE( "Comparing(" , i , "," , j , ") : |" , str[ i ] , "==" , LOC_LINE_IGNORE_CHARS[ j ] , "|" )
		     if( str[ i ] != LOC_LINE_IGNORE_CHARS[ j ] )
		    	 ignore++;
	         j++;
	       }

	  if( j > 0 && j == ignore )	// No ignore characters was found
	    {
		  TRACE( "Leaving with: True" )
		  return true;
	    }
    }

 TRACE( "Leaving with: False" )

 return false;	// No relevant characters were found
}





inline void streamParser::endComment( std::string_view input )
{
 std::size_t				token_pos	= std::string::npos;
 std::size_t				token_size	= 0;
 std::string_view			rest;
 language::iterator			it;

 TRACE( "Entering with size:", input.size() )

 for( it = p_lang->begin() ; it != p_lang->end(); it++ )
    {
	  token_size = (*it)->getEnd().size();

	  if( ! (*it)->hasEnd() )	continue;

	  token_pos = parser::findToken( (*it)->getEnd(), input, (*it)->isSingleCase() );

	  TRACE( "End token (", token_size, "): |", (*it)->getEnd(), "|" );

      if( token_pos != std::string::npos )
    	{
    	  TRACE( "Found end comment token at position: ", token_pos )
    	  break;
    	}
    }

 if( token_pos != std::string::npos )
   {
	 TRACE( "End comment found, check for code on the remaining of the line: ", token_pos + token_size )

	 commentOpen = false;
	 iStats.addComments( ncomments );

	 input.remove_prefix( token_pos + token_size );
	 TRACE( "After erasure:", input )
	 search( input );
   }

TRACE_EXIT
}




inline void streamParser::beginComment( std::string_view input )
{
 std::size_t				token_pos	= std::string::npos;
 std::size_t				token_size	= 0;
 language::iterator			it;

 TRACE_ENTER

 TRACE( "Searching for start comment token" )

 ncomments = 0;

 for( it = p_lang->begin(); it != p_lang->end(); it++ )
    {
	  token_size = (*it)->getStart().size();

	  TRACE( token_size, " - Token (", (*it)->getStart(), ")" );
	  TRACE( "Token is single case:",  (*it)->isSingleCase() );

	  token_pos = parser::findToken( (*it)->getStart(), input, (*it)->isSingleCase() );

      if( token_pos != std::string::npos )
        {
    	  TRACE( "Found comment start token at location:", token_pos )
    	  break;
        }
    }

 if( token_pos == std::string::npos )
   {
	 TRACE( "No begin comment found, check for code availability", input.size() );

	 ncomments = 0;
	 if( hasInfo( input.data(), input.size() ) )		 codeAvailable = true;
	 else												 iStats.addEmptyLine();
   }
 else	// Comment found, check type
   {
	 if( token_pos > 0 )
	   {
		 TRACE( "Check if there is code before begin comment token" )

		 if( hasInfo( input.data(), token_pos ) )			// Check the first part of the line
			 codeAvailable = true;
	   }

	 if( ! (*it)->hasEnd() )
	   {
		 TRACE( "Single comment Token. Ignoring the rest of the line." )

		 commentOpen	= false;
		 ncomments		= 0;
		 iStats.addComment();
	   }
	 else
	   {
		 TRACE( "Multi comment Token. Search for comment end." )

	     commentOpen = true; ncomments++;
		 input.remove_prefix( token_pos + token_size );
		 TRACE( "After erasure:", input )
	     search( input );
	   }
   }

 TRACE_EXIT
}



void streamParser::search( std::string_view input )
{
 TRACE( "Entering with input size:", input.size() )

 // Recursion Stop condition
 if( input.size() > 0 && ! codeAvailable )
   {
	 if( commentOpen )		 endComment		( input );	// Looking for end comment token
	 else					 beginComment	( input );	// Look for start comment token
   }

 TRACE_EXIT
}



void streamParser::processLine( std::string_view line )
{
 TRACE( "Entering ------------------------------------------------" )
 TRACE( "Processing line (", iStats.getLines(), ") with commentOpen:", commentOpen ? "true": "false" )

 codeAvailable	= false;

 search( line );

 if( codeAvailable ) iStats.addLoc();

 TRACE_EXIT
}


