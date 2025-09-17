#include "iter.hpp"

int main ( void ) {
    int nums[] = { 0, 1, 2, 3, 4 };
    int numsLen = sizeof(nums) / sizeof(nums[0]);

    std::cout << "ints before:" << std::endl;
    iter(nums, numsLen, printElement);    // printElement<T=int> instantiated automatically

    iter(nums, numsLen, addOne);          // addOne<T=int> modifies elements

    std::cout << "ints after addOne:" << std::endl;
    iter(nums, numsLen, printElement);

    std::cout << "-------------------" << std::endl;

    // const int array - only const-reference functions allowed
    const int cnums[] = { 10, 20, 30 };
    int cnumsLen = sizeof(cnums) / sizeof(cnums[0]);

    std::cout << "const ints:" << std::endl;
    iter(cnums, cnumsLen, printElement);  // works (binds to const ref)

    std::cout << "-------------------" << std::endl;

    // std::string array - demonstrate modifying strings
    std::string words[] = { "hello", "world", "iter" };
    int wordsLen = sizeof(words) / sizeof(words[0]);

    std::cout << "strings before:" << std::endl;
    iter(words, wordsLen, printElement);

    iter(words, wordsLen, toUpper);       // toUpper modifies strings in-place

    std::cout << "strings after toUpper:" << std::endl;
    iter(words, wordsLen, printElement);

    std::cout << "-------------------" << std::endl;

    // char array - showing non-template function works as well
    char chars[] = { 'a', 'b', 'c' };
    int charsLen = sizeof(chars) / sizeof(chars[0]);

    std::cout << "chars:" << std::endl;
    iter(chars, charsLen, printChar);

    return 0;
}