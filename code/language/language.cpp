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
#include <cstring>

// Import project headers
#include "trace.hh"
#include "converter.hh"
#include "language/language.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language )



language::language()
{
 lang = languageType::unknown;
}


language::~language()
{
 TRACE_ENTER

 for( auto i : comments )
    {
	  TRACE( "Deleting comment: ", i->getStart() )
	  delete i;
    }

 comments.clear();

 TRACE_EXIT
}



parserType language::getParserType( void )
{
 return parserType::stream;	// Set a default parser type
}



