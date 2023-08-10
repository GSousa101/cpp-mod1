#include "../include/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm( void ) :
	_name("Indefined AForm"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExec(150)
{ }

AForm::AForm( std::string newName, int gradeToSign, int gradeToExecute ) :
	_name(newName),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw(AForm::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw(AForm::GradeTooLowException());
	this->_isSigned = false;
}

AForm::AForm( AForm const& other) :
	_name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExec(other._gradeToExec)
{ }

AForm::~AForm() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
AForm    &AForm::operator=( AForm const& other)
{
	(void) other;
	std::cout << "It's not possible to make a copy because the attributes are constantes. Create a new instance with the copy constructor." << std::endl;
	return *this;
}

/*
** --------------------------------- GETTERS ----------------------------------
*/
std::string		AForm::getName( void ) const
{
	return this->_name;
}

bool			 AForm::getIsSigned( void ) const
{
	return this->_isSigned;
}

int				AForm::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int				AForm::getGradeToExec( void ) const
{
	return this->_gradeToExec;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void			AForm::beSigned( Bureaucrat const& bureaucrat )
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw(AForm::GradeTooLowException());
	if (this->getIsSigned())
		throw(AForm::FormIsAlreadySignedException());
	this->_isSigned = true;
}

void			AForm::execute( Bureaucrat const& executor ) const
{
	if (!this->getIsSigned())
		throw(AForm::NotPermittedToExecuteException());
	if (executor.getGrade() > this->getGradeToExec())
		throw(AForm::GradeTooLowException());
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

AForm::GradeTooLowException::GradeTooLowException() :
	 _message("Grade too low.")
{ }

const char* AForm::GradeTooLowException::what() const throw() {
    return _message;
}

AForm::GradeTooHighException::GradeTooHighException() :
	_message("Grade too high.")
{ }

const char* AForm::GradeTooHighException::what() const throw() {
    return _message;
}

AForm::FormIsAlreadySignedException::FormIsAlreadySignedException() :
	_message("AForm is already signed.")
{ }

const char* AForm::FormIsAlreadySignedException::what() const throw() {
    return _message;
}

AForm::NotPermittedToExecuteException::NotPermittedToExecuteException() :
	_message("Form is not signed to be executed.")
{ }

const char*	AForm::NotPermittedToExecuteException::what() const throw()
{
	return (_message);
}

/*
** -----------------------------GLOBAL OVERLOAD ---------------------------------
*/
std::ostream&	operator<<( std::ostream& o, AForm const& AForm)
{
	o << "AForm name:\t " << YELLOW << AForm.getName() << RESET << "." << std::endl;
	o << "signed:\t\t " << YELLOW << AForm.getIsSigned() << "." << RESET << std::endl;
	o << "Grande to sign:\t " << YELLOW << AForm.getGradeToSign() << "." << RESET << std::endl;
	o << "Grade to execute: " << YELLOW << AForm.getGradeToExec() << "." << RESET << std::endl;
	return o;
}
