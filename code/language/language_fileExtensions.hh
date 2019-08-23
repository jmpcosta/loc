// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a template to check if an extension
//			implies a language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FILEEXTENSIONS_HH_
#define LOC_LANGUAGE_FILEEXTENSIONS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import project headers


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

template <class T> bool isLanguage( const char * p_extension )
{
 return T::isExtension( p_extension );
}


#endif // LOC_LANGUAGE_FILEEXTENSIONS_HH_
