// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the declarations for a file parser factory.
//
// *****************************************************************************************

#ifndef LOC_PARSER_FACTORY_HH_
#define LOC_PARSER_FACTORY_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import project headers
#include "trace_macros.hh"
#include "language/languageType.hh"
#include "parser/parserType.hh"
#include "parser/parser.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for creating new specific languages
class parser_factory
{
public:

	/// @brief Class constructor
						parser_factory	() {}

	/// @brief Class destructor
						~parser_factory	() {}

	/// @brief Create a new parser object
	/// @param [in] type - The parser identifier
	/// @return A pointer to a new parser object
	parser 	*			build			( parserType type	);


private:

		TRACE_CLASSNAME_DECLARATION

};


#endif // LOC_PARSER_FACTORY_HH_
