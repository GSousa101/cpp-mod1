#include "../include/AMateria.hpp"

// Constructors & Destructors
AMateria::AMateria( void ) {

}

AMateria::AMateria( std:: string const& type) : _type(type) {}

AMateria::AMateria( AMateria const& other) {

}

AMateria::~AMateria( void ) {

}

AMateria&   operator=(AMateria const& other) {

}

// Getters
std::string const&  getType( void ) const {
    return (this->_type)
}
