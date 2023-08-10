#include "../include/Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat") {
    std::cout << GREEN << "A new cat is born" << RESET << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other) {
    std::cout << ORANGE << "A new cat is cloned" << RESET << std::endl;
    this->_brain = new Brain(*other._brain);
    *this = other;
}

Cat::~Cat( void ) {
    std::cout << RED << "Cat R.I.P." << RESET << std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << YELLOW << "A new cat is cloned with = operator" << RESET << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << CYAN << "Meeeow" << RESET << std::endl;
}

std::string const&  Cat::getIdea ( void ) const {
    return (this->_brain->getIdea());
}