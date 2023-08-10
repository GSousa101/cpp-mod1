#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	AForm("Robotomy", 72, 45)
{ }

RobotomyRequestForm::RobotomyRequestForm( std::string const& target ) :
	AForm("Robotomy", 72, 45)
{
	this->target = target;	
}

RobotomyRequestForm::RobotomyRequestForm ( RobotomyRequestForm const& other ) :
	AForm(other)
{
	this->target = other.target;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{ }

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const& other )
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

void            RobotomyRequestForm::action( Bureaucrat const& executor ) const
{
	AForm::execute(executor);
	std::cout << "Brrrrrrrrrzzzzz *drilling noises*" << std::endl;
    std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->target << " has been robotomized successfully!!" << std::endl;
	else
		std::cout << this->target << " is still a simple human." << std::endl;
	std::cout << "Brrrrrrrrrzzzzz *drilling noises*" << std::endl;

}
