// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a text format base report
//
// *****************************************************************************************

#ifndef LOC_TEXT_REPORT_HH_
#define LOC_TEXT_REPORT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import own headers
#include "trace_macros.hh"
#include "options.hh"
#include "statistics/statistics.hh"
#include "files/fileSet.hh"
#include "report/report.hh"




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for generating a text based report
class textReport : public report
{
public:
		/// @brief Class destructor
						~textReport		( void ) {}

		/// @brief Class constructor
						textReport		( void );

private:
		// Methods
		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] str   - A item name
		/// @param [in] stats - The statistics to generate for the item
		void			writeItem		( const char * name, statistics & stats	);

		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] str   - A item name
		/// @param [in] stats - The statistics to generate for the item
		static void		writeStatistics	( const char * name, statistics & stats	);

		/// @brief Write a report header to a file or standard output
		void			writeHeader		( void	);

		/// @brief Write a report line separator to a file or standard output
		void			writeSeparator	( void	);

		/// @brief Write a report summary to a file or standard output
		void			writeSummary	( void 	);

		/// @brief Write summary statistics for the given language
		void 			writeLangStats	( void );

		// Variables

		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_TERMINAL_REPORT_HH_
