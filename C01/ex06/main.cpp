#include "include/Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <complain>" << std::endl;
		return ( 1 );
	}
	Harl harl;

	std::string complain(argv[1]);
	harl.complain(complain);
	return 0;
}
