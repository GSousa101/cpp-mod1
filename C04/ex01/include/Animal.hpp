#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Color.hpp"
# include "Brain.hpp"

class Animal {
protected:
    std::string _type;
    Brain*      _brain;

public:
    //Constructors & destructor
                        Animal( void );
                        Animal (std::string type);
                        Animal(const Animal& other);
    virtual             ~Animal( void );
    Animal&             operator=(const Animal& other);

    std::string const&  getType( void ) const;
    std::string const&  getIdea( void ) const;
    void                setIdea( void );
    virtual void        makeSound( void ) const;
};
#endif
