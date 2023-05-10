#include "../include/Animal.hpp"

// Constructors & Destructor
Animal::Animal( void ) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = "No race";
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
    std::cout << "The animal just died and is rotting" << std::endl;
}

// Operator
Animal& Animal::operator=(const Animal& other) {
    std::cout << "A new animal is cloned with = operator" << std::endl;
    this->_type = other._type;
    return (*this);
}

std::string const& Animal::getType( void ) const {
    return (this->_type);
}

void    Animal::makeSound( void ) const {
    std::cout << "What sound an animal should do?" << std::endl;
}
