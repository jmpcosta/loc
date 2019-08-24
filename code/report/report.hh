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


class report
{
public:
		virtual					~report	( void ) {}
								report	( void );

		// All reports must have a generate method with the same signature
		virtual void			generate		( progOptions & options, fileSet * files );

		// Factory method
		static	report *		build( reportType type );

protected:
		// Methods
		virtual void 			writeStats		( const char * str, statistics & stats 	)	= 0;
		virtual void			writeLangStats	( void									);

		virtual void			writeHeader		( void 									)	= 0;
		virtual void			writeFiles		( fileSet * files						);
		virtual void			writeSummary	( void 									)	= 0;


		// For output redirect
		virtual void			setOutput		( progOptions & options 				);
		virtual void			restoreOutput	( void					 				);

		// Variables
		bool					details;
		std::size_t				nFiles;
		statistics				global;
		std::set<languageType>	langTypes;

		// Output redirect
		std::streambuf * 		p_iStreamBuf;
		std::ofstream			output;

private:
		TRACE_CLASSNAME_DECLARATION
};



#endif // LOC_REPORT_HH_
