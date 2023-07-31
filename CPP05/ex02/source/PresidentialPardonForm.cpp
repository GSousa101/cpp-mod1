#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	AForm("Presidential", 25, 5)
{ }

PresidentialPardonForm::PresidentialPardonForm( std::string const& target ) :
	AForm("Presidential", 25, 5)
{
	this->target = target;	
}

PresidentialPardonForm::PresidentialPardonForm ( PresidentialPardonForm const& other ) :
	AForm(other)
{
	this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{ }

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const& other )
{
	if (this != &other)
	{
		this->AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

/*
-----------------------------------METHODS-------------------------------------
*/

void            PresidentialPardonForm::action( Bureaucrat const& executor ) const
{
	AForm::execute(executor);
	
    std::cout << this->target << " has been pardoned by the almithy Zaphod Beeblebrox." << std::endl;
}