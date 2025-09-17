#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
// #include <stdexcept>

template <typename T>
class Array {
private:

    T*              _data;
    unsigned int    _size;

public:

    Array();                         // default: array vuoto
    Array(unsigned int n);           // array di n elementi
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();


    // Operatore di accesso con controllo bounds
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
    // Funzione size
    unsigned int size() const;

};

#include "Array.tpp"  // implementazioni template

#endif