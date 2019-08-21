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

// Import project headers
#include "trace.hh"
#include "language.hh"


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
