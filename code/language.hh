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
#include "languageType.hh"
#include "comment.hh"
#include "statistics.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

namespace code
{



class language
{
public:
		static language *			builder( languageType lang );		// Factory method
									~language();

		void 						addComment	( comment * pc )			{ comments.push_back( pc );	}
		std::vector<comment *> &	getComments	( void ) 	 				{ return comments;			}
		languageType				getType		( void )					{ return lang;				}


		void						parse		( std::string & name, statistics & stats );


private:

		// Methods
									language	( languageType which )	{ lang = which;				}
		void						processLine	( std::string & line, statistics & stats );
		// Variables

		// Specific language
		languageType				lang;

		// Support more than one comment tokens in the language
		std::vector<comment *>		comments;
};





} 		// End of namespace "code"




#endif // LOC_LANGUAGE_HH_
