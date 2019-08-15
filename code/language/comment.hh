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


class comment
{
public:
								comment() 										{ start=""; end=""; multiline=false; }

		void 					setStart		( const std::string & token )	{ start = token; }
		void 					setStart		( const char * token 		)	{ start = token; }
		const std::string & 	getStart		( void ) const					{ return start;  }

		void					setEnd			( std::string & token )			{ end = token; }
		void					setEnd			( const char  * token )			{ end = token; }
		const std::string &		getEnd			( void ) const 					{ return end;  }
		bool					hasEnd			()								{ return (end.size() > 0); }

		void 					setMultiline	( void ) 						{ multiline = true;  }
		void 					setSingleline	( void ) 						{ multiline = false; }
		bool 					isMultiLine  	( void ) 						{ return multiline;  }

private:

		std::string start;
		std::string end;
		bool		multiline;
};



#endif // LOC_COMMENT_HH_
