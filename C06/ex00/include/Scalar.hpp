#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{

	public:
		Scalar &		operator=( Scalar const & other );

	private:
		Scalar();
		Scalar( Scalar const & src );
		~Scalar();

	

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