#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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
		void			guardGate( void ) const;
};

#endif