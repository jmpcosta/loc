// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the OMG IDL language
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
#include "language/family_idl/language_idl_omg.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// File extensions
const char * LOC_LANGUAGE_IDL_OMG[] = { ".idl", nullptr };

// Comment tokens
const char * LANGUAGE_IDL_OMG_TOKEN_SINGLE	= LOC_TOKEN_DOUBLE_SLASH;
const char * LANGUAGE_IDL_OMG_TOKEN_START	= LOC_TOKEN_COMMENT_OPEN;
const char * LANGUAGE_IDL_OMG_TOKEN_END		= LOC_TOKEN_COMMENT_CLOSE;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_idl_omg )


language_idl_omg::language_idl_omg()
{
 TRACE_POINT

 lang = languageType::IDL_OMG;
 name = "OMG IDL";

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_IDL_OMG_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_IDL_OMG_TOKEN_START		);
 p_cmt->setEnd  ( LANGUAGE_IDL_OMG_TOKEN_END 		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );

}

bool language_idl_omg::isExtension( const char * p_extension )
{
 return language::checkExtension( p_extension, LOC_LANGUAGE_IDL_OMG );
}



