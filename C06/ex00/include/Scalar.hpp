#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{

	private:
		Scalar( void );
		Scalar( Scalar const & src );
		~Scalar( void );
		Scalar &		operator=( Scalar const & other );

    static void convert(const std::string &literal);	

    bool    isChar (std::string const& str);
    bool    isInt (std::string const& str);
    bool    isFloat (std::string const& str);
    bool    isDouble (std::string const& str);

    void    castChar( std::string const& str);
    void    castInt( std::string const& str);
    void    castFloat( std::string const& str);
    void    castDouble( std::string const& str);

    void    convert(std::string const& literal)
    
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
