
#include <iostream>

int	main( void ) {
	std::string	myString = "HI THIS IS BRAIN";
	std::string*	stringPTR = &myString;
	std::string&	stringREF = myString;

	std::cout << "Memory of the string:\t\t\t" << &myString << std::endl;
	std::cout << "Memory of the string by pointer:\t" << stringPTR << std::endl;
	std::cout << "Memory of the string by reference:\t" << &stringREF << std::endl;

	std::cout << "Value of the string:\t\t\t" << myString << std::endl;
	std::cout << "Value of the string by pointer:\t\t" << *stringPTR << std::endl;
	std::cout << "Value of the string by reference:\t" << stringREF << std::endl;
	return (0);
}
