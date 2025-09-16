#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

typedef enum {
    TYPE_A,
    TYPE_B,
    TYPE_C
}   type;

Base *generate(void) {
    Base    *res;
    int     type;

    srand(time(NULL));
    type = rand() % 3;
    if (type == TYPE_A) {
        res = new A();
        std::cout   << "Generated type A." << std:: endl;
    }
    else if (type == TYPE_B) {
        res = new B();
        std::cout   << "Generated type B." << std:: endl;
    }
    else if (type == TYPE_C) {
        res = new C();
        std::cout   << "Generated type A." << std:: endl;
    }
    return (res);
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout   << "Object of type A." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout   << "Object of type B." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout   << "Object of type C." << std::endl;
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "Object of type A." << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "Object of type B." << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "Object of type C." << std::endl;
}