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
 i_available	= false;
}

statistics::statistics( const statistics & s )
{
 i_loc			= s.i_loc;
 i_nlines		= s.i_nlines;
 i_nEmptyLines	= s.i_nEmptyLines;
 i_available	= s.i_available;
}


void statistics::reset( void )
{
 i_loc			= 0;
 i_nlines		= 0;
 i_nEmptyLines	= 0;
 i_available	= false;
}


void statistics::add( statistics & stats )
{
 if( stats.areAvailable() )
   {
	 i_loc			+= stats.getLoc();
	 i_nlines		+= stats.getLines();
	 i_nEmptyLines	+= stats.getEmptyLines();
   }
}

