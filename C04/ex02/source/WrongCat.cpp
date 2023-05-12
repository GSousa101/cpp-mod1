#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : AWrongAnimal("WrongCat") {
    std::cout << GREEN << "A new WrongCat is born" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : AWrongAnimal(other) {
    std::cout << ORANGE << "A new WrongCat is cloned" << RESET << std::endl;
    *this = other;
}

WrongCat::~WrongCat( void ) {
    std::cout << RED << "A WrongCat died and is rotting" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << YELLOW << "A new WrongCat is cloned with = operator" << RESET << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    WrongCat::makeWrongSound( void ) const {
    std::cout << CYAN << "Wrong Meeeow" << RESET << std::endl;
}