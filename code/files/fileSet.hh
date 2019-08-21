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

// Import application headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "files/file.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


//typedef std::vector<file *>::iterator			fileSetIterator;
typedef std::vector<file *>::const_iterator		const_fileSetIterator;

class fileSet
{
public:
								~fileSet();

		typedef std::vector<file *>::iterator		iterator;
		typedef std::vector<file *>::const_iterator	const_iterator;

		// Forward fileSet iterator for the container vector
		iterator				begin() 			{ return locations.begin(); }
		const_iterator 			begin() const 		{ return locations.begin(); }
		iterator				end()				{ return locations.end();	}
		const_iterator			end() const			{ return locations.end();	}

		// Factory method
		static fileSet  *		builder				( const t_string & pathname );

private:
								fileSet				( file * file );
								fileSet				( std::vector<file *> & vec );

		// Private Factory method when a pathname is a directory
		static fileSet  *		directoryBuilder	( const t_string & pathname );

		// Pathnames to file system elements
		std::vector<file *>		locations;

		TRACE_CLASSNAME_DECLARATION
};




#endif // LOC_FILESET_HH_
