#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class   Intern
{
	public:
				Intern( void );
				Intern(Intern const &other);
		virtual	~Intern();
		Intern  &operator=(Intern const &other);

		AForm    *makeForm(std::string const &name, std::string const &target);

		class   FormNotFoundException : public std::exception
		{
			public:
				virtual const char  *what() const throw();
		};
};

#endif