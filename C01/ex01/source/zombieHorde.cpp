
#include "../include/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	myHorde;

	myHorde = new Zombie[N];
	while (N--) {
		(myHorde + N)->setName(name);
	}
	return (myHorde);
}
