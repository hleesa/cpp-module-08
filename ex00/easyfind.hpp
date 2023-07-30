
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T &container, const int target) {
    return std::find(container.begin(), container.end(), target);
}

template<typename T>
typename T::iterator easyfind(T &container, int target) {
    return std::find(container.begin(), container.end(), target);
}

#endif //EASYFIND_HPP
