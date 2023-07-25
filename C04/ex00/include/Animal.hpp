#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Color.hpp"

class Animal {
protected:
    std::string _type;

public:
    //Constructors & destructor
                        Animal( void );
                        Animal (std::string type);
                        Animal(const Animal& other);
    virtual             ~Animal( void );
    Animal&             operator=(const Animal& other);

    std::string const&  getType( void ) const;
    virtual void        makeSound( void ) const;
};
#endif
