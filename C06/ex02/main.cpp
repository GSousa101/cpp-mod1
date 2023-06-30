#include "include/Classes.hpp"

int main( void )
{
    Base*   ptr = generate();
    Base*   ptr2 = generate();
    Base&   ref = *ptr2;

    identify(ptr);
    identify(ptr2);
    identify(ref);
    delete ptr;
    delete ptr2;

    return (0);
}
