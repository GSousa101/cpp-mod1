#ifndef SPAN_HPP
#define SNAP_HPP


class Span {
public:
    Span();
    Span(int lenght);
    Span(const Span &);
    Span &operator=(const Span &);
    ~Span();

    // Member function
    void    addNumber( int nbr );
    void    addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan( void );
    int     longestSpan( void );

private:
    int                 _lenght;
    std::vector<int>    _myVector;
    

    class   MaxLenghtReached : public std::exception {
        public:
            virtual const char*     what() const throw();
    }
};

#endif
