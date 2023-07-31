#include "../include/Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called"  << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & other )
{
	if ( this != &other )
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_value = other.getRawBits();
		return (*this);
	}
	return *this;
}

/*
** ------------------------------ MEMBER FUNCTIONS ------------------------------
*/

int				Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void			Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
