// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a generic programming language
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

// Import own headers
#include "trace_macros.hh"
#include "loc_defs.hh"
#include "language/comment.hh"
#include "language/languageType.hh"



// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************



class language
{
public:
		virtual								~language	( void );
											language	( void );

		typedef std::vector<comment *>::iterator							iterator;
		typedef std::vector<comment *>::const_iterator						const_iterator;

		// Forward fileSet iterator for the container vector
		virtual iterator					begin		() 							{ return comments.begin();	}
		virtual const_iterator 				begin		() const 					{ return comments.begin();	}
		virtual iterator					end			()							{ return comments.end();	}
		virtual const_iterator				end			() const					{ return comments.end();	}

		virtual void						addComment	( comment * pc )			{ comments.push_back( pc );	}
		virtual std::vector<comment *> &	getComments	( void ) 	 				{ return comments;			}
		virtual languageType				getType		( void )					{ return lang;				}
		virtual const char *				getName		( void )					{ return name.c_str();		}

		// Is this a file extension for this programming language
		virtual bool						isExtension	( const char * ext				) = 0;
		virtual bool						isExtension	( const std::string & ext		) = 0;

protected:

		// Specific language
		languageType						lang;
		std::string							name;

		// Support more than one comment tokens in the language
		std::vector<comment *>				comments;

		TRACE_CLASSNAME_DECLARATION

};







#endif // LOC_LANGUAGE_HH_
