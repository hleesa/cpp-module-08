
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

void test0() {

    int intArray[] = {1, 2, 3, 4, 5};

    std::list<int> intList(intArray, intArray + 5);
    std::deque<int> intDeque(intArray, intArray + 5);
    std::vector<int> intVector(intArray, intArray + 5);

    // Example usage with intVector
    std::vector<int>::iterator intIt = easyfind(intVector, 7);
    if (intIt != intVector.end()) {
        std::cout << "Value found in the intVector: " << *intIt << std::endl;
    }
    else {
        std::cout << "Value not found in the intVector." << std::endl;
    }

    // Example usage with intList
    std::list<int>::iterator listIt = easyfind(intList, 3);
    if (listIt != intList.end()) {
        std::cout << "Value found in the intList: " << *listIt << std::endl;
    }
    else {
        std::cout << "Value not found in the intList." << std::endl;
    }

    // Example usage with intDeque
    std::deque<int>::iterator dequeIt = easyfind(intDeque, 4);
    if (dequeIt != intDeque.end()) {
        std::cout << "Value found in the intDeque: " << *dequeIt << std::endl;
    }
    else {
        std::cout << "Value not found in the intDeque." << std::endl;
    }

}

void test1() {

	int intArray[] = {1, 2, 3, 4, 5};

	const std::list<int> intList(intArray, intArray + 5);
	const std::deque<int> intDeque(intArray, intArray + 5);
    const std::vector<int> intVector(intArray, intArray + 5);

    // Example usage with intVector
    std::vector<int>::const_iterator intIt = easyfind(intVector, 7);
    if (intIt != intVector.end()) {
        std::cout << "Value found in the intVector: " << *intIt << std::endl;
    }
    else {
        std::cout << "Value not found in the intVector." << std::endl;
    }

    // Example usage with intList
	std::list<int>::const_iterator listIt = easyfind(intList, 3);
	if (listIt != intList.end()) {
		std::cout << "Value found in the intList: " << *listIt << std::endl;
	}
	else {
		std::cout << "Value not found in the intList." << std::endl;
	}

	// Example usage with intDeque
	std::deque<int>::const_iterator dequeIt = easyfind(intDeque, 4);
	if (dequeIt != intDeque.end()) {
		std::cout << "Value found in the intDeque: " << *dequeIt << std::endl;
	}
	else {
		std::cout << "Value not found in the intDeque." << std::endl;
	}
}

int main() {

	test0();
//	test1();

//    system("leaks easy");
	return 0;
}