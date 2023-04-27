
#include <iostream>
#include <fstream>

int	main (int argc, char** argv) {
	std:string	s1 = argv[2];
	std:string	s2 = argv[3];

	if (argc != 4)
		std::cout << "Usage: ./ft_sed <file_name> <string1> <string2>" << std::endl;
	else
	{
		std::ifstream	infile(argv[1]);
		std::string	line;

		std::getline(infile, line);

		//deal_error file.
		//replace for new string
		//	Find
		//	substitute


	}
	return (0);
}
