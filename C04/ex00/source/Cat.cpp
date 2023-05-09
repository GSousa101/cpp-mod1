#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << "A new cat is born" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "A new cat is cloned" << std::endl;
    *this = other;
}

Cat::~Cat( void ) {
    std::cout << "A cat just died" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "A new cat is cloned" << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "Meeeow" << std::endl;
}