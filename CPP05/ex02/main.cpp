#include "include/Bureaucrat.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"

int main( void )
{
{
	try 
	{
		std::cout << YELLOW << "FIRST TEST" << RESET << std::endl;	

        Bureaucrat	Jordan("Jordan", 70);
		std::cout << Jordan << std::endl;
        ShrubberyCreationForm   form1("new bridge");
        RobotomyRequestForm     form2("mechanical layer bridge");
        PresidentialPardonForm  form3("acident safer");

        Jordan.executeForm(form1);
        Jordan.signForm(form2);
        Jordan.executeForm(form2);
        Jordan.executeForm(form3);


	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
{
	try
	{
		std::cout << std::endl << YELLOW << "SECOND TEST" << RESET << std::endl;
            
        Bureaucrat James("James Duck", 3);
		std::cout << James << std::endl;
        ShrubberyCreationForm   form1("new bridge");
        RobotomyRequestForm     form2("mechanical layer bridge");
        PresidentialPardonForm  form3("acident safer");

        James.executeForm(form1);
        James.signForm(form1);
        James.executeForm(form1);
        James.signForm(form2);
        James.executeForm(form2);
        James.signForm(form3);
        James.executeForm(form3);
	
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
	return (0);
}
