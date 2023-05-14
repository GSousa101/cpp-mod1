#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "../interfaces/ICharacter.hpp"

class AMateria {

    public:
        // Constructors and Destructors
        virtual     AMateria( void );
                    AMateria(std::string const& type);
                    AMateria(const AMateria& other);
        virtual     ~AMateria( void );
        AMateria&   operator=(const AMateria& other);

        // Getters
        std::string const&  getType() const;

        // Member Functions
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);

    protected:
        std::string _type;
};

#endif