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



bool language::checkExtension( const char * p_extension, const char ** p_extensionList )
{
 int i = 0;

 if( p_extension != nullptr && p_extensionList != nullptr )
   {
	 TRACE( "Searching extension:", p_extension )

	 while( p_extensionList[ i ] != nullptr )
      	  {
		 	if( strcasecmp( p_extensionList[ i ], p_extension ) == 0 )	// Strings match
		 	  {
		 		TRACE( "Exiting with language:", i )

	 			return true;
		 	  }
		 	i++;
      	  }
   }

 TRACE( "Unknown language" )

 TRACE_EXIT

 return false;
}
