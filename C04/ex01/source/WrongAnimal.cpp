#include "../include/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/
WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "noType";
}

WrongAnimal::WrongAnimal(std::string type) {
    std::cout << "A new WronAnimal is born" << std::endl;
    this->_type = type;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = other.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal:: operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal cloned by assignment operator" << std::endl;
	this->_type = other._type;
	return *this;
}

/*
** --------------------------------- MEMBER FUNCTIONS ----------------------------------
*/

std::string const&	WrongAnimal::getType( void ) const {
	return (this->_type);
}

std::string const&  WrongAnimal::getIdea ( void ) const {
	return (this->_brain->getIdea());
}
void				WrongAnimal::makeWrongSound( void ) const {
	std::cout << "Non sound for WrongAnimal" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */