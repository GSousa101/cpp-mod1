
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {
private:
	std::string _name;

public:
	~Zombie( void );
	void		setName( std::string );
	std::string	getName( void );
	void		announce( void );
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );

#endif
