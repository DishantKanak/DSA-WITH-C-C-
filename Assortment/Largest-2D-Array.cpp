#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter the array's row size: ";
    std::cin >> rows;
    std::cout << "Enter the array's column size: ";
    std::cin >> cols;

    int arr[rows][cols];

    std::cout << "Enter array's elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "a[" << i << "][" << j << "] = ";
            std::cin >> arr[i][j];
        }
    }

    int largestElement = arr[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > largestElement) {
                largestElement = arr[i][j];
            }
        }
    }

    std::cout << "The largest element is: " << largestElement << std::endl;

    return 0;
}