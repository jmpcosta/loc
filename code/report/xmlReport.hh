// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a report written in XML format
//
// *****************************************************************************************

#ifndef LOC_XML_REPORT_HH_
#define LOC_XML_REPORT_HH_

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
class xmlReport : public report
{
public:
		/// @brief Class destructor
						~xmlReport	( void ) {}

		/// @brief Class constructor
						xmlReport	( void ) { /* separator = ';'; */ }

private:
		// Methods
		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] str   - A item name
		/// @param [in] stats - The statistics to generate for the item
		void			writeItem		( const char * str, statistics & s	);

		/// @brief Write statistics for the given item to a file or standard output
		/// @param [in] str   - A item name
		/// @param [in] stats - The statistics to generate for the item
		static void		writeStatistics	( const char * name, statistics & stats	);

		/// @brief Write a report header to a file or standard output
		void			writeHeader		( void );

		/// @brief Write a report summary to a file or standard output
		void			writeSummary	( void );

		/// @brief Write summary statistics for the given language
		void 			writeLangStats	( void );

		// variables
		//char			separator;			///< Output separator character for CSV

		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_XML_REPORT_HH_
