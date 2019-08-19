// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the C# programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_CSHARP_HH_
#define LOC_LANGUAGE_CSHARP_HH_

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



class language_csharp : public language_family_c
{
public:
						language_csharp	( void );

		bool			isExtension	( const char * ext 			);
		bool			isExtension	( const std::string & ext	);

private:

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_CSHARP_HH_
