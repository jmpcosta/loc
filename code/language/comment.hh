// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for the target file code
//
// *****************************************************************************************

#ifndef LOC_COMMENT_HH_
#define LOC_COMMENT_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>
#include <vector>

// Import application headers




// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief Class responsible for representing a language comment
class comment
{
public:
								comment() 										{ start=""; end=""; multiline=false; ignoreCase=true;}

		/// @brief Identify the begining of a comment by a start token
		/// @param [in] token - string start token
		void 					setStart		( const std::string & token )	{ start = token; }

		/// @brief Identify the begining of a comment by a start token
		/// @param [in] token - string start token
		void 					setStart		( const char * token 		)	{ start = token; }

		/// @brief Obtain the comment start token
		/// @return Start token string
		const std::string & 	getStart		( void ) const					{ return start;  }

		/// @brief Identify the ending of a comment by a end token
		/// @param [in] token - string end token
		void					setEnd				( std::string & token )			{ end = token; }

		/// @brief Identify the ending of a comment by a end token
		/// @param [in] token - string end token
		void					setEnd				( const char  * token )			{ end = token; }

		/// @brief Obtain the comment end token
		/// @return End token string
		const std::string &		getEnd				( void ) const 					{ return end;  }

		/// @brief Has the comment an end token?
		/// @return True if comment also comprises an end token. False otherwise
		bool					hasEnd				()								{ return (end.size() > 0); }

		/// @brief The comment can span across several lines
		void 					setMultiline		( void ) 						{ multiline = true;  }

		/// @brief The comment token can only be used to comment out a single line
		/// It has only a start token.
		void 					setSingleline		( void ) 						{ multiline = false; }

		/// @brief Can the comment can span across several lines?
		/// @return True if can cross several lines. False otherwise
		bool 					isMultiLine  		( void ) 						{ return multiline;  }

		/// @brief Set comment tokens as case sensitive
		void 					setCaseSensitive	( void ) 						{ ignoreCase = false;		}

		/// @brief Set comment tokens as case insensitive
		void 					setCaseInsensitive	( void ) 						{ ignoreCase = true;		}

		/// @brief Are comment tokens case sensitive? REM vs rem, in Batch, for instance.
		/// @return True is token is case sensitive. False otherwise.
		bool 					isCaseSensitive  	( void ) 						{ return (! ignoreCase);	}

private:

		std::string start;			///< Comment start token
		std::string end;			///< Comment end token
		bool		multiline;		///< Comment is multiline?
		bool		ignoreCase;		///< Ignore case of tokens?
};



#endif // LOC_COMMENT_HH_
