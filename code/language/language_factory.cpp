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
#include <cstring>
#include <string>

// Import project headers
#include "trace.hh"
#include "languageType.hh"
#include "language.hh"

// All supported languages
#include "language/languages.hh"
#include "language/language_fileExtensions.hh"
#include "language_factory.hh"

using namespace std;

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

TRACE_CLASSNAME( language_factory )


language_factory::language_factory()
{
	lang[0 ] = (void *) &LOC_LANGUAGE_PF_A;
	lang[1 ] = (void *) &LOC_LANGUAGE_PF_B;
	lang[2 ] = (void *) &LOC_LANGUAGE_PF_C;
	lang[3 ] = (void *) &LOC_LANGUAGE_PF_D;
	lang[4 ] = (void *) &LOC_LANGUAGE_PF_E;
	lang[5 ] = (void *) &LOC_LANGUAGE_PF_F;
	lang[6 ] = (void *) &LOC_LANGUAGE_PF_G;
	lang[7 ] = (void *) &LOC_LANGUAGE_PF_H;
	lang[8 ] = (void *) &LOC_LANGUAGE_PF_I;
	lang[9 ] = (void *) &LOC_LANGUAGE_PF_J;
	lang[10] = (void *) &LOC_LANGUAGE_PF_K;
	lang[11] = (void *) &LOC_LANGUAGE_PF_L;
	lang[12] = (void *) &LOC_LANGUAGE_PF_M;
	lang[13] = (void *) &LOC_LANGUAGE_PF_N;
	lang[14] = (void *) &LOC_LANGUAGE_PF_O;
	lang[15] = (void *) &LOC_LANGUAGE_PF_P;
	lang[16] = (void *) &LOC_LANGUAGE_PF_Q;
	lang[17] = (void *) &LOC_LANGUAGE_PF_R;
	lang[18] = (void *) &LOC_LANGUAGE_PF_S;
	lang[19] = (void *) &LOC_LANGUAGE_PF_T;
	lang[20] = (void *) &LOC_LANGUAGE_PF_U;
	lang[21] = (void *) &LOC_LANGUAGE_PF_V;
	lang[22] = (void *) &LOC_LANGUAGE_PF_W;
	lang[23] = (void *) &LOC_LANGUAGE_PF_X;
	lang[24] = (void *) &LOC_LANGUAGE_PF_Y;
	lang[25] = (void *) &LOC_LANGUAGE_PF_Z;
}



inline languageType language_factory::getType( void * p_language, const char * ext )
{
  if( p_language == nullptr ) return languageType::unknown;;

  const LanguageInfo * p_lang = (const LanguageInfo *) p_language;

  TRACE( "Entering with File extension:", ext )
  int i = 0;
  while( p_lang[ i ].id != languageType::none )
       {
	     TRACE( "Searching extension", p_lang[ i ].name )
	  	 if( strcmp( ext, p_lang[ i ].name ) == 0 )
	  		 return p_lang[ i ].id;

	     i++;
       }

  return languageType::unknown;;
}


inline languageType language_factory::getType( const string & filename )
{
  if( filename.size() == 0 ) return languageType::unknown;;

  TRACE( "Entering with File name:", filename )

  int i = 0;
  while( LOC_LANGUAGE_FILENAMES[ i ].id != languageType::none )
       {
	     TRACE( "Searching filename: ", LOC_LANGUAGE_FILENAMES[ i ].name )

	  	 if( strcmp( filename.c_str(), LOC_LANGUAGE_FILENAMES[ i ].name ) == 0 )
	  		 return LOC_LANGUAGE_FILENAMES[ i ].id;

	     i++;
       }

  return languageType::unknown;;
}


