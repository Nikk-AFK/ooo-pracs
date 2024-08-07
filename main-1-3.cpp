#include <iostream>

extern double* duplicateArray(double* array, int size);

int main() {
    double * array = new double[3];
    array[0] = 2;
    array[1] = 1.5;
    array[2] = 1.75;
    double * ptr = duplicateArray(array, 3);
    for (int i = 0; i < 3; i++) {
        std::cout << ptr[i] << " ";
    }
}