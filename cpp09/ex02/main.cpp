#include "PmergeMe.hpp"

int main(int ac, char **av) {
    double vectorTime;
    double dequeTime;
    struct timeval start;
    struct timeval stop;
    std::vector<int> nVector;
    std::deque<int> nDeque;

    try {
        gettimeofday(&start, NULL);
        nVector = PmergeMe::parseInput<std::vector<int> >(ac, av);
        nVector = PmergeMe::fordJohnsonSort(nVector);
        gettimeofday(&stop, NULL);
        vectorTime = double((stop.tv_sec - start.tv_sec) * 1000000.0 + (stop.tv_usec - start.tv_usec));
        if (!PmergeMe::checkOrder(nVector)) {
            std::cerr << "Error: vector algo error.\n";
            return (1);
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    try {
        gettimeofday(&start, NULL);
        nDeque = PmergeMe::parseInput<std::deque<int> >(ac, av);
        nDeque = PmergeMe::fordJohnsonSort(nDeque);
        gettimeofday(&stop, NULL);
        dequeTime = double((stop.tv_sec - start.tv_sec) * 1000000.0 + (stop.tv_usec - start.tv_usec));
        if (!PmergeMe::checkOrder(nDeque)) {
            std::cerr << "Error: deque algo error.\n";
            return (1);
        }
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    std::cout << "Before:  ";
    for (int i = 1; i < ac && i < 9; i++)
        std::cout << av[i] << " ";
    if (ac > 9)
        std::cout << "...";
    std::cout << std::endl << "After:  ";
    for (int i = 0; i < ac - 1 && i < 9; i++)
        std::cout << nVector[i] << " ";
    if (ac > 9)
        std::cout << "...";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::endl << "Time to process a range of " << nVector.size()
              << " elements with std::vector : " << vectorTime << "us" << std::endl
              << "Time to process a range of " << nDeque.size()
              << " elements with std::deque : " << dequeTime << "us" << std::endl;
}