#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* array, int lenght, void(*f)(T&)) {
    for (int i = 0; i < lenght; i++)
        f(array[i]);
}

template <typename T>
void iter(T const* array, int length, void (*f)(T const&)) {
    for (int i = 0; i < length; ++i)
        f(array[i]);
}

template <typename T>
void printElement(const T& x) {
    std::cout << x << std::endl;
}

template <typename T>
void addOne( T& x) {
    ++x;
}

void toUpper(std::string& s) {
    for (size_t i = 0; i < s.size(); ++i) {
        s[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[i])));
    }
}

void printChar(char const& c) {
    std::cout << '\'' << c << '\'' << std::endl;
}

#endif