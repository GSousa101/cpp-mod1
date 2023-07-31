#include "include/AAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main( void ) {
    {
        std::cout << "______Creating______" << std::endl;
        //;AAnimal myAnimal;
        Dog toto;
        Dog rex = toto;
        Cat snowWhite;

        //myAnimal.makeSound();
        toto.makeSound();
        rex.makeSound();
        snowWhite.makeSound();
        std::cout << std::endl << "______Creating______" << std::endl;
    }
    return 0;
}