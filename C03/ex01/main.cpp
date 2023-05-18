#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

int main( void )
{
    {
        ScavTrap jack;

        jack.attack("Black beard");
        jack.takeDamage(4);
        jack.takeDamage(2);
        jack.takeDamage(1);
        jack.takeDamage(1);
        jack.beRepaired(2);
        jack.attack("Red beard");
        jack.attack("Will Turner");
        jack.takeDamage(6);
        jack.takeDamage(6);
        jack.beRepaired(1);
        jack.guardGate();
    }
}