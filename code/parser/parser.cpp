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
#include <fstream>
#include <filesystem>
#include <algorithm>

// Import module declarations
#include "trace.hh"
#include "files/fileSet.hh"
#include "language/LanguageProvider.hh"
#include "parser/parser.hh"


// *****************************************************************************************
//
// Section: Constants and internal variables
//
// *****************************************************************************************


TRACE_CLASSNAME( parser )


// *****************************************************************************************
//
// Section: Public Function definition
//
// *****************************************************************************************

void parser::parse( file * p_file )
{
 if( p_file == nullptr ) return;	// Safety check

 p_iFile	= p_file;
 p_lang		= LanguageProvider::getInstance().getLanguage( p_file->getLanguageType() );

 if( p_lang == nullptr )
   {
	 std::cerr << "Error when retrieving the language instance. Skipping file parsing: " << p_file->getName() << std::endl;
	 return;
   }

 iStats.reset();

 // Open file for reading
 iSourceFile.open( p_file->getName().c_str() );

 if( iSourceFile.is_open() )
   {
	 specificParse();
	 iSourceFile.close();
   }

}


// Each comment token must be set in the language to lower case, this avoids an extra std::transform
std::size_t parser::findToken( std::string_view token, std::string_view data, bool sensitive )
{
 std::size_t		pos = std::string::npos;

 TRACE( "Entering with (", token, "), (", data, "):", sensitive )

 if( sensitive )
	 pos = data.find( token.data(), 0, token.size() );
 else
   {
	 // Not very efficient.. but not performance relevant
	 std::string where { data };

	 std::transform( where.begin(), where.end(), where.begin(), ::tolower );

	 pos = where.find( token );
   }

 TRACE( "Exiting with token location:", pos )

 return pos;
}
