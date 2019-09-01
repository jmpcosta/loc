// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a generic parser.
//
// *****************************************************************************************

#ifndef LOC_PARSER_HH_
#define LOC_PARSER_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <fstream>

// Import project headers
#include "files/file.hh"
#include "language/language.hh"
#include "statistics/statistics.hh"
#include "parser/parserType.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for parsing a file language code
class parser
{
public:
		/// @brief Class constructor
							parser	() { p_lang = nullptr; p_iFile = nullptr; }

		/// @brief Class destructor
		virtual				~parser	() {}

		/// @brief Parse a source file
		/// @param [in] sourceFile - The input file to parse
		virtual void		parse	( file * sourceFile	);


		/// @brief Obtain the parser type
		/// @return The parser identifier
		virtual parserType	getType	( void				) = 0;

protected:
		// Methods
		/// @brief Calls a parser to process an open file
		virtual void specificParse	( void				) = 0;


		// Variables
		language *		p_lang;					///< Pointer to a language object
		file	 *		p_iFile;				///< Current file being processed
		std::ifstream	iSourceFile;			///< Stream to read file
		statistics		iStats;					///< Internal statistics for the current parsed file

};


#endif // LOC_PARSER_HH_
