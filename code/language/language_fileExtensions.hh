// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a to map a language with a file extension
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_FILEEXTENSIONS_HH_
#define LOC_LANGUAGE_FILEEXTENSIONS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import project headers
#include "language/languageType.hh"

// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


#define LOG_LANGUAGE_FEXT_AZ	26

/// @brief The language mapping structure between language ID and file extension
struct loc_language_info
{
	languageType	id;			///< The language identifier
	const char *	name;		///< The language file extension name
};

typedef loc_language_info	LanguageInfo;


constexpr const LanguageInfo LOC_LANGUAGE_PF_A[] = {
				{ languageType::ADA, 		"adb" 	},
				{ languageType::ADA, 		"ads" 	},
				{ languageType::ALGOL, 		"algol" },
				{ languageType::AWK, 		"awk" 	},
				{ languageType::ASSEMBLER,	"asm" 	},
				{ languageType::none, 		"" 		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_B[] = {
				{ languageType::BATCH, 		"bat" 	},
				{ languageType::BASIC, 		"bas" 	},
				{ languageType::BASH, 		"bash" 	},
				{ languageType::BETA, 		"bet" 	},
				{ languageType::BETA, 		"beta" 	},
				{ languageType::none, 		"" 		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_C[] = {
				{ languageType::C, 			"c" 	},
				{ languageType::CPP, 		"cc" 	},
				{ languageType::CSHARP,		"cs" 	},
				{ languageType::CPP, 		"cls" 	},
				{ languageType::CPP, 		"cpp" 	},
				{ languageType::CPP, 		"cxx" 	},
				{ languageType::CSH,		"csh" 	},
				{ languageType::BATCH, 		"cmd" 	},
				{ languageType::CPP, 		"c++" 	},
				{ languageType::COBOL, 		"cbl" 	},
				{ languageType::COBOL, 		"cob" 	},
				{ languageType::COBOL, 		"cpy" 	},
				{ languageType::CLOSURE,	"clj" 	},
				{ languageType::CRYSTAL,	"cr" 	},
				{ languageType::none, 		"" 		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_D[] = {
				{ languageType::D, 			"d" 	},
				{ languageType::DART, 		"dart" 	},
				{ languageType::none, 		"" 		}

};

constexpr LanguageInfo LOC_LANGUAGE_PF_E[] = {
				{ languageType::EIFFEL,		"e"	},
				{ languageType::none, 		"" 	}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_F[] = {
				{ languageType::FORTH,		"fth" 		},
				{ languageType::FORTRAN,	"f77" 		},
				{ languageType::FORTRAN,	"f90" 		},
				{ languageType::FSHARP,		"fs" 		},
				{ languageType::FSHARP,		"fsi" 		},
				{ languageType::FSHARP,		"fsx" 		},
				{ languageType::FSHARP,		"fsscript" 	},
				{ languageType::none, 		"" 			}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_G[] = {
				{ languageType::GO,			"go" 	},
				{ languageType::none, 		"" 		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_H[] = {
				{ languageType::C,			"h" 	},
				{ languageType::CPP,		"hh" 	},
				{ languageType::C,			"hhh" 	},
				{ languageType::CPP,		"hpp" 	},
				{ languageType::HTML,		"htm" 	},
				{ languageType::HTML,		"html" 	},
				{ languageType::HAXE,		"hx" 	},
				{ languageType::CPP,		"hxx" 	},
				{ languageType::CPP,		"h++" 	},
				{ languageType::HASKELL,	"hs" 	},
				{ languageType::none, 		"" 		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_I[] = {
				{ languageType::IDL_OMG, 	"idl"	},
				{ languageType::none, 	 	""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_J[] = {
				{ languageType::JAVASCRIPT,	"js"	},
				{ languageType::JAVA,		"jav"	},
				{ languageType::JAVA,		"java"	},
				{ languageType::JADE,		"jade"	},
				{ languageType::JULIA,		"jl"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_K[] = {
				{ languageType::KOTLIN,		"kt"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_L[] = {
				{ languageType::ELENA, 		"l"		},
				{ languageType::LISP,		"lisp"	},
				{ languageType::LOGO, 		"lg"	},
				{ languageType::HASKELL,	"lhs" 	},
				{ languageType::LUA,		"lua"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_M[] = {
				{ languageType::OBJECTIVE_C,"m"		},
				{ languageType::MODULA, 	"m2"	},
				{ languageType::MODULA, 	"m3"	},
				{ languageType::OCAML, 		"ml"	},
				{ languageType::OCAML, 		"mli"	},
				{ languageType::POWERSHELL, "msh2"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_N[] = {
				{ languageType::NIM, 		"nim"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_O[] = {
				{ languageType::ODIN,		"odin"	},
				{ languageType::none,		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_P[] = {
				{ languageType::PASCAL,		"p"		},
				{ languageType::PHP,		"php"	},
				{ languageType::PERL,		"pl"	},
				{ languageType::PROLOG,		"pro"	},
				{ languageType::POWERSHELL, "ps1"	},
				{ languageType::POWERSHELL, "ps2"	},
				{ languageType::POWERSHELL, "psm1"	},
				{ languageType::PYTHON,		"py"	},
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_Q[] = {
				{ languageType::none, 		""		}
};

constexpr LanguageInfo LOC_LANGUAGE_PF_R[] = {
				{ languageType::RUBY,		"rbx"  	},
				{ languageType::RUST,		"rs"	},
				{ languageType::none, 		""		}
};


constexpr LanguageInfo LOC_LANGUAGE_PF_S[] = {
				{ languageType::SCALA,		"sc"	},
				{ languageType::SCALA,		"scala"	},
				{ languageType::SCHEME,		"scm"	},
				{ languageType::SIMULA,		"sim"	},
				{ languageType::BOURNE,		"sh"	},
				{ languageType::SMALLTALK,	"sm"	},
				{ languageType::ML,			"sml"	},
				{ languageType::SWIFT,		"swift" },
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_T[] = {
				{ languageType::TCL,		"tbc"   },
				{ languageType::TCL,		"tcl"   },
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_U[] = {
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_V[] = {
				{ languageType::VALA,		"vala"	},
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_W[] = {
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_X[] = {
				{ languageType::XML,		"xml"	},
				{ languageType::XML,		"xsl"	},
				{ languageType::XML,		"xslt"	},
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_Y[] = {
				{ languageType::YAML,		"yam"	},
				{ languageType::none, 		""		}
};

constexpr const LanguageInfo LOC_LANGUAGE_PF_Z[] = {
				{ languageType::ZIG,		"zig"	},
				{ languageType::none, 		""		}
};


constexpr const LanguageInfo LOC_LANGUAGE_FILENAMES[] = {
				{ languageType::MAKE,		"Makefile"	},
				{ languageType::MAKE,		"makefile"	},
				{ languageType::none, 		""		}
};



#endif // LOC_LANGUAGE_FILEEXTENSIONS_HH_
