
#include "include/Weapon.hpp"
#include "include/HumanA.hpp"

int	main( void ) {
	Weapon	machado;
	HumanA	alfonso(machado);

	machado.setType("fio de cortar");
	std::cout << machado.getType() << std::endl;
	
	alfonso.attack();
	return (0);
}
