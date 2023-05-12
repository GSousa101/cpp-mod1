#include "../include/AAnimal.hpp"

// Constructors & Destructor
AAnimal::AAnimal( void ) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = "No race";
    this->_brain = new Brain();
}

AAnimal::AAnimal(std::string type) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = type;
    this->_brain = new Brain();
}

AAnimal::AAnimal(const AAnimal& other) {
    std::cout << "A new animal is cloned" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
}

AAnimal::~AAnimal ( void ) {
    std::cout << "AAnimal R.I.P." << std::endl;
    delete this->_brain;
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

std::string const&  AAnimal::getIdea ( void ) const {
    return (this->_brain->getIdea());
}
