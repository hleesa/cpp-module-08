
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>

template<typename T, typename t>
typename T::const_iterator easyfind(const T& container, t target) {
	return std::find(container.begin(), container.end(), target);
}

template<typename T, typename t>
typename T::iterator easyfind(T& container, t target) {
	return std::find(container.begin(), container.end(), target);
}

#endif //EASYFIND_HPP
