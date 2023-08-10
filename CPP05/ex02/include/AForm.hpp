#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Color.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:
		// Canonical form
					AForm( void );
					AForm( std::string newName, int gradeToSign, int gradeToExec);
					AForm( AForm const& other );
		virtual		~AForm();
		AForm&		operator=( AForm const& other );

		// Getters
		std::string		getName( void ) const;
		bool			getIsSigned( void ) const;
		int				getGradeToSign( void ) const;
		int				getGradeToExec( void ) const;

		// Member functions
		void			beSigned(Bureaucrat const& bureaucrat);
		void			execute( Bureaucrat const& executor ) const;
		virtual void	action( Bureaucrat const& executor ) const = 0;

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

		class		NotPermittedToExecuteException : public std::exception {
			public:
				NotPermittedToExecuteException();
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
std::ostream&			operator<<( std::ostream& o, AForm const& AForm );

#endif