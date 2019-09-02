// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for file code statistics
//
// *****************************************************************************************

#ifndef LOC_FILE_STATISTICS_HH_
#define LOC_FILE_STATISTICS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
//#include <cstdint>
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "statistics/statistics.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for holding statistics for a file
class fileStatistics
{
public:
		/// @brief Class constructor
							fileStatistics		( const void * pf, statistics & s )	: iStats( s )	{ p_iFile = pf;	}

		/// @brief Class constructor
							fileStatistics		( const fileStatistics & fs ) : iStats( fs.iStats ) { p_iFile = fs.p_iFile; }

		/// @brief Class destructor
							~fileStatistics		() {}

		/// @brief Get a reference to a statistics
		/// @return The language statistics object reference
		statistics 	&		getStatistics		( void 			 )		{ return iStats; }

		/// @brief Add statistics to the current file
		void				addStatistics		( statistics & s )		{ iStats.add( s ); }

		/// @brief Compare the language type, i.e. the language ID
		/// @return True if language IDs are equal. False otherwise
		bool	operator==( const void * key )							{ return (key == p_iFile); }

private:
		const void 		*	p_iFile;		///< File object
		statistics			iStats;		///< File statistics

		TRACE_CLASSNAME_DECLARATION
};






#endif // LOC_FILE_STATISTICS_HH_
