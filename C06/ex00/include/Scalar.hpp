#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>

class Scalar
{
    public:
       void  static   convert(std::string const& literal);

	private:
		Scalar( void );
		Scalar( Scalar const & src );
		~Scalar( void );
		Scalar &		operator=( Scalar const & other );

    static bool    isChar (std::string const& str);
    static bool    isInt (std::string const& str);
    static bool    isFloat (std::string const& str);
    static bool    isDouble (std::string const& str);

    static void    printChar( std::string const& str);
    static void    printInt( std::string const& str);
    static void    printFloat( std::string const& str);
    static void    printDouble( std::string const& str);
    static void    printExtra( std::string const& str);
    static void    printExtreme( std::string const& str);

    
    class InvalidConversionException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class OverflowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

};

std::ostream &			operator<<( std::ostream & o, Scalar const & i );

#endif /* ************************************************* SCALAR_H */
