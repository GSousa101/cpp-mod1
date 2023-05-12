#include "../include/Animal.hpp"

// Constructors & Destructor
Animal::Animal( void ) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = "No race";
    this->_brain = new Brain();
}

Animal::Animal(std::string type) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = type;
}

Animal::Animal(const Animal& other) {
    std::cout << "A new animal is cloned" << std::endl;
    this->_type = other._type;
}

Animal::~Animal ( void ) {
    std::cout << "Animal R.I.P." << std::endl;
    delete this->_brain;
}

// Operator
Animal& Animal::operator=(const Animal& other) {
    std::cout << "A new animal is cloned with = operator" << std::endl;
    this->_type = other._type;
    return (*this);
}

// Getters
std::string const& Animal::getType( void ) const {
    return (this->_type);
}

std::string const&  Animal::getIdea ( void ) const {
    return (this->_brain->getIdea());
}

// Methods
void    Animal::makeSound( void ) const {
    std::cout << "What sound an animal should do?" << std::endl;
}
