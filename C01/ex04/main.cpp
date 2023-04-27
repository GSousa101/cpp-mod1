
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

int	errFile(std::string infile, std::string s1, std::string s2) {
if (!infile.is_open()) {
    std::cout << "Unable to read file" << std::endl;
  }
  if (infile.peek() == std::ifstream::traits_type::eof()) {
    std::cout << "File is empty" << std::endl;
  }
  if (!s1.size() || !s2.size()) {
    std:cout << "Strings cannot be empty" << std::endl;
  }
	return (0);
}

int	main (int argc, char** argv) {
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (argc != 4)
		std::cout << "Usage: ./ft_sed <file_name> <string1> <string2>" << std::endl;
	else
	{
		std::ifstream	infile(filename);
		std::ofstream outfile(filename + ".replace");
		std::string	line;
		if (ErrFile(infile, s1, s2))
			return (1);

		while (std::getline(infile, line))
			replaceLine(line, s1, s2);

			infile.close();
  			outfile.close();
	}
	return (0);
}
