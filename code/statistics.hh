// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for aggregation of code statistics
//
// *****************************************************************************************

#ifndef LOC_STATISTICS_HH_
#define LOC_STATISTICS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstdint>

// Import application headers
#include "trace_macros.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class statistics
{
public:
					statistics();
					~statistics();

		void		addLoc			( void );
		void		addLine			( void );
		void		addEmptyLine	( void );

		uint64_t	getLoc			( void );
		uint64_t	getLines		( void );
		uint64_t	getEmptyLines	( void );

private:
		uint64_t	nlines;
		uint64_t	loc;
		uint64_t	nEmptyLines;
		// ...
		TRACE_CLASSNAME_DECLARATION
};






#endif // LOC_STATISTICS_HH_
