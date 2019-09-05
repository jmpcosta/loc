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
#include <cstdint>

// Import module declarations
#include "statistics/statistics.hh"


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
 i_nComments	= 0;
 i_available	= false;
}

statistics::statistics( const statistics & stats )
{
 i_loc			= stats.i_loc;
 i_nlines		= stats.i_nlines;
 i_nEmptyLines	= stats.i_nEmptyLines;
 i_available	= stats.i_available;
 i_nComments	= stats.i_nComments;
}


void statistics::reset( void )
{
 i_loc			= 0;
 i_nlines		= 0;
 i_nEmptyLines	= 0;
 i_nComments	= 0;
 i_available	= false;
}


void statistics::add( statistics & stats )
{
 if( stats.i_available )
   {
	 i_loc			+= stats.i_loc;;
	 i_nlines		+= stats.i_nlines;
	 i_nEmptyLines	+= stats.i_nEmptyLines;
	 i_nComments	+= stats.i_nComments;
   }
}

