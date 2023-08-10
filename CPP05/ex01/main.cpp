#include "include/Bureaucrat.hpp"

int main( void )
{
{
	Bureaucrat	Jordan;
	Form		report("Report", 97, 70);
	try 
	{
		std::cout << YELLOW << "FIRST TEST" << RESET << std::endl;	
		std::cout << Jordan << std::endl;
		std::cout << report << std::endl;
		Jordan.signForm(report);
		std::cout << report << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
{
	Bureaucrat James("James Duck", 3);
	Form		schedule("Schedule", 20, 10);
	try
	{
		std::cout << std::endl << YELLOW << "SECOND TEST" << RESET << std::endl;
		std::cout << James << std::endl;
		std::cout << schedule << std::endl;
		James.signForm(schedule);
		std::cout << schedule << std::endl;
		James.signForm(schedule);
		std::cout << schedule << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
	return (0);
}
