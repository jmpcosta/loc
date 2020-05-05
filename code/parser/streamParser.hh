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
#include <cstdint>

// Import project headers
#include "trace_macros.hh"
#include "files/file.hh"
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

		/// @brief Obtain the parser type
		/// @return The parser identifier
		parserType		getType			( void				) { return parserType::stream; }


private:
		// Methods

		/// @brief Calls a parser to process an open file
		void 			specificParse	( void				);



		/// @brief Check if the string contains information
		/// @param [in] str - A string view
		/// @return Success if information was found. False otherwise.
		bool			hasInfo			( const char * str, std::size_t length			);


		/// @brief Search input for relevant information
		/// @param [in] input - String to search
		void			search			( std::string_view  input			);

		/// @brief Search an input line for the end of language comment token
		/// @param [in] input - String to search
		void			endComment		( std::string_view  input			);

		/// @brief Search an input line for any comment start token
		/// @param [in] input - String to search
		void			beginComment	( std::string_view  input			);

		/// @brief Process an input line for information
		/// @param [in] input - String to search
		void			processLine		( std::string_view  line			);

		// Variables
		bool			codeAvailable;			///< Is Code available in line ?
		bool			commentOpen;			///< Search for an end token ?
		std::size_t		ncomments;				///< Number of comment lines

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_PARSER_STREAM_HH_
