#include "iter.hpp"

void print_int(const int i) {
    std::cout << "print: " << i << std::endl;
}

void print_string(const std::string s) {
    std::cout << "print: " << s << std::endl;
}

int main(void)
{

    const int length = 10;
    int array[length];

    for (int i = 0; i < length; i++) {
        array[i] = i * length;
    }

    iter(&array, length, print_int);

    return 0;
}