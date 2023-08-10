#include "../include/Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern::~Intern() {}

Intern  &Intern::operator=(Intern const &other)
{
    (void)other;
    return (*this);
}

AForm    *Intern::makeForm(std::string const &name, std::string const &target)
{
    AForm   *form;

    if (name == "Presidential")
        form = new PresidentialPardonForm(target);
    else if (name == "Robotomy")
        form = new RobotomyRequestForm(target);
    else if (name == "Shrubbery")
        form = new ShrubberyCreationForm(target);
    else
        throw FormNotFoundException();
    std::cout << "Intern creates " << form->getName() << std::endl;
    return (form);
}

const char  *Intern::FormNotFoundException::what() const throw()
{
    return ("Form does not exist.");
}