#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:
		// Constructions & destructor
		Fixed( void );
		Fixed( Fixed const& src );
		Fixed( int const value );
		Fixed( float const value);
		~Fixed( void );

		// Overload operation
		Fixed &		operator=( Fixed const & rhs );

		// Member functions
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		int					_value;
		int static const	_fractionalBits;
};

std::ostream &operator<<(std::ostream &stream, Fixed const& obj);

#endif
