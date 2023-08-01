
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

    std::cout << "list it:\n";
    std::list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    MutantStack<int> mstack;
    for (it = myList.begin(); it != myList.end(); ++it) {
        mstack.push(*it);
    }
    std::cout << "mstack jt:\n";
    MutantStack<int>::iterator jt;
    for (jt = mstack.begin(); jt != mstack.end(); ++jt) {
        std::cout << *jt << " ";
    }
    std::cout << "\n\n";

    std::cout << "list const it:\n";
    std::list<int>::const_iterator cit;
    for (cit = myList.begin(); cit != myList.end(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << "\n\n";

    std::cout << "mstack const jt:\n";
    MutantStack<int>::const_iterator cjt;
    for (cjt = mstack.begin(); cjt != mstack.end(); ++cjt) {
        std::cout << *cjt << " ";
    }
    std::cout << "\n\n";

    return;
}

void test2(){
    MutantStack<int> ms1;

    ms1.push(1);
    ms1.push(2);
    ms1.push(3);

    MutantStack<int> ms2 = ms1;

    MutantStack<int>::iterator it;
    std::cout << "ms1:\n";
    for (it = ms1.begin(); it != ms1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\nms2:\n";
    for (it = ms2.begin(); it != ms2.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
    while(!ms2.empty()) {
        std::cout << ms2.top() << " ";
        ms2.pop();
    }
    std::cout << "\n\n";

    ms1 = ms2;
    if (ms1.empty()) {
        std::cout << "ms1 is empty\n";
    }
    return;
}

void test3() {
    MutantStack<int> ms1;
    ms1.push(1);
    ms1.push(2);
    ms1.push(3);

    MutantStack<int>::reverse_iterator rit;
    for (rit = ms1.rbegin(); rit != ms1.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "\n\n";

    MutantStack<int>::const_reverse_iterator crit;
    for (crit = ms1.rbegin(); crit != ms1.rend(); ++crit) {
        std::cout << *crit << " ";
    }
    std::cout << "\n";
    return;
}

int main() {
    std::cout << "\n\n";

    test0();
//    test1();
//    test2();
//    test3();

//    system("leaks mutant");
    std::cout << "\n\n";
    return 0;
}