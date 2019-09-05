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
		/// @brief Implementation of interface to write statistics for the given item
		/// @param [in] n - An item name
		/// @param [in] l - An item language
		/// @param [in] s - An item statistics
		void 			writeItem		( const char * n,  const char * l, statistics & s 	);

		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] n - An item name
		/// @param [in] l - An item language
		/// @param [in] s - An item statistics
		static void		writeStatistics	( const char * n,  const char * l, statistics & s	);

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
