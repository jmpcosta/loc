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

// Import module declarations
#include "trace.hh"
#include "loc_defs.hh"
#include "language/languageType.hh"
#include "language/windows/language_powershell.hh"



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
 p_cmt->setStart( "#" );
 comments.push_back( p_cmt );

 p_cmt = new comment();
 p_cmt->setStart( "<#" );
 p_cmt->setEnd  ( "#>" );
 p_cmt->setMultiline();
 comments.push_back( p_cmt );

}

bool language_powershell::isExtension( const t_char * extension )
{
 return true;
}

bool language_powershell::isExtension( const t_string & extension )
{
 return true;
}


