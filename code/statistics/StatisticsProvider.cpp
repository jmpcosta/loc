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
#include <stdexcept>
#include <iostream>
#include <algorithm>

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "statistics/StatisticsProvider.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( StatisticsProvider )

StatisticsProvider::~StatisticsProvider( void )
{
 TRACE_POINT
}


bool StatisticsProvider::exists( languageType key )
{
 TRACE_POINT

 for( auto & i : iLanguages )
	  if( i == key ) return true;

 return false;
}

bool StatisticsProvider::exists( const void * key )
{
 TRACE_POINT

 for( auto & i : iFiles )
	  if( i == key ) return true;

 return false;
}


statistics & StatisticsProvider::getLanguage( languageType key )
{
 TRACE_POINT

 for( auto & i : iLanguages )
	  if( i == key ) return i.getStatistics();

 throw std::out_of_range( "No language found in statistics" );
}

statistics & StatisticsProvider::getFile( const void * key )
{
 TRACE_POINT

 for( auto & i : iFiles )
	  if( i == key ) return i.getStatistics();

 throw std::out_of_range( "No file found in statistics" );
}


void StatisticsProvider::addStatistics( languageType l, void * f, statistics & s )
{
 iGlobal.add( s );

 auto itl = std::find( iLanguages.begin(), iLanguages.end(), l );
 if( itl == iLanguages.end() )
	 iLanguages.push_back( languageStatistics( l, s ) );
 else
	 itl->addStatistics( s );

 auto itf = std::find( iFiles.begin(), iFiles.end(), f );
 if( itf == iFiles.end() )
	 iFiles.push_back( fileStatistics( f, s ) );
 else
	 itl->addStatistics( s );

}


void StatisticsProvider::setCapacity( std::size_t size )
{
 iLanguages.reserve( LOC_LANGUAGE_DEFAULT_SIZE );
 iFiles.reserve( size );
}





