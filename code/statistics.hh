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
					~statistics() {}

		void		reset			( void );

		void		addLoc			( void )		{ i_loc++;				}
		void		addLine			( void )		{ i_nlines++;			}
		void		addEmptyLine	( void )		{ i_nEmptyLines++;		}

		uint64_t	getLoc			( void )		{ return i_loc;			}
		uint64_t	getLines		( void )		{ return i_nlines;		}
		uint64_t	getEmptyLines	( void )		{ return i_nEmptyLines;	}

		bool		areAvailable	( void )		{ return i_available;	}
		void		setAvailable	( bool b )		{ i_available = b;		}

		void		addStats		( statistics & s );


private:
		bool		i_available;
		uint64_t	i_nlines;
		uint64_t	i_loc;
		uint64_t	i_nEmptyLines;
		// ...
		TRACE_CLASSNAME_DECLARATION
};






#endif // LOC_STATISTICS_HH_
