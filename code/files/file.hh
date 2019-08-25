// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for handling the FS elements to be processed
//
// *****************************************************************************************

#ifndef LOC_FILE_HH_
#define LOC_FILE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "statistics.hh"
#include "language/languageType.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible to represent an individual file for analysis
class file
{
public:
		/// @brief Class destructor
								~file			( void );

		/// @brief Obtain the file name
		/// @return Name of this file
		const std::string &		getName			( void ) const	{ return iName;		}

		/// @brief Obtain the language identifier for the file
		/// @return The file language identifier
		languageType			getLanguage		( void ) const	{ return iLang;		}

		/// @brief Get access to the file statistics
		/// @return A reference to the file statistics object
		statistics & 			getStatistics	( void ) 		{ return iStats;	}

		/// @brief Factory method to create file objects
		/// @param [in] pathname - Name of the file path
		/// @return Pointer to the new file object
		static file  *			builder			( const std::string & pathname );

private:
		/// @brief Class constructor
		/// @param [in] filename - Name of file for which the object will be constructed to represent
								file			( const std::string & filename );

		std::string				iName;			///< The file name
		languageType			iLang;			///< The Language identifier
		statistics				iStats;			///< The file statistics

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_FILE_HH_
