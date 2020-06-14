// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions for the supported programming languages
//
// *****************************************************************************************

#ifndef LOC_LANGUAGETYPE_HH_
#define LOC_LANGUAGETYPE_HH_

// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************

enum class languageType
{
	autodetect	= -2,
	unknown		= -1,
	none		= 0,
	C			= 1,
	CPP 		,
	CSHARP		,
	D			,
	DART		,
	JAVA		,
	OBJECTIVE_C ,
	GO			,
	PYTHON		,
	PHP			,
	SWIFT		,
	BASH		,
	BOURNE		,
	CSH			,
	PERL		,
	BATCH		,
	POWERSHELL	,
	BASIC		,
	ECMASCRIPT	,
	JAVASCRIPT	,
	SGML		,
	XML			,
	HTML		,
	AWK			,
	RUST		,
	RUBY		,
	FORTRAN		,
	FORTH		,
	COBOL		,
	LISP		,
	SCHEME		,
	LOGO		,
	PROLOG		,
	ALGOL		,
	SIMULA		,
	BETA		,
	SMALLTALK	,
	YAML		,
	EIFFEL		,
	PASCAL		,
	ADA			,
	IDL_OMG		,
	SCALA		,
	KOTLIN		,
	FSHARP		,

	MAX
};







#endif // LOC_LANGUAGETYPE_HH_
