
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
private:
	std::string	_type;

public:
	Weapon( std::string value);
	std::string&	getType( void );
	void		setType( std::string value );
};
#endif
