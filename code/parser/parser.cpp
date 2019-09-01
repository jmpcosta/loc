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


