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
	eminem1.setFirstName("Tassio");
	eminem1.setNickname("Tata");
	eminem2.setFirstName("Cisto");
	eminem2.setNickname("Tito");
	eminem3.setFirstName("Cleto");
	eminem3.setNickname("Toto");
	eminem4.setFirstName("Cornélio");
	eminem4.setLastName("Cipriano");
	eminem4.setNickname("Abelha");
	std::cout << "My name " << eminem.getFirstName() << std::endl;
	agenda.add(eminem);
	agenda.add(eminem1);
	agenda.add(eminem2);
	agenda.add(eminem3);
	agenda.add(eminem4);
	agenda.search();
	return (0);
}
