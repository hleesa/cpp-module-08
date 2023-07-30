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

	sp.addNumber(1);

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

	sp.addNumber(2);
	sp.addNumber(3);
	sp.addNumber(4);
	sp.addNumber(5);
	try {
		sp.addNumber(6);
	} catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

// Function to generate a random integer in the range [min, max]
int getRandomNumber(int min, int max) {
	return std::rand() % (max - min + 1) + min;
}

// Function to fill a container with random integers
template<typename Container>
void fillRandomIntegers(Container& container, int size, int min, int max) {
	for (int i = 0; i < size; ++i) {
		container.push_back(getRandomNumber(min, max));
	}
}

void test2() {

	std::srand(static_cast<unsigned int>(std::time(0)));

	std::vector<int> vec;
	fillRandomIntegers(vec, 400, 1, 2000);

	std::list<int> lst;
	fillRandomIntegers(lst, 400, 2001, 4000);

	std::deque<int> deq;
	fillRandomIntegers(deq, 400, 4001, 6000);

	/*
	// Output the contents of the containers
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

	Span sp = Span(1200);
	sp.add(vec.begin(), vec.end());
	sp.add(lst.begin(), lst.end());
	sp.add(deq.begin(), deq.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main() {

	test0();
//	test1();
//	test2();

//    system("leaks span");
	return 0;
}