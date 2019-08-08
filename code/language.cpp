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

// Import module declarations
#include "comment.hh"
#include "language.hh"
#include "languageType.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

namespace code
{



language * language::builder( languageType type )
{
 if( type == languageType::unknown )
	 return nullptr;

 language * p_lang = new language( type );

 switch( type )
 {
 	 case languageType::C:
  	 case languageType::CPP:
  		 	 	 	 	 	 comment * p_cmt = new comment();
  		 	 	 	 	 	 p_cmt->setStart( "//" );
 		 	 	 	 	 	 p_lang->addComment( p_cmt );

 		 	 	 	 	 	 p_cmt = new comment();
 		 	 	 	 	 	 p_cmt->setStart( "/*" );
 		 	 	 	 	 	 p_cmt->setEnd  ( "*/" );
 		 	 	 	 	 	 p_cmt->setMultiline();
 		 	 	 	 	 	 p_lang->addComment( p_cmt );


 }

 return p_lang;
}


language::~language()
{
 // Delete comment instances
}


}	// End of namespace "code"
