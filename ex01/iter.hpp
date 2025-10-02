#ifndef ITER_HPP
#define ITER_HPP

// The first parameter is the address of an array.
// The second one is the length of the array, passed as a const value.
// The third one is a function that will be called on every element of the array.
#include <iostream>

template <typename T, typename Func>
void iter(T *array, const int length, Func f) {
    if (!array) {
        std::cerr << "Error: pointer is null" << std::endl;
        return;
    }
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename Func>
void iter(const T *array, const int length, Func f) {
    if (!array) {
        std::cerr << "Error: pointer is null" << std::endl;
        return;
    }
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T>
void print_t(const T &elem) {
    std::cout << "print: " << elem << std::endl;
}

template <typename T>
void print_twice_t(const T &elem) {
    std::cout << "print twice: " << elem << " " << elem << std::endl;
}

#endif
