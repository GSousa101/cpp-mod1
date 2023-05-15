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
		~Fixed( void );

		// Overload operation
		Fixed &		operator=( Fixed const & rhs );

		// Member functions
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_value;
		int static const	fractionalBits;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &other);

#endif
