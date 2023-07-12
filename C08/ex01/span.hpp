#ifndef SPAN_HPP
#define SNAP_HPP


class Span {
public:
    Span();
    Span(Span &&);
    Span(const Span &);
    Span &operator=(const Span &);
    ~Span();

private:
    
};

Span::Span() {
}

Span::~Span() {
}

#endif
