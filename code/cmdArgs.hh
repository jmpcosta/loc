// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the command line arguments
//
// *****************************************************************************************

#ifndef LOC_ARGS_HH_
#define LOC_ARGS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "options.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

bool parse_command_line( int argc, t_char * argv[], progOptions & options );

#endif // LOC_ARGS_HH_
