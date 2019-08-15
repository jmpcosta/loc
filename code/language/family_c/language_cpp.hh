// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_CPP_HH_
#define LOC_LANGUAGE_CPP_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import application headers
#include "language/family_c/language_family_c.hh"
#include "trace_macros.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language_cpp : public language_family_c
{
public:
						language_cpp	( void );

		bool			isExtension	( const char * ext 			);
		bool			isExtension	( const std::string & ext	);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_CPP_HH_
