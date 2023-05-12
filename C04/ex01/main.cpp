#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int main( void ) {
    {
        std::cout << "______Creating______" << std::endl;
        Animal* animals[6];
        for (int i = 0; i < 6; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        std::cout << std::endl << "______Testing______" << std::endl;
        for (int i = 0; i < 6; i++)
        {
            std::cout << animals[i]->getType() << " -> " << animals[i]->getIdea() << std::endl;
        }

        std::cout << std::endl << "______DESTRUCTORS______" << std::endl;
        for (int i = 0; i < 6; i++)
        {
            delete animals[i];
        }
    }
    {
        std::cout << std::endl << "______DEEP COPY______" << std::endl;
        Dog toto;
        Dog rex = toto;

        toto.makeSound();
        rex.makeSound();
    }
    return 0;
}