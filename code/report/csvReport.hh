// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a report written in CSV format
//
// *****************************************************************************************

#ifndef LOC_CSV_REPORT_HH_
#define LOC_CSV_REPORT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import own headers
#include "trace_macros.hh"
#include "options.hh"
#include "files/fileSet.hh"
#include "report/report.hh"




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for generating a CSV based report
class csvReport : public report
{
public:
		/// @brief Class destructor
						~csvReport	( void ) {}

		/// @brief Class constructor
						csvReport	( void ) { separator = ';'; }

private:
		// Methods
		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] str   - A item name
		/// @param [in] stats - The statistics to generate for the item
		void			writeStats		( const char * str, statistics & s	);

		/// @brief Write a report header to a file or standard output
		void			writeHeader		( void );

		/// @brief Write a report summary to a file or standard output
		void			writeSummary	( void );

		// variables
		char			separator;			///< Output separator character for CSV

		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_CSV_REPORT_HH_
