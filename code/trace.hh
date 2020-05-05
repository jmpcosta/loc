// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide tracing declarations/definitions
//
// *****************************************************************************************

#ifndef LOC_TRACE_HH_
#define LOC_TRACE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <iostream>



// *****************************************************************************************
//
// Section: Trace API declaration/definition
//
// *****************************************************************************************


#ifdef LOC_TRACING

// Trace template composed of the next two entries
template <std::string_view>
void trace( std::string_view value )
{
 for( const auto & i: value )
	  std::cerr << i;

 std::cerr << std::endl;
}

template <typename V>
void trace( const V & value  )
{
 std::cerr << value;
 std::cerr << std::endl;
}


template <typename V, typename... R>
void trace( const V & value, const R & ... rest  )
{
 std::cerr << value;

 trace( rest... );
}


#endif	// LOC_TRACING





#endif /* LOC_TRACE_HH_ */
