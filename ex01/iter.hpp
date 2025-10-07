#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *array, const int length, F f) {
    if (!array) {
        std::cerr << "Error: pointer is null" << std::endl;
        return;
    }
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

#endif
