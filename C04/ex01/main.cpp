#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int main( void ) {
    std::cout << "______Creating______" << std::endl;
    const Animal[10];
    for (int i = 0, i < 10, i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << std::endl << "______Testing______" << std::endl;
    std::cout << toto->getIdea() << std::endl;
    std::cout << snowWhite->getIdea() << std::endl;

    std::cout << std::endl << "______DESTRUCTORS______" << std::endl;
    delete toto;
    delete snowWhite;

    return 0;
}