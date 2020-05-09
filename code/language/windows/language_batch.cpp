// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define the DOS Batch language
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
#include "language/windows/language_batch.hh"

// *****************************************************************************************
//
// Section: Constant declarations
//
// *****************************************************************************************

// Comment token
constexpr const char * LANGUAGE_BATCH_TOKEN_SINGLE	= "rem";


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_batch )


language_batch::language_batch()
{
 TRACE_POINT

 lang = languageType::BATCH;
 name = "Batch";

 comment * p_cmt = new comment();
 p_cmt->setStart( LANGUAGE_BATCH_TOKEN_SINGLE );
 p_cmt->setMultipleCase();
 comments.push_back( p_cmt );

}



