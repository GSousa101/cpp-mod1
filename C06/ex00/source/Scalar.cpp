#include "../include/Scalar.hpp"

/*
** --------------------------------- CHECKERS ----------------------------------
*/

bool    Scalar::isChar(std::string const& str)
{
    if (str.length() == 1 && !std::isdigit(str[0]))
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

bool	Scalar::isExtreme(const std::string &str) {
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

void    putChar(double nbr)
{
    std::numeric_limits<char> charLimit;

    if (nbr > charLimit.max() || nbr < charLimit.min())
        std::cout << "char: out of range." << std::endl;
    else if (!isprint(nbr))
        std::cout << "char: Non displayable." << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nbr) << std::endl;
}

void    putInt(int nbr)
{
    std::numeric_limits<int>    intLimit;

    if (nbr > intLimit.max() || nbr < intLimit.min() )
		std::cout << "int: out of range." << std::endl;
    if (isnan(nbr))
		std::cout << "int: impossible." << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
}

void    putFloat(float nbr)
{
    std::numeric_limits<float>   floatLimit;

    if (nbr > floatLimit.max() || nbr < floatLimit.min() )
		std::cout << "float: out of range." << std::endl;
    if (isnan(nbr))
		std::cout << "float: impossible." << std::endl;
	else
  		std::cout << std::setprecision(1) << std::fixed << "float: " << nbr << "f" << std::endl;
}

void    putDouble(double nbr)
{
    std::numeric_limits<double>   doubleLimit;

    if (nbr > doubleLimit.max() || nbr < doubleLimit.min() )
		std::cout << "double: out of range." << std::endl;
    if (isnan(nbr))
		std::cout << "double: impossible." << std::endl;
	else
  		std::cout << std::setprecision(1) << std::fixed << "double: " << nbr << std::endl;
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

    putChar(nbr);
    putInt(nbr);
    putFloat(nbr);
    putDouble(nbr);
}

void    Scalar::printFloat( std::string const& str)
{
    float     nbr = std::atof(str.c_str());

    putChar(nbr);
    putInt(nbr);
    putFloat(nbr);
    putDouble(nbr);
}

void    Scalar::printDouble( std::string const& str)
{
    double     nbr = std::atof(str.c_str());

    putChar(nbr);
    putInt(nbr);
    putFloat(nbr);
    putDouble(nbr);
}

void    Scalar::printExtreme()
{
	std::cout << "char: impossible" << std::endl
	        << "int: impossible" << std::endl
	        << "float: nanf" << std::endl
	        << "double: nan" << std::endl;
}

void	Scalar::convert( std::string const& str)
{
    if (isExtreme(str))
        printExtreme();
    else if (isChar(str))
        printChar(str);
    else if (isInt(str))
        printInt(str);
    else if (isFloat(str))
        printFloat(str);
    else if (isDouble(str))
        printDouble(str);
    else 
        printExtreme();
}

/* ************************************************************************** */
