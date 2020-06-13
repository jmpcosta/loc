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
								comment() 											{ start=""; end=""; multiline=false; singleCase=true;}

		/// @brief Identify the begining of a comment by a start token
		/// @param [in] token - string start token
		void 					setStart			( const std::string & token )		{ start = token;			}

		/// @brief Identify the begining of a comment by a start token
		/// @param [in] token - string start token
		void 					setStart			( const char * token 		)		{ start = token; 			}

		/// @brief Obtain the comment start token
		/// @return Start token string
		std::string_view 		getStart			( void ) 							{ return start;  			}

		/// @brief Identify the ending of a comment by a end token
		/// @param [in] token - string end token
		void					setEnd				( const std::string &	token )		{ end = token.c_str();		}

		/// @brief Identify the ending of a comment by a end token
		/// @param [in] token - string end token
		void					setEnd				( const char  * token )				{ end = token; 				}

		/// @brief Obtain the comment end token
		/// @return End token string
		std::string_view		getEnd				( void ) 	 						{ return end;  				}

		/// @brief Has the comment an end token?
		/// @return True if comment also comprises an end token. False otherwise
		bool					hasEnd				()									{ return (end.size()>0);	}

		/// @brief The comment can span across several lines
		void 					setMultiline		( void ) 							{ multiline = true;  		}

		/// @brief The comment token can only be used to comment out a single line
		/// It has only a start token.
		void 					setSingleline		( void ) 							{ multiline = false; 		}

		/// @brief Can the comment can span across several lines?
		/// @return True if can cross several lines. False otherwise
		bool 					isMultiLine  		( void ) 							{ return multiline;  		}

		/// @brief Set comment tokens as having only one case (//)
		void 					setSingleCase		( void ) 							{ singleCase = true;		}

		/// @brief Set comment tokens as having more than one case (rem vs REM)
		void 					setMultipleCase		( void ) 							{ singleCase = false;		}

		/// @brief Are tokens composed of a single case token? REM vs rem, in Batch, for instance.
		/// @return True is token supports only one case. False otherwise
		bool 					isSingleCase	  	( void ) 							{ return singleCase;		}

private:

		std::string_view		start;			///< Comment start token
		std::string_view		end;			///< Comment end token
		bool					multiline;		///< Comment is multiline?
		bool					singleCase;		///< Token has only one case?
};



#endif // LOC_COMMENT_HH_
