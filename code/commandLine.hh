// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the command line arguments
//
// *****************************************************************************************

#ifndef LOC_COMMANDLINE_HH_
#define LOC_COMMANDLINE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "loc_defs.hh"
#include "trace_macros.hh"
#include "options.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for representing the program command line parameters
class commandLine
{
public:
		/// @brief Class constructor
				commandLine		( void ) {}

		/// @brief Class destructor
				~commandLine	( void ) {}

		/// @brief Parse the program command line parameters
		/// @param [in] argc - The number of command line parameters
		/// @param [in] argv - The command line parameters
		/// @param [out] options - The object that represents the program parameterization
		/// @return Was the parsing of command line parameters successful ?
		bool 	parse				( int argc, t_char * argv[],		progOptions & options	);

private:
		/// @brief Verify if a user input parameter matches a program option
		/// @param [in] parameter - The input parameter (to the program)
		/// @param [in] options   - The program option to check for
		/// @return True if input parameter and program option match. False otherwise.
		bool 	checkParam			( const std::string  & parameter,	const char * option		);

		/// @brief Set the report format option
		/// @param [in] format   - Report format to generate
		/// @param [out] options - The object that represents the program parameterization
		void 	setOutputFormat		( const std::string  & format,		progOptions & options	);

		// Variables
		TRACE_CLASSNAME_DECLARATION
};

#endif // LOC_COMMANDLINE_HH_
