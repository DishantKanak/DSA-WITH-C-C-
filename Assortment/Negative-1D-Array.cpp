#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the array's size: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Enter array's elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "a[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "Negative elements from an Array: ";
    bool first = true;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (!first) {
                std::cout << ", ";
            }
            std::cout << arr[i];
            first = false;
        }
    }
    std::cout << std::endl;

    return 0;
}