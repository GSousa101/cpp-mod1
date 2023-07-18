#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "------- FIRST TEST --------" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);

        //[...]

        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << "------- SECOND TEST --------" << std::endl;
        MutantStack<int> mutantStack;
        mutantStack.push( 144 );
        mutantStack.push( 89 );
        mutantStack.push( 10 );
        mutantStack.push( 90 );
        mutantStack.push( 11 );
        std::cout << "First: " << *(mutantStack.begin()) << std::endl;

        while (!mutantStack.empty()) {
            std::cout << "Last: " << *(mutantStack.end() - 1) << std::endl;
            mutantStack.pop();
        }
    }
    return (0);
}
