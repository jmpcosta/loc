// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a programming language factory capable of creating new languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <string>

// Import project headers
#include "trace.hh"
#include "parser/streamParser.hh"
#include "parser/parser_factory.hh"



// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( parser_factory )


parser * parser_factory::build( parserType type )
{
 parser * p_parser	= nullptr;

 TRACE_ENTER

 switch( type )
 {
 	case parserType::stream: 	 		p_parser = new streamParser();			break;
  	//case parserType::record: 			p_parser = new recordStream();			break;

  	// The next case is just to silence the compiler
  	default:																	break;
 }

 TRACE_EXIT

 return p_parser;
}

