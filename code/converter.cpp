// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Convert a wide string into UTF-8 for Windows OS support
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <cctype>
#include <cstring>
#include <codecvt>
//#include <iostream>
#include <string>
#include <locale>

// Import module declarations
#include "trace.hh"
#include "converter.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( converter )


// Already in UTF-8
void converter::UTF8( const std::string & source, std::string & target )
{
 TRACE_POINT
 target = source;
}

// Convert to UTF-8
void converter::UTF8( const std::wstring & source, std::string & target )
{
 TRACE_ENTER

 std::wstring_convert< std::codecvt_utf8<wchar_t>, wchar_t > converter;

 target = converter.to_bytes( source );

 TRACE_EXIT
}


void converter::lower( std::string & str )
{
 std::size_t i = 0;

 while( str[ i++ ] != '\0' )
	    str[ i ] = tolower( (int) str[ i ] );

}



