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
#include <algorithm>

// Import module declarations
#include "trace.hh"
#include "files/fileSet.hh"
#include "language/LanguageProvider.hh"
#include "parser/parser.hh"

using namespace std;


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
	 cerr << "Error when retrieving the language instance. Skipping file parsing: " << p_file->getName() << endl;
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

// Insensitive Case search
std::size_t parser::findToken( const std::string & what, const std::string & where, std::size_t start )
{
 // Not very efficient..
 std::string what_cpy	= what;
 std::string where_cpy	= where ;

 std::transform( what_cpy.begin(),  what_cpy.end(),  what_cpy.begin(),  ::tolower );
 std::transform( where_cpy.begin(), where_cpy.end(), where_cpy.begin(), ::tolower );

 return where_cpy.find( what_cpy, start );
}

