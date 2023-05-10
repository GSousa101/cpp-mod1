#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << "A new WrongCat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "A new WrongCat is cloned" << std::endl;
    *this = other;
}

WrongCat::~WrongCat( void ) {
    std::cout << "A WrongCat died and is rotting" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "A new WrongCat is cloned with = operator" << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    WrongCat::makeWrongSound( void ) const {
    std::cout << "Wrong Meeeow" << std::endl;
}