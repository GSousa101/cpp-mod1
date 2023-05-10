#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : Animal("WrongCat") {
    std::cout << "A new WrongCat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : Animal(other) {
    std::cout << "A new WrongCat is cloned" << std::endl;
    *this = other;
}

WrongWrongCat::~WrongCat( void ) {
    std::cout << "A WrongCat died and is rotting" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "A new WrongCat is cloned with = operator" << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Meeeow" << std::endl;
}