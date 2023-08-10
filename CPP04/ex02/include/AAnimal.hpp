#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Color.hpp"
# include "Brain.hpp"

class AAnimal {
protected:
    std::string _type;

public:
    //Constructors & destructor
                        AAnimal( void );
                        AAnimal (std::string type);
                        AAnimal(const AAnimal& other);
    virtual             ~AAnimal( void );
    AAnimal&             operator=(const AAnimal& other);

    std::string const&  getType( void ) const;
    virtual void        makeSound( void ) const = 0;
};
#endif
