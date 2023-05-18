#include "../include/FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void ) : ClapTrap( "Jack Spearrow", 100, 100, 30)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string newName) : ClapTrap(newName, 100, 100, 30)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other )
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const& other )
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
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

void			FragTrap::attack(std::string const& target)
{
	if (this->_hitPoints == 0)
		return messageRed("FragTrap " + this->_name + " is dead and cannot attack.");
	if (this->_energyPoints == 0)
		return messageRed("FragTrap " + this->_name + " don't have enough points to attack.");
	this->_energyPoints--;
	std::cout << RED << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void			FragTrap::guardGate( void ) const
{
	messageGreen("FragTrap " + this->_name + " have enterred in Gate keeper mode.");
}