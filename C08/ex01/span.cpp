#include "span.hpp"

Span::Span( void ) {
}

Span::Span(int lenght) : _lenght(lenght), _myVector(NULL)
{ }

Span::Span(Span const& other) {
    this->_myVector = other._myVector;
    this->_lenght = other._lenght
}

Span::~Span() {
}

Span&   Span::operator=(Span const& other) {
    if (this != &other )
    {
        this->_myVector = other._myVector;
        this->_lenght = other._lenght
    }
    return *this;
}


/*
 *  ----------------------------- MEMBER FUNCTIONS ---------------------
 */

void    Span::addNumber( int nbr )
{
    if (nbr > maxLenght)
        throw OutOfRange();
    
}
