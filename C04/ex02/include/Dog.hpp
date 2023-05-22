#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
public:
            Dog( void );
            Dog(const Dog& other);
            ~Dog( void );
    Dog&    operator=(const Dog& other);

    void    makeSound( void ) const;
    std::string const&  getIdea( void ) const;

    protected:
        Brain* _brain;
};

#endif
