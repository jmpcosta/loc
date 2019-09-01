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


/// @brief Class responsible for holding statistics
class statistics
{
public:
		/// @brief Default Class constructor
					statistics();

		/// @brief Class constructor using another statisics object
					statistics( statistics & s );

		/// @brief Class destructor
					~statistics() {}

		/// @brief Reset statistics
		void		reset			( void );

		/// @brief Add a line of code to statistics
		void		addLoc			( void )		{ i_loc++;				}

		/// @brief Add one more processed line to statistics
		void		addLine			( void )		{ i_nlines++;			}

		/// @brief Add one more empty line to statistics
		void		addEmptyLine	( void )		{ i_nEmptyLines++;		}

		/// @brief Get the number of lines of code from statistics
		/// @return Lines of code
		uint64_t	getLoc			( void )		{ return i_loc;			}

		/// @brief Get the number of processed lines from statistics
		/// @return Number of processed lines
		uint64_t	getLines		( void )		{ return i_nlines;		}

		/// @brief Get the number of empty lines from statistics
		/// @return Number of empty lines
		uint64_t	getEmptyLines	( void )		{ return i_nEmptyLines;	}

		/// @brief Get the availability of statistics
		/// @return True if available. False otherwise
		bool		areAvailable	( void )		{ return i_available;	}

		/// @brief Set statistics to an available state
		/// @param [in] b - Available (or true) or not available (false)
		void		setAvailable	( bool b )		{ i_available = b;		}

		/// @brief Add the provided statistics to the current ones
		/// @param [in] s - Statistics to add
		void		add				( statistics & s );


private:
		bool		i_available;		///< Are statistics available ?
		uint64_t	i_nlines;			///< Number of lines
		uint64_t	i_loc;				///< Number of code lines
		uint64_t	i_nEmptyLines;		///< Number of empty lines

		TRACE_CLASSNAME_DECLARATION
};






#endif // LOC_STATISTICS_STATISTICS_HH_
