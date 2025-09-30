#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <sys/time.h>

class PmergeMe {
public:

    static std::vector<int> fordJohnsonSort(std::vector<int>& vec);
    static std::deque<int> fordJohnsonSort(std::deque<int>& deq);
    static void printSequence(const std::string& label, const std::vector<int>& seq);


    template <typename Container>
    static Container parseInput(int argc, char** argv) {
        Container numbers;
        for (int i = 1; i < argc; i++) {
            std::string s(argv[i]);
            for (int j = 0; s[j]; j++) {
                if (!std::isdigit(s[j]))
                    throw std::invalid_argument("Error: invalid input.");
            }
            std::istringstream iss(s);
            long val;
            iss >> val;
            if (iss.fail() || val < 0 || val > INT_MAX)
                throw std::invalid_argument("Error: invalid input.");
            numbers.push_back(static_cast<int>(val));
        }
        return (numbers);
    }

    template <typename Container>
    static Container createJacobIndex(int size) {
        Container order;
        Container jacob;

        if (size == 0)
            return (order);
        jacob.push_back(0);
        if (size == 1)
            return (jacob);
        jacob.push_back(1);
        int prev2 = 0;
        int prev1 = 1;
        while (true) {
            int next = prev1 + 2 * prev2;
            if (next >= size)
                break;
            jacob.push_back(next);
            prev2 = prev1;
            prev1 = next;
        }
        for (int i = 2; i < (int)jacob.size(); i++)
            order.push_back(jacob[i]);
        order.push_back(0);
        for (int i = 0; i < size; i++) {
            if (std::find(order.begin(), order.end(), i) == order.end())
                order.push_back(i);
        }
        return (order);
    }

    template <typename Container>
    static int findInsertPosition(Container& toCheck, int value) {
        int low = 0;
        int high = toCheck.size();

        while (low < high) {
            int mid = (low + high) / 2;
            if (toCheck[mid] < value)
                low = mid + 1;
            else
                high = mid;
        }
        return (low);
    }

    template <typename Container>
    static bool checkOrder(Container& toCheck) {
        for (int i = 0; i < (int)toCheck.size(); i++) {
            if (i + 1 < (int)toCheck.size() && toCheck[i] > toCheck[i + 1])
                return (false);
        }
        return (true);
    }

};


#endif