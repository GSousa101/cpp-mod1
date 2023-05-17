#include "../include/ClapTrap.hpp"

/*
** --------------------------- CONSTRUCTOR & DESTRUCTOR -----------------------------
*/

ClapTrap::ClapTrap( void )
{
	this->_name = "Dom Quixote";
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
		return message(this->_name + " don't have enough points to attack");
	if (this->_hitPoints == 0)
		return message(this->_name + " is dead, cannot attack");
	this->_energyPoints--;
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		return message(this->_name + " is already dead.");
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		return message(this->_name + " receives an attack and died in the spot!");
	}
	this->_hitPoints -= amount;
	std::cout << this->_name << " receives an attack, causing " << amount << " of damage. Points left: " << this->_hitPoints;
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		message (this->_name + " can't be repaired because the soul has left the body!");
	if (this->_energyPoints <= 0)
		message(this->_name + " can't be repaired because doesn't have enough energyPoints!");
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << this->_name << " repair " << amount << " hitpoints. Total: " << this->_hitPoints << std::endl;
}