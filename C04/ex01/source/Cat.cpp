#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << GREEN << "A new cat is born" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << ORANGE << "A new cat is cloned" << RESET << std::endl;
    *this = other;
}

Cat::~Cat( void ) {
    std::cout << RED << "Cat R.I.P." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << YELLOW << "A new cat is cloned with = operator" << RESET << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << CYAN << "Meeeow" << RESET << std::endl;
}