#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() { };
        MutantStack(const MutantStack& other) : std::stack<t>(other) { };
        MutantStack &operator=(const MutantStack & other) {
            if (this != *other)
                std::stack<T>:operator=(other);
            return *this;
        };
        virtual ~MutantStack() { };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator            begin( void ) { return this->c.begin(); }
        iterator            end( void ) { return this->c.end(); };
        
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator      begin( void ) const { return this->c.begin(); }
        const_iterator      end( void ) const { return this->c.end(); }
};

#include "MutantStack.tpp"

#endif
