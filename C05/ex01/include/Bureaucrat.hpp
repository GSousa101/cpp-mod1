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
						Bureaucrat( std::string newName, int grade);
						Bureaucrat( Bureaucrat const& other );
		virtual			~Bureaucrat();

		// Operator Overload
		Bureaucrat&		operator=( Bureaucrat const& other );

		// Getters
		std::string		getName( void ) const;
		int				getGrade( void ) const;

		// Member functions
		void			incrementGrade( void );
		void			decrementGrade( void );
		void			signForm(Form& form);

		// Exceptions
		class GradeTooLowException : public std::exception {
			public:
				virtual const char*		what( void ) const throw();
		};

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*		what( void ) const throw();
		};

	private:
		std::string		_name;
		int				_grade;

};

// Global Operator Overload
std::ostream&			operator<<( std::ostream& o, Bureaucrat const& person );

#endif