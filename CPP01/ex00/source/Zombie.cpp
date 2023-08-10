#include "../include/Zombie.hpp"

Zombie::~Zombie( void ) {
  std::cout << this->getName() << " was decapitated while eating your BraiiiiiinnnnzzzzZ" << std::endl;
}

void                Zombie::setName(std::string name) {
  this->_name = name;
}

std::string const&  Zombie::getName( void ) {
  return (this->_name);
}

void                Zombie::announce( void ) {
    std::cout << this->getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}


