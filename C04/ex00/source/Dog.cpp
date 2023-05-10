#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
    std::cout << "A new dog is born" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "A new dog is cloned" << std::endl;
    *this = other;
}

Dog::~Dog( void ) {
    std::cout << "A dog just died" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "A new dog is cloned" << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof Woof" << std::endl;
}