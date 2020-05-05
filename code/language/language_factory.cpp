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
 	// SGML Family
	case languageType::HTML:		p_lang = new language_html();		 	break;
	case languageType::XML:			p_lang = new language_xml();		 	break;

	// ECMA family
	case languageType::JAVASCRIPT:	p_lang = new language_javascript();	 	break;
	case languageType::EIFFEL:		p_lang = new language_eiffel();		 	break;

	// C Family
	case languageType::JAVA: 		p_lang = new language_java();			break;
	case languageType::CPP: 		p_lang = new language_cpp();			break;
	case languageType::C: 	 		p_lang = new language_c();				break;
  	case languageType::SWIFT: 		p_lang = new language_swift();			break;
  	case languageType::GO: 	 		p_lang = new language_go();				break;
  	case languageType::CSHARP: 		p_lang = new language_csharp();			break;
  	case languageType::RUST:		p_lang = new language_rust();		 	break;
  	case languageType::OBJECTIVE_C:	p_lang = new language_objective_c(); 	break;
  	case languageType::PHP:			p_lang = new language_php();		 	break;
  	case languageType::AWK:			p_lang = new language_awk();		 	break;

  	// Other languages
  	case languageType::PYTHON: 		p_lang = new language_python();			break;
  	case languageType::PERL: 		p_lang = new language_perl();			break;
  	case languageType::RUBY: 		p_lang = new language_ruby();			break;
  	case languageType::YAML: 		p_lang = new language_yam();			break;
  	case languageType::SMALLTALK: 	p_lang = new language_smalltalk();		break;
  	case languageType::FORTRAN: 	p_lang = new language_fortran();		break;

  	// Bourne family
  	case languageType::BOURNE: 		p_lang = new language_bourne(); 		break;
  	case languageType::BASH:		p_lang = new language_bash();	 		break;
  	case languageType::CSH:			p_lang = new language_csh();	 		break;

  	// Windows languages
  	case languageType::BATCH:		p_lang = new language_batch();	 		break;
  	case languageType::POWERSHELL:	p_lang = new language_powershell();	 	break;

  	// Prolog
  	case languageType::PROLOG:		p_lang = new language_prolog();		 	break;

  	// Prolog
  	case languageType::BASIC:		p_lang = new language_basic();		 	break;

  	// Lisp family
  	case languageType::LISP:		p_lang = new language_lisp();		 	break;
  	case languageType::LOGO:		p_lang = new language_logo();		 	break;
  	case languageType::SCHEME:		p_lang = new language_scheme();		 	break;

  	// Algol family
  	case languageType::ALGOL:		p_lang = new language_algol();		 	break;
  	case languageType::SIMULA:		p_lang = new language_simula();		 	break;
  	case languageType::BETA:		p_lang = new language_beta();		 	break;

  	// Pascal family
  	case languageType::PASCAL:		p_lang = new language_pascal();		 	break;
  	case languageType::ADA:			p_lang = new language_ada();		 	break;

  	 // Interface description language family
  	case languageType::IDL_OMG:		p_lang = new language_idl_omg();	 	break;

	// The next case is just to silence the compiler
  	case languageType::unknown:												break;
  	default:																break;
 }

 TRACE_EXIT

 return p_lang;
}


languageType language_factory::getLanguageType( const char * p_fileExtension  )
{
 TRACE_ENTER

 // C family of languages
 if( isLanguage<language_c>				( p_fileExtension ) ) return languageType::C;
 if( isLanguage<language_cpp>			( p_fileExtension ) ) return languageType::CPP;
 if( isLanguage<language_java>			( p_fileExtension ) ) return languageType::JAVA;
 if( isLanguage<language_csharp>		( p_fileExtension ) ) return languageType::CSHARP;
 if( isLanguage<language_objective_c>	( p_fileExtension ) ) return languageType::OBJECTIVE_C;
 if( isLanguage<language_php>			( p_fileExtension ) ) return languageType::PHP;
 if( isLanguage<language_swift>			( p_fileExtension ) ) return languageType::SWIFT;
 if( isLanguage<language_go>			( p_fileExtension ) ) return languageType::GO;
 if( isLanguage<language_rust>			( p_fileExtension ) ) return languageType::RUST;
 if( isLanguage<language_awk>			( p_fileExtension ) ) return languageType::AWK;

 // Bourne family shells
 if( isLanguage<language_bash>			( p_fileExtension ) ) return languageType::BASH;
 if( isLanguage<language_bourne>		( p_fileExtension ) ) return languageType::BOURNE;
 if( isLanguage<language_csh>			( p_fileExtension ) ) return languageType::CSH;

 // SGML languages
 if( isLanguage<language_html>			( p_fileExtension ) ) return languageType::HTML;
 if( isLanguage<language_xml>			( p_fileExtension ) ) return languageType::XML;

 // ECMA family
 if( isLanguage<language_javascript>	( p_fileExtension ) ) return languageType::JAVASCRIPT;
 if( isLanguage<language_eiffel>		( p_fileExtension ) ) return languageType::EIFFEL;

 // Windows/Microsoft languages
 if( isLanguage<language_batch>			( p_fileExtension ) ) return languageType::BATCH;
 if( isLanguage<language_powershell>	( p_fileExtension ) ) return languageType::POWERSHELL;
 //if( isLanguage<language_basic>			( p_fileExtension ) ) return languageType::BASIC;

 // Other languages
 if( isLanguage<language_fortran>			( p_fileExtension ) ) return languageType::FORTRAN;
 if( isLanguage<language_python>		( p_fileExtension ) ) return languageType::PYTHON;
 if( isLanguage<language_perl>			( p_fileExtension ) ) return languageType::PERL;
 if( isLanguage<language_ruby>			( p_fileExtension ) ) return languageType::RUBY;
 if( isLanguage<language_smalltalk>		( p_fileExtension ) ) return languageType::SMALLTALK;
 if( isLanguage<language_yam>			( p_fileExtension ) ) return languageType::YAML;

 //if( isLanguage<language_cobol>			( p_fileExtension ) ) return languageType::COBOL;


 // BASIC family
 if( isLanguage<language_basic>			( p_fileExtension ) ) return languageType::BASIC;

 // Pascal family of languages
 if( isLanguage<language_pascal>		( p_fileExtension ) ) return languageType::PASCAL;
 if( isLanguage<language_ada>			( p_fileExtension ) ) return languageType::ADA;

 // Prolog family
 if( isLanguage<language_prolog>		( p_fileExtension ) ) return languageType::PROLOG;

 // List family
 if( isLanguage<language_lisp>			( p_fileExtension ) ) return languageType::LISP;
 if( isLanguage<language_scheme>		( p_fileExtension ) ) return languageType::SCHEME;
 if( isLanguage<language_logo>			( p_fileExtension ) ) return languageType::LOGO;

 // Algol family
 if( isLanguage<language_algol>			( p_fileExtension ) ) return languageType::ALGOL;
 if( isLanguage<language_simula>		( p_fileExtension ) ) return languageType::SIMULA;
 if( isLanguage<language_beta>			( p_fileExtension ) ) return languageType::BETA;

 // Interface description language family
 if( isLanguage<language_idl_omg>		( p_fileExtension ) ) return languageType::IDL_OMG;

 TRACE_EXIT

 return languageType::unknown;
}



languageType language_factory::getLanguageType( const std::string & fileExtension  )
{
 return getLanguageType( fileExtension.c_str() );
}
