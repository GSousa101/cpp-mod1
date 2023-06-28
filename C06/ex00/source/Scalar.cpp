#include "../include/Scalar.hpp"

/*
** --------------------------------- CHECKERS ----------------------------------
*/

bool    Scalar::isChar(std::string const& str)
{
    if (str.length() == 1 && std::isdigit(str[0] == 0))
        return true;
    return false;
}

bool    Scalar::isInt(std::string const& str)
{
    for (size_t i = 0; i < str.length(); i++)
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
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            return false;
    }
    return true;
}

bool    Scalar::isDouble(std::string const& str)
{
    if (str.find('.') == std::string::npos)
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (!std::isdigit(str[i]) && str[i] != '.')
            return false;
    }
    return true;
}

bool	isExtreme(const std::string &str) {
	std::string pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 6; i++) {
		if (str == pseudo[i])
			return true;
  }
    return false;
}

/*
** --------------------------------- PREPARATION ----------------------------------
*/

std::string    prepare_char(int nbr)
{
    if (nbr > std::numeric_limits<char>::max() || nbr < std::numeric_limits<char>::min())
        return ("char : impossible");
    else if (isprint(nbr))
        return ("char: " + static_cast<char>(nbr));
    else
        return ("char: Non displayable");
}

/*
** --------------------------------- PRINTERS ----------------------------------
*/

void    Scalar::printChar( std::string const& str)
{
    char    c = str[0];

    std::cout   << "char: " << c << std::endl
                << "int: " << static_cast<int>(c) << std::endl
                << "float: " << static_cast<float>(c) << ".0f" << std::endl
                << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void    Scalar::printInt( std::string const& str)
{
    int     nbr = std::atoi(str.c_str());

    std::cout   << "char: " << prepare_char(nbr) << std::endl
                << "int: " << nbr << std::endl
                << "float: " << static_cast<float>(nbr) << ".0f" << std::endl
                << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
}

void    Scalar::printFloat( std::string const& str)
{
   float     nbr = std::atof(str.c_str());
    (void)nbr;
}

void    Scalar::printDouble( std::string const& str)
{
    double     nbr = std::atof(str.c_str());
    (void)nbr;

}

void    Scalar::printExtra( std::string const& str)
{
    (void)str;
}

void    Scalar::printExtreme( std::string const& str)
{
    (void)str;
}

void	Scalar::convert( std::string const& str)
{
    if (isChar(str))
        printChar(str);
    // else if (isExtreme)
        // print(printExtreme(str));
    else if (isInt(str))
        printInt(str);
    // else if (isFloat(str))
    //     printfloat(str);
    // else if (isDouble(str))
    //     printDouble(str);
    // else 
    //     printExtra(str);
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
