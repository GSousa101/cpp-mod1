#include "../include/AAnimal.hpp"

// Constructors & Destructor
AAnimal::AAnimal( void ) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = "No race";
}

AAnimal::AAnimal(std::string type) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = type;
}

AAnimal::AAnimal(const AAnimal& other) {
    std::cout << "A new animal is cloned" << std::endl;
    this->_type = other._type;
}

AAnimal::~AAnimal ( void ) {
    std::cout << "AAnimal R.I.P." << std::endl;
}

// Operator
AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::cout << "A new animal is cloned with = operator" << std::endl;
    this->_type = other._type;
    return (*this);
}

// Getters
std::string const& AAnimal::getType( void ) const {
    return (this->_type);
}
