#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
public:
    Dog( void );
    Dog(const Dog& other);
    ~Dog( void );

    Dog& operator=(const Dog& other);

    void    makeSound( void ) const;
};

#endif
