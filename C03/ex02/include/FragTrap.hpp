#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "Color.hpp"
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( std::string newName);
		ScavTrap( ScavTrap const& other );
		~ScavTrap();
		ScavTrap&		operator=( ScavTrap const& other );

		void			attack(std::string const& target);
		void			highFivesGuys( void ) const;
};

#endif