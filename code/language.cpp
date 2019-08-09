// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a programming language relevant (to the application) settings
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
#include "languageType.hh"
#include "comment.hh"
#include "language.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

namespace code
{


language::~language()
{
 // Delete comment instances
}


language * language::builder( languageType type )
{
 comment * p_cmt	= nullptr;
 language * p_lang	= nullptr;

 switch( type )
 {
 	 case languageType::C:
  	 case languageType::CPP:
  	 case languageType::JAVA:
  		 	 	 	 	 	 p_lang = new language( type );
  		 	 	 	 	 	 p_cmt = new comment();
  		 	 	 	 	 	 p_cmt->setStart( "//" );
 		 	 	 	 	 	 p_lang->addComment( p_cmt );

 		 	 	 	 	 	 p_cmt = new comment();
 		 	 	 	 	 	 p_cmt->setStart( "/*" );
 		 	 	 	 	 	 p_cmt->setEnd  ( "*/" );
 		 	 	 	 	 	 p_cmt->setMultiline();
 		 	 	 	 	 	 p_lang->addComment( p_cmt );
 		 	 	 	 	 	 break;

  	case languageType::BASH:
  	case languageType::BOURNE:
  	case languageType::CSH:
  							 p_lang = new language( type );
	 	 	 	 	 	 	 p_cmt = new comment();
	 	 	 	 	 	 	 p_cmt->setStart( "//" );
	 	 	 	 	 	 	 p_lang->addComment( p_cmt );
	 	 	 	 	 	 	 break;

	// The next case is just to silence the compiler
  	case languageType::unknown:
  	default:				 break;
 }

 return p_lang;
}

void language::processLine( std::string & line, statistics & stats )
{
 std::cerr << __FUNCTION__ << " : Parsing line:" << line << std::endl;

 stats.addLine();

}

void language::parse( std::string & filename, statistics & stats )
{
 // Open file for reading
 std::ifstream file( filename.c_str() );

 std::cerr << __FUNCTION__ << " : Parsing file" << filename << std::endl;

 if( file.is_open() )
   {
	 std::string line;

	 while( getline( file, line ) )
	 	    processLine( line, stats );

	 std::cerr << __FUNCTION__ << " : Number of lines in file: " << stats.getLines() << std::endl;

	 file.close();
   }
}


}	// End of namespace "code"
