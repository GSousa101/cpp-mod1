
#include "easyfind.hpp"

template <typename T>
typename T::iterator        easyfind( T& conttainer, int& value)
{
    typename T:iterator found = find(conttainer.begin, conttainer.end, value))
    if (found == conttainer.end)
        throw ValueNotfound();
    return (found);
}

const char*     ValueNotfound::what() const throw() {
    return("Value not found in container");
}
