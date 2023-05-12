#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
    std::cout << GREEN << "A new dog is born" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << ORANGE << "A new dog is cloned" << RESET << std::endl;
    *this = other;
}

Dog::~Dog( void ) {
    std::cout << RED << "Dog R.I.P." << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << YELLOW << "A new dog is cloned with = operator" << RESET << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << CYAN << "Woof Woof" << RESET << std::endl;
}