#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Color.hpp"
# include "Brain.hpp"

class AAnimal {
protected:
    std::string _type;
    Brain*      _brain;

public:
    //Constructors & destructor
                        AAnimal( void );
                        AAnimal (std::string type);
                        AAnimal(const AAnimal& other);
    virtual             ~AAnimal( void );
    AAnimal&             operator=(const AAnimal& other);

    std::string const&  getType( void ) const;
    std::string const&  getIdea( void ) const;
    virtual void        makeSound( void ) const = 0;
};
#endif
