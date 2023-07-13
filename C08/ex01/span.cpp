#include "span.hpp"

Span::Span( void ) : _myVector(NULL), _lenght(0) {
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
    std::cout << this->_myVector << std::endl;
}

int     Span::shortestSpan() {
    if (this->_myVector.size() <= 1)
        throw notEnoughtNumbers();

    std::vector<int>    myCopy(this->_numbers);
    std::sort(myCopy.begin(), myCopy.end());

    unsigned int     shortest = std::numeric_limits<unsigned int>::max();
    for (int i = 0; i < myCopy.size() - 1; i++)
    {
        int     actualShort = myCopy[i] - myCopy[i + 1]; 
        shortest = min(shortest, actualShort)
    }
    return std::abs(shortest);
}

int     Span::longestSpan() {
    if (this->_myVector.size() <= 1)
        throw notEnoughtNumbers();
    std::vector<int>    myCopy(this->_numbers);
    std::sort(myCopy.begin(), myCopy.end());
    return std::abs(myCopy.end() - myCopy.begin());
}

const char*     Span::MaxLenghtReached::what() const throw() {
    return "The vector has reached the maximum."
}

const char*     Span::notEnoughtNumbers::what() const throw() {
    return "The vector does not have enough numbers."
}
