#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {
    public:
                Array<T>( void );
                Array<T>( size_t size);
                Array<T>( Array const& other);
        virtual ~Array<T>( void );

        Array   &operator=(Array<T> const& other);
        T       &operator[](Array<T> const& other);

        size_t  size( void ) const;

        class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what( void ) const throw();
        };

    private:
        size_t  _lenght;
        T       *_elements;
        
};

#endif
