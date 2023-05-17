#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( std::string newName);
		ClapTrap( ClapTrap const& other );
		~ClapTrap();

		ClapTrap&		operator=( ClapTrap const& other );

		// Member functions
		void		 	attack(std::string const& target);
		void		 	takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

	private:
	
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};

#endif