// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the processing of a
//			programming language file.
//
// *****************************************************************************************

#ifndef LOC_CODE_HH_
#define LOC_CODE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <cstdint>
#include <iostream>

#include "trace_macros.hh"
#include "options.hh"


#include "files/file.hh"
#include "files/fileSet.hh"
#include "language/language.hh"
#include "parser/parser.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for parsing a file language code
class code
{
public:
		/// @brief Class constructor
						code			();

		/// @brief Class destructor
						~code			();

		/// @brief The main entry point into the code analysis
		/// @param [in] options - Object containing the options passed to the program
		/// @param [in] files   - The list of file objects to process
		void			insight			( progOptions & options, fileSet * files		);


private:
		// Methods
		static void		processFile		( parser * p, file * file						);

		/// @brief Process a set of files
		/// @param [in] files   - The list of file objects to process
		void			processFiles	( fileSet * files								);

		/// @brief Create a report type given the selected options and set of input files
		/// @param [in] options - Object containing the options passed to the program
		/// @param [in] files   - The list of file objects to process
		void			generateReport	( progOptions & options, fileSet * files		);


		// Variables

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_CODE_HH_
