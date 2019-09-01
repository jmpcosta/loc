// ***********************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions/declarations for a Provider of statistics
//
// ***********************************************************************************************

#ifndef LOC_STATISTICSPROVIDER_HH_
#define LOC_STATISTICSPROVIDER_HH_

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
#include "singleton.hh"
#include "language/languageType.hh"
#include "language/LanguageProvider.hh"
#include "statistics/statistics.hh"
#include "statistics/fileStatistics.hh"
#include "statistics/languageStatistics.hh"


// *****************************************************************************************
//
// Section: Function declaration
//
// *****************************************************************************************

/// @brief This class provides acts as a service provider of statistics
class StatisticsProvider : public Singleton<StatisticsProvider>
{
public:
		/// @brief Class destructor
									~StatisticsProvider	( void	);

		/// @brief Get the number of parser processed languages
		/// @return The number of distinct languages
		std::size_t					getNumberLanguages		( void 	)		{ return iLanguages.size(); }

		/// @brief Get the number of parser processed files
		/// @return The number of files
		std::size_t					getNumberFiles			( void	)		{ return iFiles.size();		}


		/// @brief Get a reference to the global statistics
		/// @return The global statistics reference
		statistics 		&			getGlobal				( void ) 		{ return iGlobal;			}

		/// @brief Get a reference to a language statistics
		/// @param [in] key	- For which language the statistics are to be retrieved
		/// @return The language statistics reference
		statistics 		&			getLanguage				( languageType key 			);

		/// @brief Get a reference to a file statistics
		/// @param [in] key	- For which file the statistics are to be retrieved
		/// @return The file statistics reference
		statistics 		&			getFile					( const void * key 			);

		/// @brief Verify if a given language statistics exists
		/// @param [in] key	- For which language the statistics are to be checked
		/// @return True if the language exists in the provider
		bool						exists					( languageType key 			);

		/// @brief Verify if a given file statistics exists
		/// @param [in] key	- For which file the statistics are to be checked
		/// @return True if the file exists in the provider
		bool						exists					( const void * key 			);

		/// @brief Provide a hint to the this provider on how many statistic objects are required for files
		/// @param [in] size - Number of required Language statistic objects
		void						setCapacity				( std::size_t	size		);

		/// @brief Add the provided statistics to the current ones
		/// @param [in] l - Language identifier where to classify the statistic
		/// @param [in] f - File identifier where to classify the statistic
		/// @param [in] s - Statistics to add
		void						addStatistics			( languageType l, void * f, statistics & s	);

		/// @brief Template method to walk through the language container
		/// @param [in] func - Function to call for every language container item
		template <typename F> void walk( F func );

private:
		// Variables
		statistics							iGlobal;		///< Accumulated statistics values for all files
		std::vector<languageStatistics>		iLanguages;		///< Accumulated statistics values for all files by language
		std::vector<fileStatistics>			iFiles;			///< Statistics values per file

		TRACE_CLASSNAME_DECLARATION
};


template <typename F> void StatisticsProvider::walk( F func )
{
 LanguageProvider	&	prov	= LanguageProvider::getInstance();
 languageType			type	= languageType::unknown;


 // For every element of the vector, call passed function on it
 for( auto i : iLanguages )
    {
	 std::string str = "Language ";
	 type = i.getType();

	 str += prov.getLanguage( type )->getName();
	 str += " (";
	 str += std::to_string( i.getNumberLanguages() );
	 str += ")";

	  func( str.c_str(), i.getStatistics() );
    }
}



#endif // LOC_STATISTICSPROVIDER_HH_
