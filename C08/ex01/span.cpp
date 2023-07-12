#include "span.hpp"

Span::Span( void ) : _myVector(NULL), _lenght(NULL) {
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
    if (this->_myVector.size() > this->_maxLenght)
        throw MaxLenghtReached();
    this->_myVector.push_back(nbr);
}

void    Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    int newSize = std::distance(begin, end) + this->_myVector.size();

    if (newSize > this->_lenght)
        throw MaxLenghtReached();
    this->_myVector.insert(this->_myVector.size(), begin, end);
}

int     Span::shortestSpan() {

}

int     Span::longestSpan() {

}

const char*     Span::MaxLenghtReached::what() const throw() {
    return "The vector has reached the maximum."
}
