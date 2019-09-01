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
#include <filesystem>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
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
		languageType			getLanguageType	( void ) const	{ return iLang;		}

		/// @brief Factory method to create file objects
		/// @param [in] pathname - Name of the file path
		/// @return Pointer to the new file object
		static file  *			builder			( const std::filesystem::path & pathname );

private:
		/// @brief Class constructor
		/// @param [in] filename	- Name of file for which the object will be constructed to represent
		/// @param [in] lTye 		- Language identifier to associate with the file
								file			( const std::string & filename, languageType lType );

		std::string				iName;			///< The file name
		languageType			iLang;			///< The Language identifier

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_FILE_HH_
