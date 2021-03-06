// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Definition of a generic singleton class to support
//			the creation of a single instance by classes
//
// *****************************************************************************************

#ifndef LOC_SINGLETON_HH_
#define LOC_SINGLETON_HH_


// *****************************************************************************************
//
// Section: Template declaration/definition
//
// *****************************************************************************************


/// @brief Define a generic Singleton
template<typename T>
class Singleton
{
public:
	/// @brief Obtain a reference to the singleton instance
    static T & getInstance()
    {
        static T instance;
        return instance;
    }

	// delete copy and move constructors and assign operators
    Singleton( const Singleton & ) 				= delete;	// Copy construct
    Singleton( Singleton && ) 					= delete;	// Move construct
    Singleton & operator=( const Singleton & )	= delete;	// Copy assign
    Singleton & operator=( Singleton && )		= delete;	// Move assign

protected:
    // Inline and protected constructor & Destructor
    Singleton() {}
    ~Singleton() {}
};


#endif		// LOC_SINGLETON_HH_
