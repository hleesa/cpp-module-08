#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>
#include <ctime>

void test0() {

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void test1() {
    Span sp = Span(5);

    for (int i = 0; i < 3; ++i) {
        std::cout << "size: " << i << '\n';

        try {
            std::cout << sp.shortestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        std::cout << "\n\n";
        sp.addNumber(i + 1);
    }

    sp.addNumber(4);
    sp.addNumber(5);
    try {
        sp.addNumber(6);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

template<typename Container>
void fillRandomIntegers(Container& container, int size) {
    for (int i = 0; i < size; ++i) {
        int sign = i % 2 == 0 ? -1 : 1;
        container.push_back(std::rand() * sign);
    }
}

void test2() {

    int intArray[] = {6, 3, 17, 9, 11};
    const std::list<int> intList(intArray, intArray + 5);

    Span sp = Span(5);
    sp.add(intList.begin(), intList.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void test3() {

    std::srand(static_cast<unsigned int>(std::time(0)));

    std::vector<int> vec;
    fillRandomIntegers(vec, 5000);

    std::list<int> lst;
    fillRandomIntegers(lst, 5000);

    std::deque<int> deq;
    fillRandomIntegers(deq, 5000);

    /*
    std::cout << "Vector: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "List: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque: ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
*/

    Span sp = Span(15000);
    sp.add(vec.begin(), vec.end());
    sp.add(lst.begin(), lst.end());
    sp.add(deq.begin(), deq.end());

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main() {
    std::cout << "\n\n";

	test0();
//	test1();
//	test2();
//    test3();

//    system("leaks span");
    std::cout << "\n\n";
    return 0;
}