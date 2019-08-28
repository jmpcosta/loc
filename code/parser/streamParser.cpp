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

// Import module declarations
#include "trace.hh"
#include "options.hh"
#include "files/fileSet.hh"
#include "language/LanguageProvider.hh"
#include "parser/streamParser.hh"

using namespace std;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( streamParser )


streamParser::streamParser()
{
 TRACE_ENTER

 p_lang			= nullptr;
 codeAvailable	= false;
 commentOpen	= false;
 p_iFile		= nullptr;

 TRACE_EXIT
}


void streamParser::setAvailable( file * p_file, bool value )
{
 TRACE_POINT

 // Set availability of file statistics
 if( p_file != nullptr )
	 p_file->getStatistics().setAvailable( value );
}

void streamParser::reset( file * p_file )
{
 TRACE_POINT

 // Reset file stats
 if( p_file != nullptr )
	 p_file->getStatistics().reset();

 p_file->getStatistics().setAvailable( true );
}


void streamParser::addLine( void )
{
 if( p_iFile != nullptr )
	 p_iFile->getStatistics().addLine();
}

void streamParser::addEmptyLine( void )
{
 if( p_iFile != nullptr )
	 p_iFile->getStatistics().addEmptyLine();
}

void streamParser::addLoc( void )
{
 if( p_iFile != nullptr )
	 p_iFile->getStatistics().addLoc();
}




// Check if there are relevant characters in the string up to a given search length
bool streamParser::hasInformation( const char * str, std::size_t len )
{
 std::size_t	i, j, ignore;

 TRACE_ENTER

 TRACE( "Receiving string (", str, ") with size: ", len )

 for( i = 0; i < len; i++ )
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



inline void streamParser::endComment( std::string & line, std::size_t start )
{
 std::size_t				len 		= 0;
 std::size_t				token_pos	= std::string::npos;
 language::iterator			it;

 TRACE_IF( const char 	*			ptr			= &(line.c_str()[ start ]); )

 TRACE_ENTER

 TRACE( "Searching for end comment token in string |", ptr, "|" )

 for( it = p_lang->begin() ; it != p_lang->end(); it++ )
    {
	  if( ! (*it)->hasEnd() )
		  continue;

	  len		= (*it)->getEnd().length();
	  token_pos = line.find( (*it)->getEnd(), start );

	  TRACE( "End token (", len, "): |", (*it)->getEnd(), "|" );

      if( token_pos != std::string::npos )
    	{
    	  TRACE( "Found end comment token at position: ", token_pos )
    	  break;
    	}
    }

 // End comment found, check for code on the remaining of the line
 if( token_pos != std::string::npos )
   {
	 commentOpen = false;
	 TRACE( "Search for remaining of the line starting at position: ", token_pos + len )
	 search( line, token_pos + len );
   }

TRACE_EXIT
}


// Process begin comment
inline void streamParser::beginComment( std::string & line, std::size_t start )
{
 std::size_t				len			= 0;
 std::size_t				token_pos	= std::string::npos;
 const char 	*			ptr			= &(line.c_str()[ start ]);
 language::iterator			it;

 TRACE_ENTER

 TRACE( "Searching for start comment token" )

 for( it = p_lang->begin(); it != p_lang->end(); it++ )
    {
	  TRACE( "Start token:", (*it)->getStart() );

	  len = (*it)->getStart().length();

	  TRACE( "Token length:", len );

	  token_pos = line.find( (*it)->getStart(), start );

      if( token_pos != std::string::npos )
        {
    	  TRACE( "Found comment start token")
    	  break;
        }
    }

 // No start of a comment found, check for code on the remaining of the line
 if( token_pos == std::string::npos )
   {
	 len = line.size() - start;

	 TRACE( "Line length:", line.size() );
	 TRACE( "subline length:", ptr );

	 if( hasInformation( ptr, len ) )
		 codeAvailable = true;
   }
 else	// Comment found, check type
   {
	 // If the comment is a single token, ignore the rest of the line
	 if( ! (*it)->hasEnd() )
	   {
		 TRACE( "Comment has no end token.")

		 commentOpen = false;

		 len = token_pos - start;

		 TRACE( "Search length:", len )

		 if( token_pos > 0 && hasInformation( ptr, len ) )
			 codeAvailable = true;

		 TRACE_EXIT
		 return;
	   }
	 else
	   {
		 // Check if there is code before begin comment token
		 if( token_pos > 0 && hasInformation( ptr, token_pos - 1 ) )
			 codeAvailable = true;

	     commentOpen = true;
	     search( line, token_pos + len );	// Check for the end
	   }
   }


 TRACE_EXIT
}




void streamParser::search( std::string & line, std::size_t start )
{
 TRACE( "Entering with start position:", start );

 // Recursion Stop condition
 if( start < line.size() && ! codeAvailable )
   {
	 if( commentOpen )
		 endComment		( line, start );	// Looking for end comment token
	 else
		 beginComment	( line, start );	// Look for start comment token
   }

 TRACE_EXIT
}



void streamParser::processLine( std::string & line )
{
 TRACE( "------------------------------------------------------------" )
 TRACE( "Entering with commentOpen:", commentOpen ? "true": "false" )

 // Check for empty lines
 if( ! commentOpen && ( line.size() == 0 || ! hasInformation( line.c_str(), line.size() ) ) )
   {
	 addEmptyLine();
	 return;
   }

 codeAvailable = false;

 search( line, 0 );

 if( codeAvailable ) addLoc();

 TRACE_EXIT
}



void streamParser::parse( file * p_file )
{
 std::string line;

 TRACE_ENTER

 if( p_file == nullptr ) return;	// Safety check

 p_iFile	= p_file;
 p_lang		= LanguageProvider::getInstance().getLanguage( p_file->getLanguageType() );

 if( p_lang == nullptr )
   {
	 cerr << "Error when retrieving the language instance. Skipping file parsing: " << p_file->getName() << endl;
	 return;
   }

 // Reset own variables
 commentOpen   = false;
 codeAvailable = false;

 reset( p_iFile );					// Reset file statistics

 // Open file for reading
 std::ifstream sourceFile( p_file->getName().c_str() );

 TRACE( " : Parsing file" , p_file->getName() )

 // Reserve capacity on the string to avoid reallocs
 line.reserve( LOC_FILE_READ_BUFFER_SIZE );

 if( sourceFile.is_open() )
   {
	 while( getline( sourceFile, line ) )
	      {
		 	addLine();
		 	processLine( line );
	      }

     sourceFile.close();
   }

 TRACE_EXIT
}



