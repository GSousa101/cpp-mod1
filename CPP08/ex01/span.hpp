#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <limits>

class Span {
public:
    Span();
    Span(int lenght);
    Span(const Span & other);
    Span &operator=(const Span & other);
    virtual ~Span();

    // Member function
    void    addNumber( int nbr );
    void    addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan( void );
    int     longestSpan( void );

private:
    unsigned int                 _lenght;
    std::vector<int>    _myVector;
    

    class   MaxLenghtReached : public std::exception {
        public:
            virtual const char*     what() const throw();
    };
    class   notEnoughNumbers : public std::exception {
        public:
            virtual const char*     what() const throw();
    };
};

#endif
