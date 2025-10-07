#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &first, T &second){
    T val = first;
    first = second;
    second = val;
}

template <typename T>
T min(T first, T second) {
    if (first == second) return second;
    else return first < second ? first : second;
}

template <typename T>
T max(T first, T second) {
    return first > second ? first : second;
}

#endif
