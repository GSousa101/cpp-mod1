#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

#define CYAN "\033[0;36m"
#define GREEN "\033[0;32m"
#define ORANGE "\033[1;38;5;214m"
#define RED "\033[0;31m"
#define RESET "\033[0m"
#define YELLOW "\033[0;33m"

class WrongAnimal
{
	protected:
		std::string	_type;
		
	public:
		// Constructors and destructor
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& other );
		virtual ~WrongAnimal( void );
		WrongAnimal &operator=( const WrongAnimal& other );

		// Member functions
		std::string	const&	getType( void ) const;
		void				makeWrongSound( void ) const;
};

#endif