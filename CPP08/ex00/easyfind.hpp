#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator        easyfind(T& conttainer, int value);


class   ValueNotFound : public std::exception {
public:
    virtual const char*     what() const throw();
};

#include "easyfind.tpp"

#endif
