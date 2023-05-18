#include "../include/ClapTrap.hpp"

/*
** --------------------------- CONSTRUCTOR & DESTRUCTOR -----------------------------
*/

ClapTrap::ClapTrap( void )
{
	this->_name = "Don Quixote";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string newName)
{
	this->_name = newName;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const& other )
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap&			ClapTrap::operator=( ClapTrap const& other )
{
	if ( this != &other )
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << "Copy assignment operator overload called" << std::endl;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				message(std::string str) { std::cout << str << std::endl; }

void				ClapTrap::attack(std::string const& target)
{
	if (this->_energyPoints == 0)
		return message(RED + this->_name + " don't have enough points to attack." + RESET);
	if (this->_hitPoints == 0)
		return message(RED + this->_name + " is dead, cannot attack." + RESET);
	this->_energyPoints--;
	std::cout << RED << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		return message(ORANGE + this->_name + " is already dead." + RESET);
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		return message(ORANGE + this->_name + " receives an attack and died in the spot!" + RESET);
	}
	this->_hitPoints -= amount;
	std::cout << ORANGE << this->_name << " receives an attack, causing ";
	std::cout << amount << " of damage. Points left: " << this->_hitPoints << RESET << std::endl;
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		return message (CYAN + this->_name + " can't be repaired because the soul has left the body!" + RESET);
	if (this->_energyPoints <= 0)
		return message(CYAN + this->_name + " can't be repaired because doesn't have enough energyPoints!" + RESET);
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << CYAN << this->_name << " repair " << amount << " hitpoints. Points left: ";
	std::cout << this->_hitPoints << RESET << std::endl;
}