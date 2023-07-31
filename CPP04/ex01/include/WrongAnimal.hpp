#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "Color.hpp"
# include "Brain.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
		Brain*      _brain;

		
	public:
		// Constructors and destructor
							WrongAnimal( void );
							WrongAnimal( std::string type );
							WrongAnimal( const WrongAnimal& other );
		virtual				~WrongAnimal( void );
		WrongAnimal			&operator=( const WrongAnimal& other );

		// Member functions
		std::string	const&	getType( void ) const;
		std::string const&	getIdea( void ) const;
		void				makeWrongSound( void ) const;
};

#endif