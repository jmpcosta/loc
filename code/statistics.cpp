// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implementation for processing code statistics
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
#include <string>

// Import module declarations
#include "trace.hh"
#include "statistics.hh"

using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( statistics )

statistics::statistics()
{
 TRACE_POINT
 nlines = loc = nEmptyLines = 0;
}
statistics::~statistics()
{
 TRACE_POINT
}

void statistics::addLoc( void )
{
 TRACE_POINT
 loc++;
}
void statistics::addLine( void )
{
 TRACE_POINT
 nlines++;
}

void statistics::addEmptyLine( void )
{
 TRACE_POINT
 nEmptyLines++;
}

uint64_t statistics::getLoc( void )
{
 TRACE_POINT
 return loc;
}

uint64_t statistics::getLines( void )
{
 TRACE_POINT
 return nlines;
}
uint64_t statistics::getEmptyLines( void )
{
 TRACE_POINT
 return nEmptyLines;
}

