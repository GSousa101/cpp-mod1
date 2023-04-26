
#include "include/Weapon.hpp"

int	main( void ) {
	Weapon	machado;

	machado.setType("fio de cortar");
	std::cout << machado.getType() << std::endl;
	return (0);
}
