#include "../include/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/
WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "noType";
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

WrongAnimal &WrongAnimal::operator=( WrongAnimal const & other )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)other;
	return *this;
}

/*
** --------------------------------- MEMBER FUNCTIONS ----------------------------------
*/

std::string const&	WrongAnimal::getType( void ) const {
	return (this->_type);
}

void				WrongAnimal::makeWrongSound( void ) const {
	std::cout << "****SOME UNRECOGNIZED ANIMAL SOUND****" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */