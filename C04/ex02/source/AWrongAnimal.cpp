#include "../include/AWrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/
AWrongAnimal::AWrongAnimal( void )
{
	std::cout << "AWrongAnimal default constructor called" << std::endl;
	this->_type = "noType";
}

AWrongAnimal::AWrongAnimal(std::string type) {
    std::cout << "A new WronAnimal is born" << std::endl;
    this->_type = type;
}

AWrongAnimal::AWrongAnimal( const AWrongAnimal& other )
{
	std::cout << "AWrongAnimal copy constructor called" << std::endl;
	this->_type = other.getType();
}

AWrongAnimal::~AWrongAnimal()
{
	std::cout << "AWrongAnimal destructor called" << std::endl;
}

AWrongAnimal& AWrongAnimal:: operator=(const AWrongAnimal& other) {
	std::cout << "AWrongAnimal cloned by assignment operator" << std::endl;
	this->_type = other._type;
	return *this;
}

/*
** --------------------------------- MEMBER FUNCTIONS ----------------------------------
*/

std::string const&	AWrongAnimal::getType( void ) const {
	return (this->_type);
}

std::string const&  AWrongAnimal::getIdea ( void ) const {
	return (this->_brain->getIdea());
}
void				AWrongAnimal::makeWrongSound( void ) const {
	std::cout << "Non sound for AWrongAnimal" << std::endl;
}
