#include "Scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar()
{
}

Scalar::Scalar( const Scalar & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalar::~Scalar()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalar &				Scalar::operator=( Scalar const & other )
{
    (void)other;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Scalar const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool    isChar(std::string const& str)
{
        

}

bool    isInt(std::string const& str)
{

}

bool    isFloat(std::string const& str)
{

}

bool    isDouble(std::string const& str)
{

}

void Scalar::castChar( char const *str )
{
    this->_charRepr   = str[0];
    this->_intRepr    = static_cast<long int>( this->_charRepr );
    this->_floatRepr  = static_cast<float>( this->_charRepr );
    this->_doubleRepr = static_cast<double>( this->_charRepr );
}

void Scalar::castInt( char const *str )
{
    this->_intRepr = std::atol( str );
    if ( this->_intRepr > std::numeric_limits<int>::max()
        || this->_intRepr < std::numeric_limits<int>::min() ) {
        throw Scalar::OverflowException();
    }
    this->_charRepr   = static_cast<char>( this->_intRepr );
    this->_floatRepr  = static_cast<float>( this->_intRepr );
    this->_doubleRepr = static_cast<double>( this->_intRepr );
}

void Scalar::castDouble( char const *str )
{
    this->_doubleRepr = std::strtod( str, NULL );
    this->_charRepr   = static_cast<char>( this->_doubleRepr );
    this->_intRepr    = static_cast<long int>( this->_doubleRepr );
    this->_floatRepr  = static_cast<float>( this->_doubleRepr );
}

void Scalar::castFloat( char const *str )
{
    this->_floatRepr  = std::atof( str );
    this->_charRepr   = static_cast<char>( this->_floatRepr );
    this->_intRepr    = static_cast<long int>( this->_floatRepr );
    this->_doubleRepr = static_cast<double>( this->_floatRepr );
}



bool	isPseudoLiteral(const std::string &literal) {
	std::string pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 6; i++) {
		if (literal == pseudo[i])
			return true;
  }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** ------------------------------- EXCEPTIONS --------------------------------
*/

const char *Scalar::InvalidConversionException::what() const throw()
{
    return "Error: InvalidConversionException - Invalid conversion detected";
}

const char *Scalar::OverflowException::what() const throw()
{
    return "Error: OverflowException - Overflow detected";
}

/* ************************************************************************** */
