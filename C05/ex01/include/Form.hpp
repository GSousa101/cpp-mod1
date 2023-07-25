#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Color.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		// Canonical Form
					Form( void );
					Form( std::string newName, int gradeToSign, int gradeToExec);
					Form( Form const& other );
		virtual		~Form();
		Form&		operator=( Form const& other );

		// Getters
		std::string		getName( void ) const;
		bool			getIsSigned( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExec( void ) const;

		// Member functions
		void			beSigned(Bureaucrat const& bureaucrat);

		// Exceptions
		class		GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				virtual const char* what() const throw();
			private:
				const char* _message;
		};

		class		GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				virtual const char* what() const throw();
			private:
				const char* _message;
		};

		class		FormIsAlreadySignedException : public std::exception {
			public:
				FormIsAlreadySignedException();
				virtual const char* what() const throw();
			private:
				const char* _message;
		};


	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExec;		

};

// Global Operator Overload
std::ostream&			operator<<( std::ostream& o, Form const& form );

#endif