language * language_factory::build( languageType type )
{
 language * p_lang	= nullptr;

 TRACE_ENTER

 switch( type )
 {
 	 case languageType::unknown:											break;

 	// SGML Family
	case languageType::HTML:		p_lang = new language_html();		 	break;
	case languageType::XML:			p_lang = new language_xml();		 	break;

	// ECMA family
	case languageType::JAVASCRIPT:	p_lang = new language_javascript();	 	break;
	case languageType::EIFFEL:		p_lang = new language_eiffel();		 	break;
	case languageType::DART:		p_lang = new language_dart();		 	break;
	case languageType::FSHARP:		p_lang = new language_fsharp();		 	break;
	case languageType::HAXE:		p_lang = new language_haxe();		 	break;

	// C Family
	case languageType::JAVA: 		p_lang = new language_java();			break;
	case languageType::CPP: 		p_lang = new language_cpp();			break;
	case languageType::C: 	 		p_lang = new language_c();				break;
	case languageType::D: 	 		p_lang = new language_d();				break;
  	case languageType::SWIFT: 		p_lang = new language_swift();			break;
  	case languageType::GO: 	 		p_lang = new language_go();				break;
  	case languageType::CSHARP: 		p_lang = new language_csharp();			break;
  	case languageType::RUST:		p_lang = new language_rust();		 	break;
  	case languageType::OBJECTIVE_C:	p_lang = new language_objective_c(); 	break;
  	case languageType::PHP:			p_lang = new language_php();		 	break;
  	case languageType::AWK:			p_lang = new language_awk();		 	break;
  	case languageType::ODIN:		p_lang = new language_odin();		 	break;
  	case languageType::ZIG:			p_lang = new language_zig();		 	break;
  	case languageType::VALA:		p_lang = new language_vala();		 	break;

  	// Other languages
  	case languageType::PYTHON: 		p_lang = new language_python();			break;
  	case languageType::PERL: 		p_lang = new language_perl();			break;
  	case languageType::RUBY: 		p_lang = new language_ruby();			break;
  	case languageType::YAML: 		p_lang = new language_yam();			break;
  	case languageType::SMALLTALK: 	p_lang = new language_smalltalk();		break;
  	case languageType::FORTRAN: 	p_lang = new language_fortran();		break;
  	case languageType::FORTH:	 	p_lang = new language_forth();			break;
  	case languageType::KOTLIN: 		p_lang = new language_kotlin();			break;
  	case languageType::SCALA:	 	p_lang = new language_scala();			break;
  	case languageType::ASSEMBLER: 	p_lang = new language_assembler();		break;
  	case languageType::LUA:		 	p_lang = new language_lua();			break;
  	case languageType::ELENA: 		p_lang = new language_elena();			break;
  	case languageType::CRYSTAL: 	p_lang = new language_crystal();		break;
  	case languageType::JULIA:	 	p_lang = new language_julia();			break;
  	case languageType::NIM:		 	p_lang = new language_nim();			break;
  	case languageType::JADE:	 	p_lang = new language_jade();			break;
  	case languageType::HASKELL:	 	p_lang = new language_haskell();		break;

  	// Bourne family
  	case languageType::BOURNE: 		p_lang = new language_bourne(); 		break;
  	case languageType::BASH:		p_lang = new language_bash();	 		break;
  	case languageType::CSH:			p_lang = new language_csh();	 		break;
  	case languageType::TCL:			p_lang = new language_tcl();	 		break;
  	case languageType::MAKE:		p_lang = new language_make();	 		break;

  	// Windows languages
  	case languageType::BATCH:		p_lang = new language_batch();	 		break;
  	case languageType::POWERSHELL:	p_lang = new language_powershell();	 	break;
  	case languageType::BASIC:		p_lang = new language_basic();		 	break;

  	// Prolog
  	case languageType::PROLOG:		p_lang = new language_prolog();		 	break;

  	// Lisp family
  	case languageType::LISP:		p_lang = new language_lisp();		 	break;
  	case languageType::LOGO:		p_lang = new language_logo();		 	break;
  	case languageType::SCHEME:		p_lang = new language_scheme();		 	break;
  	case languageType::CLOSURE:		p_lang = new language_closure();	 	break;

  	// Algol family
  	case languageType::ALGOL:		p_lang = new language_algol();		 	break;
  	case languageType::SIMULA:		p_lang = new language_simula();		 	break;
  	case languageType::BETA:		p_lang = new language_beta();		 	break;

  	// Pascal family
  	case languageType::PASCAL:		p_lang = new language_pascal();		 	break;
  	case languageType::ADA:			p_lang = new language_ada();		 	break;
  	case languageType::MODULA:		p_lang = new language_modula();		 	break;

  	// ML family
  	case languageType::ML:			p_lang = new language_ml();			 	break;
  	case languageType::OCAML:		p_lang = new language_ocaml();		 	break;

  	 // Interface description language family
  	case languageType::IDL_OMG:		p_lang = new language_idl_omg();	 	break;

  	default:																break;
 }

 TRACE_EXIT

 return p_lang;
}


inline int language_factory::getAlphaIndex( char c )
{
 int index = -1;

 if( c < 123 && c > 64 )
   {
	 if(      c < 91 )	index = c - 65;	// Capital letters
	 else if( c > 96 )	index = c - 97;	// Small letters
   }

 return index;
}

languageType language_factory::getLanguageType( const std::filesystem::path & pathname  )
{
 languageType type = languageType::unknown;
 string filename, fileExtension;

 TRACE_ENTER

 try
 {
	 filename 		= pathname.filename().generic_string();
	 fileExtension	= pathname.extension().generic_string();

	 const char * p_ext	= fileExtension.c_str();
	 char e 		= p_ext[1];

	 if( p_ext == nullptr || p_ext[0] != '.' || e == '\0')	// No filename extension found, use filename itself to search for a language mapping
		 type = getType( filename );
	 else													// There is a filename extension, use it when searching the language
	   {
		 int index = getAlphaIndex( e );

		 if( index == -1 )	return type;		// No valid first letter of the file extension was found

		 TRACE( "File extension index:", index )

		 type = getType( lang[ index ], &p_ext[1] );
	   }
 }

 catch( const std::exception & e )
      { std::cerr << "Exception found: " << e.what() << std::endl; }

 TRACE( "Leaving with type:",  static_cast<int>(type) )

 return type;
}

