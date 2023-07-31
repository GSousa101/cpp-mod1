#include "includes/Character.hpp"
#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << "DESTRUCTORS" << std::endl;
    delete bob;
    delete me;
    delete src;
    return (1);
}