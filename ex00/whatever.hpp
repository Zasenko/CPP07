#ifndef whatewer_hpp
#define whatewer_hpp

// swap: Swaps the values of two given parameters. Does not return anything.
template <typename T>
void swap(T &first, T &second){
    T val = first;
    first = second;
    second = val;
}

// min: Compares the two values passed as parameters and returns the smallest one.
// If they are equal, it returns the second one.
template <typename T>
T min(T first, T second) {
    if (first == second) return second;
    else return first < second ? first : second;
}

// max: Compares the two values passed as parameters and returns the greatest one.
template <typename T>
T max(T first, T second) {
    return first > second ? first : second;
}

#endif
