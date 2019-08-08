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
	CPP 		= 1,
	JAVA		= 2,
	BASH		= 3,
	BOURNE		= 4,
	CSH			= 5
};





#endif // LOC_LANGUAGETYPE_HH_
