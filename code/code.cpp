// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide insight into the code namely the number of lines of code
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

// Import module declarations
#include "trace.hh"
#include "options.hh"
#include "LanguageProvider.hh"
#include "fileSet.hh"
#include "code.hh"

using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( code )


code::code()
{
 TRACE_ENTER

 p_lang			= nullptr;
 codeAvailable	= false;
 commentOpen	= false;

 TRACE_EXIT
}


inline void code::addLine( void )
{ gStats.addLine(); fStats.addLine(); }

inline void code::addEmptyLine( void )
{ gStats.addEmptyLine(); fStats.addEmptyLine(); }

inline void code::addLoc( void )
{ gStats.addLoc(); fStats.addLoc(); }


// Check if there are relevant characters in the string up to a given search length
bool code::hasInformation( const char * str, std::size_t len )
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



void code::endComment( std::string & line, std::size_t start )
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
	 search( line, token_pos + len );
   }

TRACE_EXIT
}


// Process begin comment
void code::beginComment( std::string & line, std::size_t start )
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
	 len = line.size() - start - 1;

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

		 len = token_pos - start;

		 TRACE( "Search length:", len )

		 if( hasInformation( ptr, len ) )
			 codeAvailable = true;

		 TRACE_EXIT
		 return;
	   }
	 else
	   {
		 // Check if there is code before begin comment token
		 if( hasInformation( ptr, token_pos - 1 ) )
			 codeAvailable = true;

	     commentOpen = true;
	     search( line, token_pos + len );	// Check for the end
	   }
   }


 TRACE_EXIT
}




void code::search( std::string & line, std::size_t start )
{
 TRACE( "Entering with start position:", start );

 // Recursion Stop condition
 if( start >= line.size() || codeAvailable ) return;

 if( commentOpen )
	 endComment		( line, start );	// Looking for end comment token

 if( ! commentOpen )
	 beginComment	( line, start );	// Look for start comment token

 TRACE_EXIT
}



void code::processLine( std::string & line )
{
 TRACE( "------------------------------------------------------------" )
 TRACE( "Entering with commentOpen:", commentOpen ? "true": "false" )

 addLine();

 // Check for empty lines
 if( line.size() == 0 || ! hasInformation( line.c_str(), line.size() ) )
   {
	 addEmptyLine();
	 return;
   }

 codeAvailable = false;

 search( line, 0 );

 if( codeAvailable ) addLoc();

 TRACE( " : current LOC: ", fStats.getLoc() )

 TRACE_EXIT
}



void code::parse( std::ifstream  & sourceFile )
{
 std::string line;

 TRACE_ENTER

 // Reserve capacity on the string to avoid reallocs
 line.reserve( LOC_FILE_READ_BUFFER_SIZE );

 while( getline( sourceFile, line ) )
 	    processLine( line );

 TRACE_EXIT
}



void code::loc( file * fl )
{
 TRACE_ENTER

 // Reset file statistics
 fStats.reset();

 // Open file for reading
 std::ifstream sourceFile( fl->getName().c_str() );

 TRACE( " : Parsing file" , fl->getName() )

 if( sourceFile.is_open() )
   {
     parse( sourceFile );
     sourceFile.close();
   }

 std::cout << "Lines in file: "			<< fStats.getLines() 		<< std::endl;
 std::cout << "Empty lines in file: "	<< fStats.getEmptyLines()	<< std::endl;
 std::cout << "LOC in file: "			<< fStats.getLoc()			<< std::endl;
 std::cout << std::endl;

 TRACE_EXIT
}


void code::insight( progOptions & options, fileSet * files )
{
 TRACE_ENTER

 LanguageProvider & prov	= LanguageProvider::get();

 // Reset Global stats
 gStats.reset();

 // Get insight for the set of file
 for( auto it : *files )
    {
	  std::cout << "Processing file:" << it->getName() << endl;

	  p_lang = prov.getParser( it->getLanguage() );
	  loc( it );
    }

 std::cout << "TOTAL of processed lines: " 	  << gStats.getLines() 		<< std::endl;
 std::cout << "Total number of EMPTY lines: " << gStats.getEmptyLines()	<< std::endl;
 std::cout << "Total Lines of Code: "         << gStats.getLoc()		<< std::endl;
 std::cout << std::endl;

 TRACE_EXIT
}



