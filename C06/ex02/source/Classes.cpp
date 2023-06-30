#include "../include/Classes.hpp"

Base::~Base(void)
{ }

void    printMessage(std::string str)
{
    std::cout << str << std::endl;
}

Base*   generate( void )
{
    std::srand(std::time(0));
    int randomNum = rand() % 3;

    switch (randomNum)
    {
        case 0:
            return (printMessage("Generate class A"), new A());
        case 1:
            return (printMessage("Generate class B"), new B());
        case 2:
            return (printMessage("Generate class C"), new C());
    }
    return NULL;

}

void    indentify( Base& p)
{
    if (dynamic_cast<A*>(&p) != NULL)
        return printMessage("Identify by ref: A class");
    if (dynamic_cast<B*>(&p) != NULL)
        return printMessage("Identify by ref: B class");
    if (dynamic_cast<C*>(&p) != NULL)
        return printMessage("Identify by ref: C class");

}

void    identify( Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        return printMessage("Identify by pointer: A class");
    if (dynamic_cast<B*>(p) != NULL)
        return printMessage("Identify by pointer: B class");
    if (dynamic_cast<C*>(p) != NULL)
        return printMessage("Identify by pointer: C class");
}

