
#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator        easyfind(T& conttainer, int& value);


class   ValueNotFound :: std:exception {
public:
    const char*     what() const throw();
}  
