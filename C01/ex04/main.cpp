
#include "include/sed.hpp"

int	main (int argc, char** argv) {
	if (argc != 4)
	{
		std::cout << "Usage: ./ft_sed <file_name> <string1> <string2>" << std::endl;
		return (1);
	}
		
	Sed	sed(argv[1], argv[2], argv[3]);	
	if (sed.errInput())
		return (1);
	else
		sed.replace();
	return (0);
}
