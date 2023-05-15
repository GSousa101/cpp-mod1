#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Color.hpp"
#include <cstdlib> // for srandom() and random()


class Brain {
private:
    std::string _ideas[100];

public:
    //Constructors & destructor
                        Brain( void );
                        Brain(const Brain& other);
    virtual             ~Brain( void );
    Brain&              operator=(Brain const& other);

    std::string const&  getIdea( void ) const;
    void                setIdea( void );
};
#endif