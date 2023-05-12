#include "../include/Brain.hpp"

Brain::Brain( void ) {
    std::cout << GREEN << "A new Brain is born" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << ORANGE << "A new Brain is cloned" << RESET << std::endl;
    *this = other;
}

Brain::~Brain( void ) {
    std::cout << RED << "A Brain died and is rotting" << RESET << std::endl;
}

std::string const&  Brain::getIdea( void ) const {
    srandom(time(0));

    int randomNumber = random() % 100;
    return (this->_ideas[randomNumber]);
}
