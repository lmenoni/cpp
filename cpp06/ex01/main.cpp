#include "Serializer.hpp"
#include <iostream>

int main( void ) {
    Data ptr;
    Data *res;
    unsigned long temp;

    ptr.name = "42";
    ptr.val = 42;
    temp = Serializer::serialize(&ptr);
    res = Serializer::deserialize(temp);
    std::cout   << "Original ptr is: " << &ptr << std::endl;
    std::cout   << "New ptr is: " << res << std::endl;

}