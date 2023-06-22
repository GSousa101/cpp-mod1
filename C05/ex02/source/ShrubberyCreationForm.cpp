#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	AForm("Shrubeery", 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm( std::string const& target ) :
	AForm("Shrubbery", 145, 137)
{
	this->target = target;	
}

ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const& other ) :
	AForm(other)
{
	this->target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{ }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const& other )
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

void            ShrubberyCreationForm::action( Bureaucrat const& executor ) const
{
	AForm::execute(executor);
	
	std::ofstream   outFile(this->target + "_shrubbery");
	if (!outFile.is_open())
		throw std::ofstream::failure("Error opening file");
	outFile << "outFile << " << "              ,@@@@@@@," << std::endl
			<< "outFile << " << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			<< "outFile << " << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			<< "outFile << " << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "outFile << " << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "outFile << " << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			<< "outFile << " << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			<< "outFile << " << "       |o|        | |         | |" << std::endl
			<< "outFile << " << "       |.|        | |         | |" << std::endl
			<< "outFile << " << "    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std::endl;
	outFile.close();
}