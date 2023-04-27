
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
private:
	std::string	_type;

public:
	// Constructor
	Weapon( std::string value);

	// Getter and Setter
	std::string	getType( void ) const;
	void		setType( std::string value );
};
#endif
