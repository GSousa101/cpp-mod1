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
		Fixed&		operator=( Fixed const& other );

		bool		operator>( Fixed const& other ) const;
		bool		operator<( Fixed const& other ) const;
		bool		operator>=( Fixed const& other ) const;
		bool		operator<=( Fixed const& other ) const;
		bool		operator==( Fixed const& other ) const;
		bool		operator!=( Fixed const& other ) const;

		Fixed&		operator+( Fixed const& other );
		Fixed&		operator-( Fixed const& other );
		Fixed&		operator*( Fixed const& other );
		Fixed&		operator/( Fixed const& other );
		
		Fixed&		operator++( void );
		Fixed&		operator--( void );
		Fixed		operator++( int );
		Fixed		operator--( int );

		// Member functions
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		int			toInt( void ) const;
		float		toFloat( void ) const;

		// static member functions
		static const Fixed& max(Fixed const& first, const Fixed& second);
		static Fixed&		max(Fixed& first, Fixed& second);
		static const Fixed&	min(Fixed const& first, const Fixed& second);
		static Fixed&		min(Fixed& first, Fixed& second);

	private:
		int					_value;
		int static const	_fractionalBits;
};

std::ostream &operator<<(std::ostream &stream, Fixed const& obj);

#endif
