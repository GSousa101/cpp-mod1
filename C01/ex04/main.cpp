
#include <iostream>
#include <fstream>

void	replaceLine(std::string line, std::string s1, std::string s2) {
	int	beginIndex;

(void)s2;
	beginIndex = line.find(s1);
	while (beginIndex != -1)
	{

		std::cout << line << beginIndex << std::endl;
		beginIndex = line.find(s1);

	}
}
int	main (int argc, char** argv) {
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (argc != 4)
		std::cout << "Usage: ./ft_sed <file_name> <string1> <string2>" << std::endl;
	else
	{
		std::ifstream	infile(argv[1]);
		std::string	line;
		//deal_error file.

		while (std::getline(infile, line))
			replaceLine(line, s1, s2);
			std::cout << line << std::endl;
	}
	return (0);
}
