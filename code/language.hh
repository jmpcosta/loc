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
									~language();
									language   ( languageType which )	{ lang = which;				}
		void 						addComment ( comment * pc )			{ comments.push_back( pc );	}
		std::vector<comment *> &	getComments( void ) 	 			{ return comments;			}

		static language *			builder( languageType lang );		// Factory method
private:
		// Specific language
		languageType				lang;

		// Support more than one comment tokens in the language
		std::vector<comment *>		comments;
};





} 		// End of namespace "code"




#endif // LOC_LANGUAGE_HH_
