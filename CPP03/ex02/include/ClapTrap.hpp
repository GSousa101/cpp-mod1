#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "Color.hpp"

class ClapTrap
{

	public:

		ClapTrap( void );
		ClapTrap( std::string newName);
		ClapTrap( std::string newName, int hp, int ep, int ad);
		ClapTrap( ClapTrap const& other );
		virtual	~ClapTrap();

		ClapTrap&		operator=( ClapTrap const& other );

		// Member functions
		virtual void 	attack(std::string const& target);
		void		 	takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

	protected:
	
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};

#endif