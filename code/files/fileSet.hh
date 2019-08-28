// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for handling the FS elements to be processed
//
// *****************************************************************************************

#ifndef LOC_FILESET_HH_
#define LOC_FILESET_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>
#include <vector>
#include <filesystem>

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "files/file.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class responsible to create a set of files for analyze
class fileSet
{
public:
		/// @brief Class destructor
								~fileSet();

		typedef std::vector<file *>::iterator		iterator;					///< An alias for the vector (file) iterator
		typedef std::vector<file *>::const_iterator	const_iterator;				///< An alias for the vector (file) constant iterator

		// Forward fileSet iterator for the container vector

		/// @brief Return an iterator proxy to the begining of the files vector
		/// @return Comment begin iterator
		iterator				begin() 			{ return locations.begin(); }

		/// @brief Return a constant iterator proxy to the begining of the files vector
		/// @return Constant begin iterator
		const_iterator 			begin() const 		{ return locations.begin(); }

		/// @brief Return an iterator proxy to the end of the files vector
		/// @return End iterator
		iterator				end()				{ return locations.end();	}

		/// @brief Return a constant iterator proxy to the end of the files vector
		/// @return Constant end iterator
		const_iterator			end() const			{ return locations.end();	}

		/// @brief Factory method for a set of files
		/// @param [in] pathname - The starting pathname
		/// @return A pointer to a new fileset object. Null pointer if an error occurs
		static fileSet  *		builder				( const std::string & pathname );

private:
		/// @brief Class constructor
		/// @param [in] file - Build a fileset based on a single file object
								fileSet				( file * file );

		/// @brief Class constructor
		/// @param [in] vec - Build a fileset based on a list of file objects
								fileSet				( std::vector<file *> & vec );

		/// @brief Factory method for a file.
		/// @param [in] pathname - The file name to add
		/// @return A pointer to a new file object. Null pointer if an error occurs
		static file *			fileBuilder			( const std::filesystem::path & pathname );

		// Private Factory method when a pathname is a directory
		/// @brief Factory method for a directory, i.e. when the pathname is a directory and not a file
		/// @param [in] pathname - The directory name to start with
		/// @return A pointer to a new fileset object. Null pointer if an error occurs
		static fileSet  *		directoryBuilder	( const std::string & pathname );

		// Pathnames to file system elements
		std::vector<file *>		locations;			///< The set of files to analyze

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_FILESET_HH_
