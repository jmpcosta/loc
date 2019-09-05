// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a generic Report
//
// *****************************************************************************************

#ifndef LOC_REPORT_HH_
#define LOC_REPORT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <set>

// Import own headers
#include "trace_macros.hh"
#include "options.hh"
#include "files/fileSet.hh"
#include "language/languageType.hh"
#include "report/reportType.hh"




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class that represents a generic report
class report
{
public:

		/// @brief Class constructor
		virtual					~report	( void ) {}

		/// @brief Class destructor
								report	( void );

		// All reports must have a generate method with the same signature
		/// @brief Interface method to generate a report
		/// @param [in] options - The operator selection
		/// @param [in] files   - The files for which the report must be generated
		virtual void			generate		( progOptions & options, fileSet * files	);

		// Factory method
		/// @brief Create a report of the type selected by the operator
		/// @param [in] type - The report identifier
		/// @return A pointer to the newly created report
		static	report *		build			( reportType type 							);

protected:
		// Methods

		/// @brief Interface to write statistics for the given item
		/// @param [in] n - An item name
		/// @param [in] l - An item language
		/// @param [in] s - An item statistics
		virtual void 			writeItem		( const char * n,  const char * l, statistics & s 	)	= 0;

		/// @brief Interface to write a report header
		virtual void			writeHeader		( void 												)	= 0;

		/// @brief Write statistics for the file set
		/// @param [in] files - The files for which the report must be generated
		virtual void			writeFiles		( fileSet * files									);

		/// @brief Interface to write the report summary statistics
		virtual void			writeSummary	( void 												)	= 0;


		// For output redirect
		/// @brief Direct output either for console or file
		/// @param [in] options - Selected output medium
		virtual void			setOutput		( progOptions & options 							);

		/// @brief Restore output to the console, in case the output was redirected to a file
		virtual void			restoreOutput	( void					 							);

		// Variables
		bool					details;		///< Provide file statistics

		// Output redirect
		std::streambuf * 		p_iStreamBuf;	///< Output buffer stream
		std::ofstream			output;			///< Output file stream

private:
		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_REPORT_HH_
