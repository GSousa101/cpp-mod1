#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main( void ) {
    const Animal* meta = new Animal();
    const Animal* rex = new Dog();
    const Animal* snowball = new Cat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << rex->getType() << " " << std::endl;
    std::cout << snowball->getType() << " " << std::endl;

    meta->makeSound();
    rex->makeSound();
    snowball->makeSound();
    return 0;
}