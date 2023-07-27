
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <array>
#include <forward_list>
#include <algorithm>

void test0() {
	// Arrays for different integer types
	int intArray[] = {1, 2, 3, 4, 5};
	short shortArray[] = {10, 20, 30, 40, 50};
	long longArray[] = {100, 200, 300, 400, 500};
	unsigned int uintArray[] = {1000, 2000, 3000, 4000, 5000};
	unsigned short ushortArray[] = {10000, 20000, 30000, 40000, 50000};
	unsigned long ulongArray[] = {100000, 200000, 300000, 400000, 500000};

	// Vectors for different integer types
	const std::vector<int> intVector(intArray, intArray + 5);
	const std::vector<short> shortVector(shortArray, shortArray + 5);
	const std::vector<long> longVector(longArray, longArray + 5);
	const std::vector<unsigned int> uintVector(uintArray, uintArray + 5);
	const std::vector<unsigned short> ushortVector(ushortArray, ushortArray + 5);
	const std::vector<unsigned long> ulongVector(ulongArray, ulongArray + 5);

	// Example usage with intVector
	std::vector<int>::const_iterator intIt = easyfind(intVector, 7);
	if (intIt != intVector.end()) {
		std::cout << "Value found in the intVector: " << *intIt << std::endl;
	}
	else {
		std::cout << "Value not found in the intVector." << std::endl;
	}

	// Example usage with shortVector
	std::vector<short>::const_iterator shortIt = easyfind(shortVector, 30);
	if (shortIt != shortVector.end()) {
		std::cout << "Value found in the shortVector: " << *shortIt << std::endl;
	}
	else {
		std::cout << "Value not found in the shortVector." << std::endl;
	}

	// Example usage with longVector
	std::vector<long>::const_iterator longIt = easyfind(longVector, 200);
	if (longIt != longVector.end()) {
		std::cout << "Value found in the longVector: " << *longIt << std::endl;
	}
	else {
		std::cout << "Value not found in the longVector." << std::endl;
	}

	// Example usage with uintVector
	std::vector<unsigned int>::const_iterator uintIt = easyfind(uintVector, 2000);
	if (uintIt != uintVector.end()) {
		std::cout << "Value found in the uintVector: " << *uintIt << std::endl;
	}
	else {
		std::cout << "Value not found in the uintVector." << std::endl;
	}

	// Example usage with ushortVector
	std::vector<unsigned short>::const_iterator ushortIt = easyfind(ushortVector, 30000);
	if (ushortIt != ushortVector.end()) {
		std::cout << "Value found in the ushortVector: " << *ushortIt << std::endl;
	}
	else {
		std::cout << "Value not found in the ushortVector." << std::endl;
	}

	// Example usage with ulongVector
	std::vector<unsigned long>::const_iterator ulongIt = easyfind(ulongVector, 300000);
	if (ulongIt != ulongVector.end()) {
		std::cout << "Value found in the ulongVector: " << *ulongIt << std::endl;
	}
	else {
		std::cout << "Value not found in the ulongVector." << std::endl;
	}
}

void test1() {

	// intArray and intVector are already defined as before
	int intArray[] = {1, 2, 3, 4, 5};

	// Create std::list<int> with the same elements
	std::list<int> intList(intArray, intArray + 5);

	// Create std::deque<int> with the same elements
	std::deque<int> intDeque(intArray, intArray + 5);

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

void test2() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::vector<int> intVector(intArray, intArray + 5);

	std::vector<int>::iterator it = easyfind(intVector, 3);
	if (it != intVector.end()){
		std::cout << "Value found in the intVector: " << *it << std::endl;
	}
	else {
		std::cout << "Value not found in the intVector." << std::endl;
	}
}

int main() {

//	test0();
//	test1();
//	test2();

	return 0;
}