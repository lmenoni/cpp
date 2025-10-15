#include "Serializer.hpp"
#include <iostream>

int main( void ) {
    Data ptr;
    Data *res;
    unsigned long temp;

    ptr.name = "42";
    ptr.val = 42;
    std::cout   << "Original ptr is: " << &ptr << std::endl;
    temp = Serializer::serialize(&ptr);
    std::cout   << "Unsigned long conversion: " << temp << std::endl;
    res = Serializer::deserialize(temp);
    std::cout   << "New ptr is: " << res << std::endl;

}