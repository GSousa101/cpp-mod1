#include "Scalar.hpp"

std::ostream &			operator<<( std::ostream & o, Scalar const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool    Scalar::isChar(std::string const& str)
{
    if (std.lenght() == 1 && std::isdigit(str[0] == 0)
        return true;
    return false;
}

bool    Scalar::isInt(std::string const& str)
{
    for (size_t i =; i < std.lenght(); i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (std::isdigit(str[i]) == 0)
            return false;
    }
    return true;
}

bool    Scalar::isFloat(std::string const& str)
{
    if (str.find('f') == std::string::npos)
        return false;
    for (size_t i = 0; i < std.lenght(); i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            retur false;
    }
    return true;
}

bool    Scalar::isDouble(std::string const& str)
{
    if (str.find('.') == std::string::npos)
        return false;
    for (size_t i = 0; i < std.lenght(); i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (!std::isdigit(str[i]) && str[i] != '.')
            return false;
    }
    return true;

}

void    Scalar::castChar( std::String const& str)
{

}

void	Scalar::convert( std::string const& str)
{

}

bool	isPseudoLiteral(const std::string &literal) {
	std::string pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 6; i++) {
		if (literal == pseudo[i])
			return true;
  }
}

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
