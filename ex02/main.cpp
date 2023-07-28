
#include "MutantStack.hpp"
#include <iostream>

int main(){

    MutantStack<int> stack;

    for (int i = 1; i <= 5; ++i) {
        stack.push(i);
    }

    MutantStack<int>::iterator it;
    for (it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it << " ";
    }

}