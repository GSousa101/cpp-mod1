#include <iostream>
#include "../include/PhoneBook.hpp"
#include  <iomanip>

PhoneBook::PhoneBook( void ) {
	totalContacts = 0;
	std::cout << "Constructor from phoneBook called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructur from phoneBook called" << std::endl;
}

void	PhoneBook::add( Contact newContact) {
	this->listContacts[totalContacts] = newContact;
	this->totalContacts++;
	if (this->totalContacts == 7)
		this->totalContacts = 0;
}

void	PhoneBook::search( void ) {
	//print columns
	// Cin
	// print index
	for (int i = 0; i < this->totalContacts; i++)
	{
		std::cout << i + 1 << " | "	\
		<< std::setw(10) << this->listContacts[i].getFirstName() << " | "	\
		<< std::setw(10) << this->listContacts[i].getLastName() << " | "		\
		<< std::setw(10) << this->listContacts[i].getNickname() << std::endl;
	}
}

