
#include "../include/HumanA.hpp"

HumanA::HumanA( Weapon& weapon) : _weapon(weapon) {}

void	HumanA::attack( void ) {
	std::cout << this->_name << "attacks with their " << this->_weapon << std::endl;
}
