#include "../include/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( void ) :
	_name("Indefined form"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExec(150)
{ }

Form::Form( std::string newName, int gradeToSign, int gradeToExecute ) :
	_name(newName),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw(Form::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw(Form::GradeTooLowException());
	this->_isSigned = false;
}

Form::Form( Form const& other) :
	_name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExec(other._gradeToExec)
{ }

Form::~Form() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Form    &Form::operator=( Form const& other)
{
	(void) other;
	std::cout << "It's not possible to make a copy because the attributes are constantes. Create a new instance with the copy constructor." << std::endl;
	return *this;
}

/*
** --------------------------------- GETTERS ----------------------------------
*/
std::string		Form::getName( void ) const
{
	return this->_name;
}

bool			 Form::getIsSigned( void ) const
{
	return this->_isSigned;
}

int				Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int				Form::getGradeToExec( void ) const
{
	return this->_gradeToExec;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void			Form::beSigned( Bureaucrat const& bureaucrat )
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw(Form::GradeTooLowException());
	if (this->getIsSigned())
		throw(Form::FormIsAlreadySignedException());
	this->_isSigned = true;
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

Form::GradeTooLowException::GradeTooLowException() : _message("Grade too low.")
{ }

const char* Form::GradeTooLowException::what() const throw() {
    return _message;
}

Form::GradeTooHighException::GradeTooHighException() : _message("Grade too high.")
{ }

const char* Form::GradeTooHighException::what() const throw() {
    return _message;
}

Form::FormIsAlreadySignedException::FormIsAlreadySignedException() : _message("Form is already signed.")
{ }

const char* Form::FormIsAlreadySignedException::what() const throw() {
    return _message;
}


/*
** -----------------------------GLOBAL OVERLOAD ---------------------------------
*/
std::ostream&	operator<<( std::ostream& o, Form const& form)
{
	o << "Form name:\t " << YELLOW << form.getName() << RESET << "." << std::endl;
	o << "signed:\t\t " << YELLOW << form.getIsSigned() << "." << RESET << std::endl;
	o << "Grande to sign:\t " << YELLOW << form.getGradeToSign() << "." << RESET << std::endl;
	o << "Grade to execute: " << YELLOW << form.getGradeToExec() << "." << RESET << std::endl;
	return o;
}