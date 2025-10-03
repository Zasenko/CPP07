#include "Array.hpp"

int main(void)
{

    Array<int> arr1(5);
    std::cout << "size: " << arr1.size() << std::endl;

    try {
        int outOfRangeElem = arr1[5];
        (void)outOfRangeElem;

    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        arr1[i] = i + i;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "[" << i << "] " << arr1[i] << std::endl;
    }

    std::cout << "------- assignment ----------" << std::endl;

    Array<int> arr2(10);
    std::cout << "size: " << arr2.size() << std::endl;

    try {
    for (int i = 0; i < 10; i++) {
        arr2[i] = i + i + i;
    }


    arr1 = arr2;

    for (int i = 0; i < 10; i++) {
        std::cout << "[" << i << "] " << arr1[i] << std::endl;
    }
        } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
