#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "Color.hpp"
# include "Brain.hpp"

class AWrongAnimal
{
	protected:
		std::string	_type;
		Brain*      _brain;

		
	public:
		// Constructors and destructor
				AWrongAnimal( void );
				AWrongAnimal( std::string type );
				AWrongAnimal( const AWrongAnimal& other );
		virtual ~AWrongAnimal( void );
		AWrongAnimal &operator=( const AWrongAnimal& other );

		// Member functions
		std::string	const&	getType( void ) const;
		std::string const&	getIdea( void ) const;
		void				makeWrongSound( void ) const;
};

#endif