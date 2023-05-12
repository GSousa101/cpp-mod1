#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "AWrongAnimal.hpp"

class WrongCat : public AWrongAnimal {
public:
                WrongCat( void );
                WrongCat(const WrongCat& other);
                ~WrongCat( void );
    WrongCat&   operator=(const WrongCat& other);

    void        makeWrongSound( void ) const;
};

#endif
