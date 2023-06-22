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
	
	std::ofstream   outFile((this->target + "_shrubbery").c_str());
	if (!outFile.is_open())
		throw std::ofstream::failure("Error opening file");
	outFile << "              ,@@@@@@@," << std::endl
			<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			<< "       |o|        | |         | |" << std::endl
			<< "       |.|        | |         | |" << std::endl
			<< "    \\/ ._/\\/__/  ,\\_//__\\/\\.  \\_//__/_" << std::endl;
	outFile.close();
}