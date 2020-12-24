// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a ML family of programming languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers

// Import Project declarations
#include "trace.hh"
#include "loc_defs.hh"

// Import module declarations
#include "language/comment.hh"
#include "language/languageType.hh"
#include "language/family_ml/language_family_ml.hh"


// *****************************************************************************************
//
// Section: Constants
//
// *****************************************************************************************

// Comment tokens
const char * LANGUAGE_FAMILY_ML_TOKEN_START	= LOC_TOKEN_COMENT_PARSTAR;
const char * LANGUAGE_FAMILY_ML_TOKEN_END	= LOC_TOKEN_COMENT_STARPAR;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_family_ml )


language_family_ml::language_family_ml( void )
{
 lang = languageType::ML;

 comment * p_cmt = new comment();

 p_cmt->setStart( LANGUAGE_FAMILY_ML_TOKEN_START	);
 p_cmt->setEnd  ( LANGUAGE_FAMILY_ML_TOKEN_END		);
 p_cmt->setMultiline();

 comments.push_back( p_cmt );


}


