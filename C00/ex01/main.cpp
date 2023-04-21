#include <iostream>
#include "include/PhoneBook.hpp"

int	main(void)
{
	Contact		eminem;
	Contact		eminem1;
	Contact		eminem2;
	Contact		eminem3;
	Contact		eminem4;
	PhoneBook	agenda;

	eminem.setFirstName("Eminem");
	/*
	eminem.setNickname("SlimShady");
	eminem1.setFirstName("Agueda");
	eminem1.setNickname("Luzia");
	eminem2.setFirstName("Cisto");
	eminem2.setNickname("Andre");
	eminem3.setFirstName("Cleto");
	eminem3.setNickname("Ines");
	eminem4.setFirstName("Cornelio");
	eminem4.setLastName("Cipriano");
	eminem4.setNickname("Anastasia");
	*/
	agenda.add();
	agenda.search();
	return (0);
}
