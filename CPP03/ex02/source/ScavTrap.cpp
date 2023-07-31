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
void messageRed( std::string message )
{
	std::cout << RED << message << RESET << std::endl;
}

void messageGreen( std::string message )
{
	std::cout << GREEN << message << RESET << std::endl;
}

void			ScavTrap::attack(std::string const& target)
{
	if (this->_hitPoints == 0)
		return messageRed("ScavTrap " + this->_name + " is dead and cannot attack.");
	if (this->_energyPoints == 0)
		return messageRed("ScavTrap " + this->_name + " don't have enough points to attack.");
	this->_energyPoints--;
	std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void			ScavTrap::guardGate( void ) const
{
	messageGreen("ScavTrap " + this->_name + " have enterred in Gate keeper mode.");
}