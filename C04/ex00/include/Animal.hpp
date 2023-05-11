#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

#define CYAN "\033[0;36m"
#define GREEN "\033[0;32m"
#define ORANGE "\033[1;38;5;214m"
#define RED "\033[0;31m"
#define RESET "\033[0m"
#define YELLOW "\033[0;33m"

class Animal {
protected:
    std::string _type;

public:
    //Constructors & destructor
                        Animal( void );
                        Animal (std::string type);
                        Animal(const Animal& other);
    virtual             ~Animal( void );
    //Equal operator
    Animal&             operator=(const Animal& other);

    std::string const&  getType( void ) const;
    virtual void        makeSound( void ) const;
};
#endif
