#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int main( void )
{
    {
        FragTrap lewis;

        lewis.attack("Max");
        lewis.takeDamage(4);
        lewis.takeDamage(2);
        lewis.takeDamage(1);
        lewis.takeDamage(1);
        lewis.beRepaired(2);
        lewis.attack("Nico");
        lewis.attack("Norrsken");
        lewis.takeDamage(6);
        lewis.takeDamage(6);
        lewis.beRepaired(1);
        lewis.highFivesGuys();
    }
}