// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the command line arguments
//
// *****************************************************************************************

#ifndef LOC_INSIGHT_HH_
#define LOC_INSIGHT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstdint>

// Import application headers
#include "options.hh"
#include "fileSet.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

namespace code
{


void insight( progOptions & options, fileSet * files );



}	// End of namespace "code"

#endif // LOC_INSIGHT_HH_
