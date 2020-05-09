// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the Python language
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
#include "language/others/language_python.hh"


// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
const char * LANGUAGE_PYTHON_TOKEN_SINGLE	= LOC_TOKEN_COMMENT_HASH;


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_python )


language_python::language_python()
{
 TRACE_POINT

 lang = languageType::PYTHON;
 name = "Python";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_PYTHON_TOKEN_SINGLE );
 comments.push_back( p_cmt );
}



