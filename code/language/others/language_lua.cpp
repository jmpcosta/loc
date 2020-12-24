// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the LUA language
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/languageType.hh"
#include "language/others/language_lua.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_LUA_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_DHYFEN;
const char * LANGUAGE_LUA_TOKEN_START	= "--[[";
const char * LANGUAGE_LUA_TOKEN_END		= "]]";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_lua )


language_lua::language_lua()
{
 TRACE_POINT

 lang = languageType::LUA;
 name = "Lua";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_LUA_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_LUA_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_LUA_TOKEN_END	);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );
}



