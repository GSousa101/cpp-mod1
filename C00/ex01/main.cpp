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
	eminem.setNickname("SlimShady");
	eminem1.setFirstName("Eminem");
	eminem1.setNickname("SlimShady");
	eminem2.setFirstName("Eminem");
	eminem2.setNickname("SlimShady");
	eminem3.setFirstName("Eminem");
	eminem3.setNickname("SlimShady");
	eminem4.setFirstName("Eminem");
	eminem4.setNickname("SlimShady");
	std::cout << "My name " << eminem.getFirstName() << std::endl;
	agenda.add(eminem);
	agenda.add(eminem1);
	agenda.add(eminem2);
	agenda.add(eminem3);
	agenda.add(eminem4);
	agenda.search();
	return (0);
}
