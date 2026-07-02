#ifndef MutantSTACK_HPP
#define MutantSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
private:

public:
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
    MutantStack& operator=(const MutantStack& other)
    {
        std::stack<T, Container>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

};

#endif
