#include "../include/Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR & DESTRUCTOR --------------------------------
*/
int const		Fixed::_fractionalBits = 8;
Fixed::Fixed( void ) : _value(0) {}

Fixed::Fixed( const Fixed & other )
{
	*this = other;
}

Fixed::Fixed( int const value)
{
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed( void ) {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed&				Fixed::operator=( Fixed const & other )
{
	if ( this != &other )
	{
		this->_value = other.getRawBits();
		return (*this);
	}
	return *this;
}

bool		Fixed::operator>( Fixed const& other )
{
	return (this->getRawBits() > other.getRawBits())
}

bool		Fixed::operator<( Fixed const& other )
{
	return (this->getRawBits() < other.getRawBits())
}

bool		Fixed::operator>=( Fixed const& other )
{
	return (this->getRawBits() >= other.getRawBits())
}

bool		Fixed::operator<=( Fixed const& other )
{
	return (this->getRawBits() <= other.getRawBits())
}

bool		Fixed::operator==( Fixed const& other )
{
	return (this->getRawBits() == other.getRawBits())
}

bool		Fixed::operator!=( Fixed const& other )
{
	return (this->getRawBits() != other.getRawBits())
}



std::ostream&		operator<<( std::ostream & ostream, Fixed const & obj )
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
