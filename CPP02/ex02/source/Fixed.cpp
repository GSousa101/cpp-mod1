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

Fixed&		Fixed::operator=( Fixed const& other )
{
	if ( this != &other )
	{
		this->_value = other.getRawBits();
		return (*this);
	}
	return *this;
}

bool		Fixed::operator>( Fixed const& other ) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool		Fixed::operator<( Fixed const& other ) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool		Fixed::operator>=( Fixed const& other ) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool		Fixed::operator<=( Fixed const& other ) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool		Fixed::operator==( Fixed const& other ) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool		Fixed::operator!=( Fixed const& other ) const
{
	return (this->getRawBits() != other.getRawBits());
}

/*
** ------------------------------ BASIC OPERATION ------------------------------
*/

Fixed Fixed::operator+(Fixed const& other) {
  Fixed result;
  result._value = this->getRawBits() + other.getRawBits();
  return (result);
}

Fixed Fixed::operator-(Fixed const& other) {
  Fixed result;
  result._value = this->getRawBits() - other.getRawBits();
  return (result);
}

// Dividimos o resultado por 256 (ligar o primeiro bit da esquerda) p/ o operador << conseguir printar esse resultado como float corretamente
Fixed Fixed::operator*(Fixed const& other) {
  Fixed result;
  result._value = (this->getRawBits() * other.getRawBits()) >> this->_fractionalBits;
  return (result);
}

// Multiplicamos o resultado por 256 (right shift de 8 bits) p/ o operador << conseguir printar esse resultado como float corretamente
Fixed Fixed::operator/(Fixed const& other) {
  Fixed result;
  result._value = (this->getRawBits() / other.getRawBits()) << this->_fractionalBits;
  return (result);
}

Fixed& Fixed::operator++(void) {
  ++this->_value;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed toPrint = *this;
  
  ++this->_value;
  return (toPrint);
}

Fixed& Fixed::operator--(void) {
  --this->_value;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed toPrint = *this;

  --this->_value;
  return (toPrint);
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

/*
** ------------------- STATIC MEMBER FUNCTIONS ------------------------------
*/

const Fixed& 		Fixed::max(Fixed const& first, Fixed const& second)
{
	return (first > second ? first : second);
}

Fixed&				Fixed::max(Fixed& first, Fixed& second)
{
	return (first > second ? first : second);

}

const Fixed&		Fixed::min(Fixed const& first, Fixed const& second)
{
	return (first < second ? first : second);

}

Fixed&				Fixed::min(Fixed& first, Fixed& second)
{
	return (first < second ? first : second);

}