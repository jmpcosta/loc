// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the parsing a language file.
//
// *****************************************************************************************

#ifndef LOC_PARSER_STREAM_HH_
#define LOC_PARSER_STREAM_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
//#include <cstdint>
//#include <iostream>

// Import project headers
#include "trace_macros.hh"
#include "options.hh"
#include "files/file.hh"
#include "language/language.hh"
#include "parser/parserType.hh"
#include "parser/parser.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for parsing a file language code
class streamParser : public parser
{
public:
		/// @brief Class constructor
						streamParser	();

		/// @brief Class destructor
						~streamParser	() {}

		/// @brief Parse a source file
		/// @param [in] sourceFile - The input file to parse
		void			parse			( file * sourceFile	);

		/// @brief Obtain the parser type
		/// @return The parser identifier
		parserType		getType			( void				) { return parserType::stream; }


private:
		// Methods

		/// @brief Check if the C-String contains information
		/// @param [in] str - C-String to check for information
		/// @param [in] len - Limit the search to a given length
		/// @return Success if information was found. False otherwise.
		bool			hasInformation	( const char * str, std::size_t len 			);


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

		// Wrapper methods for statistics
		void			reset			( file 	*	p_file								);
		void			setAvailable	( file 	*	p_file, bool value					);
		void			addLine			( void 											);
		void			addEmptyLine	( void 											);
		void			addLoc			( void 											);


		// Variables
		bool			codeAvailable;			///< Is Code available in line ?
		bool			commentOpen;			///< Search for an end token ?

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_PARSER_STREAM_HH_
