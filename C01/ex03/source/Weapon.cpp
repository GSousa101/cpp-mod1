
#include "../include/Weapon.hpp"

Weapon::Weapon(std::string value) : _type(value) {}

std::string&	Weapon::getType( void ) {
	return this->_type;
}

void	Weapon::setType( std::string value ) {
	this->_type = value;
}
