#include "../include/Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/
int const		Fixed::_fractionalBits = 8;
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
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called"  << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed&				Fixed::operator=( Fixed const & other )
{
	if ( this != &other )
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_value = other.getRawBits();
		return (*this);
	}
	return *this;
}

std::ostream&			operator<<( std::ostream & ostream, Fixed const & obj )
{
	ostream << obj.toFloat();
	return ostream;
}

/*
** ------------------------------ MEMBER FUNCTIONS ------------------------------
*/

int			Fixed::getRawBits( void ) const { return (this->_value); }

void		Fixed::setRawBits( int const raw) { this->_value = raw; }

int			Fixed::toInt ( void ) const { return this->_value >> this->_fractionalBits; }

float		Fixed::toFloat ( void ) const
{
    float scalingFactor = 1 << this->_fractionalBits;
    return this->_value / scalingFactor;
}
