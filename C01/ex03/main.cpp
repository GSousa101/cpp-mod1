
#include "include/Weapon.hpp"
#include "include/HumanA.hpp"

int	main( void ) {
		{
				Weapon club = Weapon("crude spiked club");
				HumanA bob("Bob", club);
				bob.attack();
				club.setType("some other type of club");
				bob.attack();
		}
		{
				Weapon club = Weapon("crude spiked club");
				HumanB jim("Jim");
				jim.setWeapon(club);
				jim.attack();
				club.setType("some other type of club");
				jim.attack();
		}
	Weapon	machado;

	machado.setType("fio de cortar");
	std::cout << machado.getType() << std::endl;
	
	HumanA	alfonso("Alfonso", machado);
	alfonso.attack();
	return (0);
}
