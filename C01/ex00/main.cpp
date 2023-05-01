
#include "include/Zombie.hpp"

int	main( void ) {

	Zombie* aquiles;

	aquiles = newZombie("Aquiles");
	randomChump("Icaro");
	aquiles->announce();
	delete aquiles;
	return (0);
}
