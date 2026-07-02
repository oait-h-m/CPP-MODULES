#ifndef MutantSTACK_HPP
#define MutantSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        std::stack<T, Container>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

    iterator begin() {
        return this->c.begin();
    }
    iterator end() {
        return this->c.end();
    }

    const_iterator begin() const {
        return this->c.begin();
    }
    const_iterator end() const {
        return this->c.end();
    }

};

#endif
