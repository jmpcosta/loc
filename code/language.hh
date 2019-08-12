// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a programming language
//
// *****************************************************************************************

#ifndef LOC_LANGUAGE_HH_
#define LOC_LANGUAGE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>
#include <vector>

// Import application headers
#include "trace_macros.hh"
#include "languageType.hh"
#include "comment.hh"



// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language
{
public:
		static language *			builder( languageType lang );		// Factory method
									~language();

		typedef std::vector<comment *>::iterator							iterator;
		typedef std::vector<comment *>::const_iterator						const_iterator;

		// Forward fileSet iterator for the container vector
		iterator					begin		() 							{ return comments.begin();	}
		const_iterator 				begin		() const 					{ return comments.begin();	}
		iterator					end			()							{ return comments.end();	}
		const_iterator				end			() const					{ return comments.end();	}

		void 						addComment	( comment * pc )			{ comments.push_back( pc );	}
		std::vector<comment *> &	getComments	( void ) 	 				{ return comments;			}
		languageType				getType		( void )					{ return lang;				}

private:
		// Methods
									language		( languageType which )	{ lang = which;				}

		// Variables

		// Specific language
		languageType				lang;

		// Support more than one comment tokens in the language
		std::vector<comment *>		comments;

		TRACE_CLASSNAME_DECLARATION
};







#endif // LOC_LANGUAGE_HH_
