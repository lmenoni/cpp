#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main( void ) {
    for (int i = 0; i < 10; i++) {
        Base *t = generate();
        identify(t);
        identify(*t);
        delete t;
    }
}