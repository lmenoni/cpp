#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>

template <typename T>
class   MutantStack : public std::stack<T> {
public:

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack( void );
    MutantStack( const MutantStack<T>& other);
    MutantStack<T> &operator=( const MutantStack<T>& other );
    ~MutantStack( void );

    iterator        begin( void );
    iterator        end( void );
    const_iterator  begin( void ) const;
    const_iterator  end( void ) const;

};

#include "MutantStack.tpp"

#endif