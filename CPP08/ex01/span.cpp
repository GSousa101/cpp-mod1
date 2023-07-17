#include "span.hpp"

Span::Span( void ) : _lenght(0), _myVector(0)
{ }

Span::Span(int lenght) : _lenght(lenght), _myVector(0)
{ }

Span::Span(Span const& other) {
    this->_myVector = other._myVector;
    this->_lenght = other._lenght;
}

Span::~Span()
{ }

Span&   Span::operator=(Span const& other) {
    if (this != &other )
    {
        this->_myVector = other._myVector;
        this->_lenght = other._lenght;
    }
    return *this;
}


/*
 *  ----------------------------- MEMBER FUNCTIONS ---------------------
 */

void    Span::addNumber( int nbr )
{
    if (this->_myVector.size() > this->_lenght)
        throw MaxLenghtReached();
    this->_myVector.push_back(nbr);
}

void    Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
     unsigned int newSize = std::distance(begin, end) + this->_myVector.size();

    if (newSize > this->_lenght)
        throw MaxLenghtReached();
    this->_myVector.insert(this->_myVector.end(), begin, end);
}

int     Span::shortestSpan() {
    if (this->_myVector.size() <= 1)
        throw notEnoughNumbers();

    std::vector<int>    myCopy(this->_myVector);
    std::sort(myCopy.begin(), myCopy.end());

    int     shortest = std::numeric_limits<int>::max();
    for (int i = 1; i < static_cast<int>(myCopy.size()); i++)
    {
        // std::cout << "Next -> " << myCopy[i] << std::endl;
        // std::cout << "Atual -> " << myCopy[i - 1] << std::endl;
        int     actualShort = myCopy[i] - myCopy[i - 1]; 
        shortest = std::min(shortest, actualShort);
        // std::cout << std::endl << "shortest -> " << shortest << std::endl;
        // std::cout << "Actual short -> " << actualShort << std::endl;
    }
    return std::abs(shortest);
}

int     Span::longestSpan() {
    if (this->_myVector.size() <= 1)
        throw notEnoughNumbers();
    std::vector<int>    myCopy(this->_myVector);
    // std::cout << myCopy.begin() << std::endl;
    // std::cout << myCopy.end() << std::endl;
    std::sort(myCopy.begin(), myCopy.end());
    return std::abs(myCopy.end() - myCopy.begin());
}

const char*     Span::MaxLenghtReached::what() const throw() {
    return "The vector has reached the maximum.";
}

const char*     Span::notEnoughNumbers::what() const throw() {
    return "The vector does not have enough numbers.";
}
