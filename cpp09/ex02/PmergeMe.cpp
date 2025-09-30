#include "PmergeMe.hpp"

std::vector<int> PmergeMe::fordJohnsonSort(std::vector<int>& vec) {
    std::vector<int>    shelf;
    std::vector<int>    res;

    if (vec.size() <= 1)
        return (vec);
    for (int i = 0; i + 1 < (int)vec.size(); i += 2) {
        if (vec[i] < vec[i + 1]) {
            shelf.push_back(vec[i]);
            res.push_back(vec[i + 1]);
        }
        else {
            shelf.push_back(vec[i + 1]);
            res.push_back(vec[i]);
        }
    }
    if (vec.size() % 2 != 0)
        res.push_back(vec.back());
    res = fordJohnsonSort(res);
    std::vector<int>    jacobsthal = createJacobIndex<std::vector<int> >((int)shelf.size());
    for (int i = 0; i < (int)jacobsthal.size(); i++) {
        int value = shelf[jacobsthal[i]];
        int pos = findInsertPosition<std::vector<int> >(res, value);
        res.insert(res.begin() + pos, value);
    }
    return (res);
}

std::deque<int> PmergeMe::fordJohnsonSort(std::deque<int>& deq) {
    std::deque<int>    shelf;
    std::deque<int>    res;

    if (deq.size() <= 1)
        return (deq);
    for (int i = 0; i + 1 < (int)deq.size(); i += 2) {
        if (deq[i] < deq[i + 1]) {
            shelf.push_back(deq[i]);
            res.push_back(deq[i + 1]);
        }
        else {
            shelf.push_back(deq[i + 1]);
            res.push_back(deq[i]);
        }
    }
    if (deq.size() % 2 != 0)
        res.push_back(deq.back());
    res = fordJohnsonSort(res);
    std::vector<int>    jacobsthal = createJacobIndex<std::vector<int> >((int)shelf.size());
    for (int i = 0; i < (int)jacobsthal.size(); i++) {
        int value = shelf[jacobsthal[i]];
        int pos = findInsertPosition<std::deque<int> >(res, value);
        res.insert(res.begin() + pos, value);
    }
    return (res);
}