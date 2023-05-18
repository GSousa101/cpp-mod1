#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const& other );
		~ScavTrap();

		ScavTrap&		operator=( ScavTrap const& other );

	private:

};

std::ostream&			operator<<( std::ostream & ostream, ScavTrap const& obj );

#endif