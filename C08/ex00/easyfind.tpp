#include "easyfind.hpp"


const char*     ValueNotFound::what() const throw() {
    return("Value not found in container");
}

template <typename T>
typename T::iterator        easyfind( T& conttainer, int value)
{
    typename T::iterator found = find(conttainer.begin(), conttainer.end(), value);
    if (found == conttainer.end())
        throw ValueNotFound();
    return (found);
}
