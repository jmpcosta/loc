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

// Import module declarations
#include "cmdArgs.hh"
#include "fileSet.hh"
#include "insight.hh"
#include "fileExtensions.hh"
#include "fileSet.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

namespace code
{

void insight( progOptions & options, fileSet * files )
{
  for( auto it : *files )
       it->insight();
}



}	// End of namespace "code"
