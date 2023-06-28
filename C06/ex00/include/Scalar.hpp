#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{

	public:
		~Scalar( void );

	private:
		Scalar( void );
		Scalar( Scalar const & src );
		Scalar &		operator=( Scalar const & other );

    static void convert(const std::string &literal);	

    bool    isChar (std::string const& str);
    bool    isInt (std::string const& str);
    bool    isFloat (std::string const& str);
    bool    isDouble (std::string const& str);



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
