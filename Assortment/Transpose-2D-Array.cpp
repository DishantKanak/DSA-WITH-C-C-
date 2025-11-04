#include <iostream>

const int SIZE = 3;

int main() {
    int original[SIZE][SIZE];
    int transposed[SIZE][SIZE];

    // Get input for the original matrix
    std::cout << "Enter the elements of the " << SIZE << "x" << SIZE << " matrix:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "Enter element a[" << i << "][" << j << "]: ";
            std::cin >> original[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            transposed[j][i] = original[i][j];
        }
    }

    // Print the transposed matrix
    std::cout << "\nThe transpose of the matrix is:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}