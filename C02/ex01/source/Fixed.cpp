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

Fixed::Fixed( int const value)
{
	std::cout << "Int constructor called" << std::endl;
	(void) value;

}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	(void) value;
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

std::ostream &			operator<<( std::ostream & ostream, Fixed const & obj )
{
	ostream << "Value = " << obj.getRawBits();
	return ostream;
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

float			Fixed::toFloat ( void ) const
{
    int scalingFactor = 1 << this->_fractionalBits;
    int fixedPointValue = this->_value * scalingFactor;
    return fixedPointValue;
}

int				Fixed::toInt ( void ) const
{
    int scalingFactor = 1 << this->_fractionalBits;
    int fixedPointValue = this->_value / scalingFactor;
    return fixedPointValue;
}
