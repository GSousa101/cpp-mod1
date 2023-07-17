#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack {
public:
    MutantStack();
    MutantStack(const MutantStack &);
    MutantStack &operator=(const MutantStack &);
    virtual ~MutantStack();

private:
    
};

#endif
