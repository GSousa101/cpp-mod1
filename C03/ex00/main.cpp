#include "include/ClapTrap.hpp"

int main( void )
{
    {
        ClapTrap dom;

        dom.attack("Moinho de vento");
        dom.takeDamage(4);
        dom.takeDamage(2);
        dom.takeDamage(1);
        dom.takeDamage(1);
        dom.beRepaired(2);
        dom.attack("Robbers");
        dom.attack("inners");
        dom.takeDamage(6);
        dom.takeDamage(6);
        dom.beRepaired(1);
    }
}