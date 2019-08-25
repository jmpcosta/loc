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

#include "files/file.hh"
#include "files/fileSet.hh"
#include "language/language.hh"
#include "trace_macros.hh"
#include "options.hh"


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
						~code			() {}

		/// @brief The main entry point into the code analysis
		/// @param [in] options - Object containing the options passed to the program
		/// @param [in] files   - The list of file objects to process
		void			insight			( progOptions & options, fileSet * files		);


private:
		// Methods

		/// @brief Check if the C-String contains information
		/// @param [in] str - C-String to check for information
		/// @param [in] len - Limit the search to a given length
		/// @return Success if information was found. False otherwise.
		bool			hasInformation	( const char * str, std::size_t len 			);

		/// @brief Parse a source file
		/// @param [in] sourceFile - The input file to parser
		void			parse			( std::ifstream & sourceFile					);

		/// @brief Search for information in a input line
		/// @param [in] line  - String to search
		/// @param [in] start - Index of the line where to search for information
		void			search			( std::string & line, std::size_t start			);

		/// @brief Search an input line for the end of language comment token
		/// @param [in] line  - String to search
		/// @param [in] start - Index of the line where to search for information
		void			endComment		( std::string & line, std::size_t start			);

		/// @brief Search an input line for any comment start token
		/// @param [in] line  - String to search
		/// @param [in] start - Index of the line where to search for information
		void			beginComment	( std::string & line, std::size_t start			);

		/// @brief Process an input line for information
		/// @param [in] line  - String to search
		void			processLine		( std::string & line							);

		/// @brief Look for code information in a file
		/// @param [in] f - File to analyze
		void			loc				( file * f										);

		/// @brief Process a set of files
		/// @param [in] options - Object containing the options passed to the program
		/// @param [in] files   - The list of file objects to process
		void			processFiles	( progOptions & options, fileSet * files		);

		/// @brief Create a report type given the selected options and set of input files
		/// @param [in] options - Object containing the options passed to the program
		/// @param [in] files   - The list of file objects to process
		void			generateReport	( progOptions & options, fileSet * files		);

		// Wrapper methods for statistics
		void			reset			( file 	*	p_file								);
		void			setAvailable	( file 	*	p_file, bool value					);
		void			addLine			( void 											);
		void			addEmptyLine	( void 											);
		void			addLoc			( void 											);


		// Variables
		language *		p_lang;					///< Pointer to a language object
		bool			codeAvailable;			///< Is Code available in line ?
		bool			commentOpen;			///< Search for an end token ?
		file	*		ip_file;				///< Current file being processed

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_CODE_HH_
