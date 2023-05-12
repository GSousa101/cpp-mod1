#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Color.hpp"
#include <cstdlib> // for srandom() and random()


class Brain {
private:
    std::string static _ideas[100];


public:
    //Constructors & destructor
                        Brain( void );
                        Brain(const Brain& other);
    virtual             ~Brain( void );

    std::string const&  getIdea( void ) const;
};
#endif