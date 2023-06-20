#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Color.hpp"

class Bureaucrat
{

	public:
		// Canonical Form
				Bureaucrat( void );
				Bureaucrat( std::string newName);
				Bureaucrat( Bureaucrat const& other );
		virtual	~Bureaucrat();

		// Operator Overload
		Bureaucrat&		operator=( Bureaucrat const& other );

		// Getters and Setters
		std::string		getName( void ) const;
		void			setName( std::string newName );
		int				getGrade( void ) const;
		void			setGrade( int newGrade );

		// Member functions
		void			incrementGrade( void );
		void			decrementGrade( void );

		// Exceptions
		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

	private:
		std::string		_name;
		int				_grade;

};

#endif