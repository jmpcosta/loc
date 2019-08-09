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


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

namespace code
{


class statistics
{
public:
					statistics()			 { nlines = loc = nEmptyLines = 0; }
					~statistics() {}

		void		addLoc			( void ) { loc++;				}
		void		addLine			( void ) { nlines++;			}
		void		addEmptyLine	( void ) { nEmptyLines++;		}

		uint64_t	getLoc			( void ) { return loc;			}
		uint64_t	getLines		( void ) { return nlines;		}
		uint64_t	getEmptyLines	( void ) { return nEmptyLines;	}

private:
		uint64_t	nlines;
		uint64_t	loc;
		uint64_t	nEmptyLines;
		// ...
};





} 		// End of namespace "code"




#endif // LOC_STATISTICS_HH_
