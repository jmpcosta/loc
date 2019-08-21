// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Define a programming language factory capable of creating new languages
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include OSAPI C++ headers

// Include Standard headers
#include <string>

// Import project headers
#include "trace.hh"
#include "languageType.hh"
#include "language.hh"

// All supported languages
#include "language/languages.hh"
#include "language_factory.hh"


// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_factory )


language * language_factory::build( languageType type )
{
 language * p_lang	= nullptr;

 TRACE_ENTER

 switch( type )
 {
 	case languageType::C: 	 		p_lang = new language_c();				break;
  	case languageType::CPP: 		p_lang = new language_cpp();			break;
  	case languageType::JAVA: 		p_lang = new language_java();			break;
  	case languageType::CSHARP: 		p_lang = new language_csharp();			break;
  	case languageType::BOURNE: 		p_lang = new language_bourne(); 		break;
  	case languageType::BASH:		p_lang = new language_bourne(); 		break;
  	case languageType::CSH:			p_lang = new language_csh();	 		break;
  	case languageType::DOS:			p_lang = new language_dos();	 		break;
  	case languageType::POWERSHELL:	p_lang = new language_powershell();	 	break;

	// The next case is just to silence the compiler
  	case languageType::unknown:										break;
  	default:														break;
 }

 TRACE_EXIT

 return p_lang;
}


languageType language_factory::getLanguage( const char * p_fileExtension  )
{
 languageType lang	= languageType::unknown;

 // TODO

 TRACE_EXIT

 return lang;
}


languageType language_factory::getLanguage( const std::string & fileExtension  )
{
 return language_factory::getLanguage( fileExtension.c_str() );
}
