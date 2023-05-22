#include "../include/Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog") {
    std::cout << GREEN << "A new dog is born" << RESET << std::endl;
    this->_brain = new Brain();

}

Dog::Dog(const Dog& other) : AAnimal(other) {
    std::cout << ORANGE << "A new dog is cloned" << RESET << std::endl;
    this->_brain = new Brain(*other._brain);
    *this = other;
}

Dog::~Dog( void ) {
    std::cout << RED << "Dog R.I.P." << RESET << std::endl;
    delete this->_brain;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << YELLOW << "A new dog is cloned with = operator" << RESET << std::endl;
    this->_type = other.getType();
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << CYAN << "Woof Woof" << RESET << std::endl;
}

std::string const&  Dog::getIdea ( void ) const {
    return (this->_brain->getIdea());
}