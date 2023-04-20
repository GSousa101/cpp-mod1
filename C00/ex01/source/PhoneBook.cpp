#include <iostream>
#include "../include/PhoneBook.hpp"
#include  <iomanip>

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
		std::cout << std::setw(10) << i << " | "	\
			<< this->listContacts[0].getFirstName() << " | "	\
			<< this->listContacts[0].getLastName() << " | "		\
			<< this->listContacts[0].getNickname() << std::endl;
	}
}

