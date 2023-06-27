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
	//if ( this != &other )
	//{
		//this->_value = other.getValue();
	//}
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


/* ************************************************************************** */