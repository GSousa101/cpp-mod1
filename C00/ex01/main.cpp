#include <iostream>
#include "include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	agenda;
	std::string	input;

	while (42) {
		std::cout << "Welcome to the agenda" << std::endl;
		std::cout << "Choose what you want: ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			agenda.add();
		else if (input == "SEARCH")
			agenda.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid input. Be cautious and try again" << std::endl;
	}
	return (0);
}
