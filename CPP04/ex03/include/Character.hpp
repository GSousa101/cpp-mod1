#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

class Character
{

	public:

		Character();
		Character( Character const & src );
		~Character();

		Character&		operator=( Character const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif