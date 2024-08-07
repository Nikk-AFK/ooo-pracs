#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main() {
    double * array = new double[3];
    array[0] = 2;
    array[1] = 1.5;
    array[2] = 1.75;
    modifyArray(array, 3, 3.5);
    for (int i = 0; i < 3; i++) {
        std::cout << array[i] << " ";
    }
}