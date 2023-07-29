
#include "MutantStack.hpp"
#include <iostream>
#include <list>

void test0() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return;
}

void test1() {

    std::list<int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    std::list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    MutantStack<int> mstack;
    for (it = myList.begin(); it != myList.end(); ++it) {
        mstack.push(*it);
    }
    MutantStack<int>::iterator jt;
    for (jt = mstack.begin(); jt != mstack.end(); ++jt) {
        std::cout << *jt << " ";
    }
    std::cout << "\n\n";

    std::list<int>::const_iterator cit;
    for (cit = myList.begin(); cit != myList.end(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << "\n\n";

    MutantStack<int>::const_iterator cjt;
    for (cjt = mstack.begin(); cjt != mstack.end(); ++cjt) {
        std::cout << *cjt << " ";
    }
    std::cout << "\n\n";

    return;
}

int main() {

    test0();
//    test1();

//    system("leaks mutant");
    return 0;
}