
#ifndef CPP_HLEESA_MUTANTSTACK_HPP
#define CPP_HLEESA_MUTANTSTACK_HPP

#include <deque>
#include <stack>

template<class T, class Container =std::deque <T> >
class MutantStack : public std::stack<T, Container> {
public:

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }

    iterator end() { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }

    const_iterator end() const { return this->c.end(); }

};

#endif //CPP_HLEESA_MUTANTSTACK_HPP
