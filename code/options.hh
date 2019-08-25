// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions for the program arguments
//
// *****************************************************************************************

#ifndef LOC_OPTIONS_HH_
#define LOC_OPTIONS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import own headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "report/reportType.hh"


// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************


/// @brief Class responsible for holding the operator selected options
class progOptions
{
public:
		/// @brief Class constructor
								progOptions		();

		/// @brief Class destructor
								~progOptions	()								{}

		/// @brief Set the programming language to search for
		/// @param [in] lang - Language type
		void 					setLanguage		( languageType lang )			{ language = lang;	}

		/// @brief Obtain the selected (to search) programming language
		/// @return Language ID
		languageType			getLanguage		( void ) const           		{ return language;	}

		/// @brief Set the file or directory to analyze
		/// @param [in] path - Pathname to file or directory
		void 					setPath			( const std::string & path	)  	{ pathname = path;	}

		/// @brief Set the file or directory to analyze
		/// @param [in] path - Pathname to file or directory
		void 					setPath			( const char * path			)	{ pathname = path;	}

		/// @brief Get the file or directory under analyze
		/// @return Path to file or directory
		const std::string &	 	getPath			( void ) const         		  	{ return pathname;	}

		/// @brief Output must contain file statistics?
		/// @param [in] verb - True if file details are required or false otherwise
		void					setVerbose		( bool verb )					{ iVerbose = verb;	}

		/// @brief Are file statistics required
		/// @return True if file details are required. False otherwise
		bool					isVerbose		( void 		)					{ return iVerbose;	}

		/// @brief Set the output report format (text, csv, etc.)
		/// @param [in] type - Output format ID
		void					setFormat		( reportType type )				{ iType = type;		}

		/// @brief What is the report format?
		/// @return Report format ID
		reportType 				getFormat		( void )						{ return iType;		}

		/// @brief Set the output file name
		/// @param [in] name - Pathname to report file
		void					setOutput		( const std::string name )		{ iName = name;		}

		/// @brief What is the report pathname to generate?
		/// @return Report file name
		std::string				getOutput		( void )	const				{ return iName;		}

private:

		languageType			language;		///< The language type to search for
		std::string				pathname;		///< The file or directory to search
		bool					iVerbose;		///< Display detailed information by file
		reportType				iType;			///< Which report format to output
		std::string				iName;			///< The report file name to generate

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_OPTIONS_HH_
