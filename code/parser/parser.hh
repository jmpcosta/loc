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

// Import project headers
#include "options.hh"
#include "files/file.hh"
#include "language/language.hh"


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
		virtual void		parse	( file * sourceFile	) = 0;


		/// @brief Obtain the parser type
		/// @preturn The parser identifier
		virtual parserType	getType	( void				) = 0;

protected:
		// Variables
		language *		p_lang;					///< Pointer to a language object
		file	 *		p_iFile;				///< Current file being processed

};


#endif // LOC_PARSER_HH_
