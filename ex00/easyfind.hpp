
#ifndef CPP_HLEESA_EASYFIND_HPP
#define CPP_HLEESA_EASYFIND_HPP

#include <iterator>
#include <algorithm>

template<typename T, typename t>
typename T::const_iterator easyfind(const T& container, t target) {
	return std::find(container.begin(), container.end(), target);
}

#endif //CPP_HLEESA_EASYFIND_HPP
