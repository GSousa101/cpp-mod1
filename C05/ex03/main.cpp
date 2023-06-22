#include "include/Bureaucrat.hpp"

int main( void )
{
{
	Bureaucrat	Jordan;
	try 
	{
		std::cout << YELLOW << "FIRST TEST" << RESET << std::endl;	
		std::cout << Jordan << std::endl;

	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
{
	Bureaucrat James("James Duck", 3);
	try
	{
		std::cout << std::endl << YELLOW << "SECOND TEST" << RESET << std::endl;
		std::cout << James << std::endl;
	
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// Dar free no estagariano
	return (0);
}
