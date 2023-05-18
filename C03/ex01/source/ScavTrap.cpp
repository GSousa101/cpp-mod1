#include "../include/ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( void ) : ClapTrap( "Jack Spearrow", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string newName) : ClapTrap(newName, 100, 50, 20)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other )
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const& other )
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if ( this != &other )
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			ScavTrap::attack(std::string const& target)
{
	std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void			ScavTrap::guardGate( void ) const
{
	std::cout << GREEN << "ScavTrap " << this->_name << " has enterred in Gate Keeper mode." << RESET << std::endl;
}