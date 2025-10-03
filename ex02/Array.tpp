#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _elements(NULL), _n(0)
{
    std::cout << "Default constructor" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _elements(new T[n]), _n(n)
{
    std::cout << "Constructor with params" << std::endl;
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "Default destructor" << std::endl;

    if (_elements) {
        delete[] _elements;
    }
}

template<typename T>
Array<T>::Array(const Array& copy)
{
    std::cout << "Copy constructor" << std::endl;

    this->_n = copy._n;
    this->_elements = new T[this->_n];
    for (unsigned int i = 0; i < _n; i++) {
        _elements[i] = copy._elements[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
    std::cout << "Assignment operator" << std::endl;

    if (this != &src)
    {
        delete[] _elements;
        _n = src._n;
        _elements = new T[_n];
        for(unsigned int i = 0; i < _n; i++) {
            _elements[i] = src._elements[i];
        }
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _n) {
        throw std::out_of_range("index is out of range!");
    }
    return _elements[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{    
    if (index >= _n) {
        throw std::out_of_range("index is out of range!");
    }
    return _elements[index];
}

template<typename T>
unsigned int Array<T>::size() const {
    return _n;
}

#endif
