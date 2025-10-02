
#include "iter.hpp"

int main(void)
{
    const int length = 5;

    int array_int[length];
    for (int i = 0; i < length; i++) {
        array_int[i] = i + 1;
    }

    std::string array_string[length];
    for (int i = 0; i < length; i++) {
        array_string[i] = std::string("hello");
    }

    iter(array_int, length, print_t<int>);
    std::cout << "-----" << std::endl;
    iter(array_int, length, print_twice_t<int>);

    std::cout << "------------------" << std::endl;

    iter(array_string, length, print_t<std::string>);
    std::cout << "-----" << std::endl;
    iter(array_string, length, print_twice_t<std::string>);

    return 0;
}
