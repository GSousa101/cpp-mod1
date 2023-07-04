#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    public:
                Array( void );
                Array( size_t size);
                Array( Array const& other);
        virtual ~Array( void );

        Array   &operator=(Array const& other);
        T const &operator[](Array const& other);

        size_t  size( void ) const;

        class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what( void ) const throw();
        };

    private:
        size_t _lenght;
        T       *_elements;
        
};

#endif
