
#include "include/Zombie.hpp"

int	main( void ) {

	Zombie* cifilis;

	cifilis = newZombie("Cifilis");
	randomChump("Icaro");
	cifilis->announce();
	delete cifilis;
	return (0);
}
