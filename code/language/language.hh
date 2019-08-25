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
#include "statistics.hh"
#include "language/comment.hh"
#include "language/languageType.hh"



// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************


/// @brief Class that represents a generic language
class language
{
public:
		/// @brief Class constructor
		virtual								~language	( void );

		/// @brief Class destructor
											language	( void );

		typedef std::vector<comment *>::iterator							iterator;		///< An alias for the language comment iterator
		typedef std::vector<comment *>::const_iterator						const_iterator;	///< An alias for the language comment constant iterator

		// Forward fileSet iterator for the container vector

		/// @brief Return an iterator proxy to the begining of the comment vector
		/// @return Comment begin iterator
		virtual iterator					begin			() 							{ return comments.begin();	}

		/// @brief Return a constant iterator proxy to the begining of the comment vector
		/// @return Constant begin iterator
		virtual const_iterator 				begin			() const 					{ return comments.begin();	}

		/// @brief Return an iterator proxy to the end of the comment vector
		/// @return End iterator
		virtual iterator					end				()							{ return comments.end();	}

		/// @brief Return a constant iterator proxy to the end of the comment vector
		/// @return Constant end iterator
		virtual const_iterator				end				() const					{ return comments.end();	}

		/// @brief Add a new comment object, i.e. what identifies a comment, the set of start and end (comment) tokens
		/// @param [in] pc - New comment
		virtual void						addComment		( comment * pc )			{ comments.push_back( pc );	}

		/// @brief Get the language comment tokens
		/// @return The reference to the vector holding the comment object addresses
		virtual std::vector<comment *> &	getComments		( void ) 	 				{ return comments;			}

		/// @brief Get the language type, i.e. the language ID
		/// @return Language identifier (enumeration)
		virtual languageType				getType			( void )					{ return lang;				}

		/// @brief Obtain the name of the language
		/// @return Name of the language
		virtual const char *				getName			( void )					{ return name.c_str();		}

		/// @brief Get a reference to the language statistics
		/// @return The language statistics
		virtual statistics &				getStatistics	( void )					{ return stats;				}

protected:
		// Methods

		/// @brief Check if the extension is used to identify the language
		/// @param [in] extension - File Extension
		/// @param [in] extensionList - The list of known extensions for this language
		/// @return True if the extension matches one of the known language file extensions. False otherwise
		static  bool				checkExtension		( const char * extension, const char ** extensionList	);

		// Variables

		// Specific language
		languageType				lang;		///< ID of the language
		std::string					name;		///< Name of the language
		statistics					stats;		///< Statistics for the language

		// Support more than one comment tokens in the language
		std::vector<comment *>		comments;	///< List of comments of the programming language

		TRACE_CLASSNAME_DECLARATION

};







#endif // LOC_LANGUAGE_HH_
