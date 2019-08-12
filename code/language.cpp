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
#include "trace.hh"
#include "loc_defs.hh"
#include "languageType.hh"
#include "comment.hh"
#include "language.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language )


language::~language()
{
 // Delete comment instances
}


language * language::builder( languageType type )
{
 comment * p_cmt	= nullptr;
 language * p_lang	= nullptr;

 TRACE_ENTER
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
	 	 	 	 	 	 	 p_cmt->setStart( "#" );
	 	 	 	 	 	 	 p_lang->addComment( p_cmt );
	 	 	 	 	 	 	 break;

	// The next case is just to silence the compiler
  	case languageType::unknown:
  	default:				 break;
 }

 TRACE_EXIT

 return p_lang;
}

