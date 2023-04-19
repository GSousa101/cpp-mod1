
#ifndef PHONEBOOK_H
# define PHONEBOOK_H


class Contact {
	private:

	public:
		std::string	name;
		str::string	phoneNumber;
};

class PhoneBook {
	private:
		Contact	contacs[8];
		int	numContacts;
		int	oldestContactIndex = 0;
};

#endif
