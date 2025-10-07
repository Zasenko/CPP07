
#include "iter.hpp"

template <typename T>
void print_t(T &elem) {
    std::cout << "print: " << elem << std::endl;
}

template <typename T>
void print_twice_t(T &elem) {
    std::cout << "print twice: " << elem << " " << elem << std::endl;
}

void plus_self(int &i)
{
	i += i;
}

void to_upper(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main(void)
{
    const int length = 5;

    int array_int[length];
    for (int i = 0; i < length; i++) {
        array_int[i] = i + 1;
    }

    iter(array_int, length, print_t<int>);
    std::cout << "-----" << std::endl;
    iter(array_int, length, print_twice_t<int>);
    std::cout << "-----" << std::endl;
    iter(array_int, length, plus_self);
    iter(array_int, length, print_t<int>);
    std::cout << "------------------" << std::endl;

    std::string array_string[length];
    for (int i = 0; i < length; i++) {
        array_string[i] = std::string("hello");
    }

    iter(array_string, length, print_t<std::string>);
    std::cout << "-----" << std::endl;
    iter(array_string, length, print_twice_t<std::string>);
    std::cout << "-----" << std::endl;
    iter(array_string, length, to_upper);
    iter(array_string, length, print_t<std::string>);

    return 0;
}
