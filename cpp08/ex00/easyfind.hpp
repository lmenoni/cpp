#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int val) {
    typename T::iterator i = std::find(container.begin(), container.end(), val);
    if (i == container.end())
        throw std::runtime_error("Value not found.");
    return (i);
}

#endif