#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    // Test con vector
    std::vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(i * 2); // 0, 2, 4, 6, ...

    try {
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(v, 7);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Vector: " << e.what() << std::endl;
    }

    // Test con list
    std::list<int> l;
    for (int i = 1; i <= 5; ++i)
        l.push_back(i);

    try {
        std::list<int>::iterator it = easyfind(l, 3);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(l, 10);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << "List: " << e.what() << std::endl;
    }

    return 0;
}