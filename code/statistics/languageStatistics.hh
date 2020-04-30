// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for language statistics
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_STATISTICS_HH_
#define LOC_LANGUAGE_STATISTICS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstddef>

// Import application headers
#include "trace_macros.hh"
#include "language/languageType.hh"
#include "statistics/statistics.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible for holding statistics for a language
class languageStatistics
{
public:
		/// @brief Class constructor
		/// @param [in] lType - A language type
		/// @param [in] s     - A language statistic instance
						languageStatistics	( languageType lType, statistics & s ) : iStats( s ) { iType = lType; iNFiles = 1; }

		/// @brief Class constructor
		/// @param [in] ls - A language statistic instance
						languageStatistics	( const languageStatistics & ls ) { iType = ls.iType; iNFiles = ls.iNFiles; iStats = ls.iStats; }

		/// @brief Class destructor
						~languageStatistics	( void ) {}

		/// @brief Get a reference to a statistics
		/// @return The language statistics object reference
		statistics 	&	getStatistics		( void )											{ return iStats; }

		/// @brief Obtain the number of files that contain statistics for this language
		/// @return The number of files per language
		std::size_t		getNumberLanguages	( void )											{ return iNFiles; }

		/// @brief Obtain the number of files that contain statistics for this language
		/// @return The number of files per language
		languageType	getType				( void )											{ return iType; }

		/// @brief Add statistics to the current language
		void			addStatistics		( statistics & s )									{ iStats.add( s ); iNFiles++; }

		/// @brief Compare the language type, i.e. the language ID
		/// @return True if language IDs are equal. False otherwise
		bool					operator==( languageType key )									{ return (key == iType); }


private:
		std::size_t			iNFiles;	///< Number of files for a language type
		languageType		iType;		///< Language type
		statistics			iStats;		///< File statistics

		TRACE_CLASSNAME_DECLARATION
};






#endif // LOC_LANGUAGE_STATISTICS_HH_
