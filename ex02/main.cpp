#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> zero;
    std::cout << "zero size: " << zero.size() << std::endl;
    try
    {
        zero[0] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "------------" << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp;
        tmp = numbers;
        Array<int> test(tmp);

        std::cout << "numbers[0]: " << numbers[0] << std::endl;
        std::cout << "tmp[0]    : " << tmp[0] << std::endl;
        std::cout << "test[0]   : " << test[0] << std::endl;

    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();

    }
    delete [] mirror;

    return 0;
}
