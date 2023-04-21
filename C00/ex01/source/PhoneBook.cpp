#include <iostream>
#include "../include/PhoneBook.hpp"
#include  <iomanip>
#include <cctype>

PhoneBook::PhoneBook( void ) : totalContacts(0) {
	std::cout << "Constructor from phoneBook called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructur from phoneBook called" << std::endl;
}

void	PhoneBook::add( void ) {
	 std::string input;

	while (input.empty()) {
		std::cout << "You chose to add someone in the agenda\nEnter the first name: ";
		std::getline(std::cin, input);
		this->listContacts[totalContacts].setFirstName(input);
	}
	input.clear();
	while (input.empty()) {
		std::cout << "Enter the last name: ";
		std::getline(std::cin, input);
		this->listContacts[totalContacts].setLastName(input);
	}
	input.clear();
	while (input.empty()) {
		input.clear();
		std::cout << "Enter the nickame: ";
		std::getline(std::cin, input);
		this->listContacts[totalContacts].setNickname(input);
	}
	input.clear();
	while (input.empty()) {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, input);
		this->listContacts[totalContacts].setPhoneNumber(input);
	}
	input.clear();
	while (input.empty()) {
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, input);
		this->listContacts[totalContacts].setDarkestSecret(input);
	}
	this->totalContacts++;
	if (this->totalContacts == 8)
		this->totalContacts = 0;
}

void	printHeader(void) {
	std::cout << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << std::endl;
}

void	PhoneBook::search( void ) {
	int	choice;

	printHeader();
	for (int i = 0; i < this->totalContacts; i++)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		std::cout << std::setw(10) << std::right << this->listContacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << std::right << this->listContacts[i].getLastName() << "|";
		std::cout << std::setw(10) << std::right << this->listContacts[i].getNickname() << std::endl;
	}
	std::cout << "type a number to choose a contact" << std::endl;
	std::cin >> choice;
	if (choice > 0 && choice <= this->totalContacts)
	{
		std::cout << std::setw(10) <<  std::right << this->listContacts[choice - 1].getFirstName() << "|";
		std::cout << std::setw(10) <<  std::right << this->listContacts[choice - 1].getLastName() << "|";
		std::cout << std::setw(10) <<  std::right << this->listContacts[choice - 1].getNickname() << "|";
		std::cout << std::setw(10) <<  std::right << this->listContacts[choice - 1].getPhoneNumber() << "|";
		std::cout << std::setw(10) <<  std::right << this->listContacts[choice - 1].getDarkestSecret() << std::endl;
	}
}

