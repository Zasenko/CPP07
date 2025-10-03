
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
    private:
        T* _elements;
        unsigned int _n;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array& copy);
        Array &operator=(const Array& src);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;
};

#include "Array.tpp"

#endif
