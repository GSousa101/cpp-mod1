#include "ClapTrap.hpp"

/*
** --------------------------- CONSTRUCTOR & DESTRUCTOR -----------------------------
*/

ClapTrap::ClapTrap( void )
{
	this->_name = "John Doe";
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

std::ostream &			operator<<( std::ostream& ostream, ClapTrap const& obj )
{
	//o << "Value = " << i.getValue();
	return ostream;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
