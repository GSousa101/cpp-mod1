#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "Color.hpp"
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap( std::string newName);
		FragTrap( FragTrap const& other );
		~FragTrap();
		FragTrap&		operator=( FragTrap const& other );

		void			attack(std::string const& target);
		void			highFivesGuys( void ) const;
};

#endif