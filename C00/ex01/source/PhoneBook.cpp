#include <iostream>
#include "../include/PhoneBook.hpp"
#include  <iomanip>

PhoneBook::PhoneBook( void ) : totalContacts(0) {
	std::cout << "Constructor from phoneBook called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructur from phoneBook called" << std::endl;
}

void	PhoneBook::add( void ) {
//	this->listContacts[totalContacts] = newContact;
	//Contact::setFirstName(std::cin >>);
	this->totalContacts++;
	if (this->totalContacts == 7)
		this->totalContacts = 0;
}

void	PhoneBook::printHeader(void) {
	std::cout << std::endl;
	std::cout << std::setw(10) << std::left << "INDEX" << "|";
	std::cout << std::setw(10) << std::left << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::left << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::left << "NICKNAME" << std::endl;
}

void	PhoneBook::search( void ) {
	int	choice;

	PhoneBook::printHeader();
	for (int i = 0; i < this->totalContacts; i++)
	{
		std::cout << std::setw(10) << std::left << i + 1 << " | "	\
		<< std::setw(10) <<  std::left << this->listContacts[i].getFirstName() << " | "	\
		<< std::setw(10) <<  std::left << this->listContacts[i].getLastName() << " | "		\
		<< std::setw(10) <<  std::left << this->listContacts[i].getNickname() << std::endl;
	}
	std::cout << "type a number to chosse a contact" << std::endl;
	std::cin >> choice;
	if (std::isdigit(choice) && choice > 0 && choice <= this->totalContacts)
	{
		std::cout << std::setw(10) << this->listContacts[choice - 1].getFirstName() << " | "	\
		<< std::setw(10) << this->listContacts[choice - 1].getLastName() << " | "		\
		<< std::setw(10) << this->listContacts[choice - 1].getNickname() << std::endl;
	}
}

