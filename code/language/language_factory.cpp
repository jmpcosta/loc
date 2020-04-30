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
#include "language/language_fileExtensions.hh"
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
  	case languageType::SWIFT: 		p_lang = new language_swift();			break;
  	case languageType::GO: 	 		p_lang = new language_go();				break;
  	case languageType::PYTHON: 		p_lang = new language_python();			break;
  	case languageType::PERL: 		p_lang = new language_perl();			break;
  	case languageType::CSHARP: 		p_lang = new language_csharp();			break;
  	case languageType::BOURNE: 		p_lang = new language_bourne(); 		break;
  	case languageType::BASH:		p_lang = new language_bash();	 		break;
  	case languageType::CSH:			p_lang = new language_csh();	 		break;
  	case languageType::BATCH:		p_lang = new language_batch();	 		break;
  	case languageType::POWERSHELL:	p_lang = new language_powershell();	 	break;
  	case languageType::JAVASCRIPT:	p_lang = new language_javascript();	 	break;
  	case languageType::PHP:			p_lang = new language_php();		 	break;
  	case languageType::XML:			p_lang = new language_xml();		 	break;
  	case languageType::HTML:		p_lang = new language_html();		 	break;
  	case languageType::AWK:			p_lang = new language_awk();		 	break;
  	case languageType::RUST:		p_lang = new language_rust();		 	break;

	// The next case is just to silence the compiler
  	case languageType::unknown:										break;
  	default:														break;
 }

 TRACE_EXIT

 return p_lang;
}


languageType language_factory::getLanguageType( const char * p_fileExtension  )
{
 TRACE_ENTER

 if( isLanguage<language_c>				( p_fileExtension ) ) return languageType::C;
 if( isLanguage<language_cpp>			( p_fileExtension ) ) return languageType::CPP;
 if( isLanguage<language_csharp>		( p_fileExtension ) ) return languageType::CSHARP;
 if( isLanguage<language_java>			( p_fileExtension ) ) return languageType::JAVA;
 if( isLanguage<language_php>			( p_fileExtension ) ) return languageType::PHP;
 if( isLanguage<language_swift>			( p_fileExtension ) ) return languageType::SWIFT;
 if( isLanguage<language_go>			( p_fileExtension ) ) return languageType::GO;

 if( isLanguage<language_bash>			( p_fileExtension ) ) return languageType::BASH;
 if( isLanguage<language_python>		( p_fileExtension ) ) return languageType::PYTHON;
 if( isLanguage<language_perl>			( p_fileExtension ) ) return languageType::PERL;
 if( isLanguage<language_bourne>		( p_fileExtension ) ) return languageType::BOURNE;
 if( isLanguage<language_csh>			( p_fileExtension ) ) return languageType::CSH;
 if( isLanguage<language_batch>			( p_fileExtension ) ) return languageType::BATCH;
 if( isLanguage<language_powershell>	( p_fileExtension ) ) return languageType::POWERSHELL;

 //if( isLanguage<language_basic>			( p_fileExtension ) ) return languageType::BASIC;

 if( isLanguage<language_javascript>	( p_fileExtension ) ) return languageType::JAVASCRIPT;
 if( isLanguage<language_xml>			( p_fileExtension ) ) return languageType::XML;
 if( isLanguage<language_html>			( p_fileExtension ) ) return languageType::HTML;
 if( isLanguage<language_awk>			( p_fileExtension ) ) return languageType::AWK;
 if( isLanguage<language_rust>			( p_fileExtension ) ) return languageType::RUST;

 //if( isLanguage<language_fortran>			( p_fileExtension ) ) return languageType::FORTRAN;
 //if( isLanguage<language_cobol>			( p_fileExtension ) ) return languageType::COBOL;

 TRACE_EXIT

 return languageType::unknown;
}



languageType language_factory::getLanguageType( const std::string & fileExtension  )
{
 return getLanguageType( fileExtension.c_str() );
}
