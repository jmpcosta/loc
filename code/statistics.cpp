// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implement the statistics class
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import module declarations
#include "statistics.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


statistics::statistics()
{
 i_loc			= 0;
 i_nlines		= 0;
 i_nEmptyLines	= 0;
 i_available	= false;
}

void statistics::reset( void )
{
 i_loc			= 0;
 i_nlines		= 0;
 i_nEmptyLines	= 0;
 i_available	= false;
}
