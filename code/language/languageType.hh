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
	autodetect	= -1,
	unknown		= -1,
	C			= 0,
	CPP 		,
	JAVA		,
	BASH		,
	BOURNE		,
	CSH			,
	MAX
};





#endif // LOC_LANGUAGETYPE_HH_