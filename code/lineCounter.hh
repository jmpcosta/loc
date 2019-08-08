// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the code counter
//
// *****************************************************************************************

#ifndef LOC_LINECOUNTER_HH_
#define LOC_LINECOUNTER_HH_

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

// Count lines of code
class lineCounter
{
public:
					lineCounter	( void )	{ counter = (uint64_t) 0; }
		void		reset		( void )	{ counter = (uint64_t) 0; }

		void		add 		( void )	{ counter++; }
		void		sub 		( void )	{ counter--; }


private:
		uint64_t	counter;
};



}	// End of namespace "code"

#endif // LOC_LINECOUNTER_HH_
