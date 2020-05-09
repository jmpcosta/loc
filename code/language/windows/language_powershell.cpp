// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Powershell language
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
#include "language/windows/language_powershell.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment tokens
constexpr const char * LANGUAGE_POWERSHELL_TOKEN_SINGLE	= "#";
constexpr const char * LANGUAGE_POWERSHELL_TOKEN_START	= "<#";
constexpr const char * LANGUAGE_POWERSHELL_TOKEN_END	= "#>";

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_powershell )


language_powershell::language_powershell()
{
 comment * p_cmt =  nullptr;

 TRACE_POINT

 lang = languageType::POWERSHELL;
 name = "Powershell";

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_POWERSHELL_TOKEN_SINGLE );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_POWERSHELL_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_POWERSHELL_TOKEN_END		);
 p_cmt->setMultiline();
 comments.push_back( p_cmt );

}



