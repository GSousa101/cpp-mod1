#include <iostream>
#include <cctype>

std::string	stringUpper(std::string str)
{
	std::string new_str;

	for (size_t i = 0; i < str.length(); i++)
		new_str += toupper(str[i]);
	return (new_str);
}

int main(int argc, char **argv)
{
  	if (argc > 1)
  	{
		for (int i = 1; i < argc; i++)
			std::cout << stringUpper(argv[i]);
		std::cout << std::endl;
	}
  	else
  		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
}
