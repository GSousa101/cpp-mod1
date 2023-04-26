
#include "include/Zombie.hpp"

int	main( void ) {

	Zombie* john;
	Zombie* jack;

	john = zombieHorde(4, "john");
	jack = zombieHorde(30, "jack");
	for (int i = 0; i < 4; i++)
		john[i].announce();
	for (int i = 0; i < 30; i++ 
		jack[i].announce();
	delete[] john;
	delete[] jack;
	return (0);
}
