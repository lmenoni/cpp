#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>

typedef struct s_Data
{
    int         val;
    std::string name;
}  Data;

class Serializer {
private:

    Serializer( void ){}

public:

    static unsigned long serialize(Data* ptr);
    static Data* deserialize(unsigned long raw);

};

#endif