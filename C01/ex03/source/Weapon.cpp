
#include "../include/Weapon.hpp"

std::string	Weapon::getType( void ) {
	return this->_type;
}

void	Weapon::setType( std::string value ) {
	this->_type = value;
}
