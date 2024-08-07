#include <iostream>

extern double arrayMin(double* array, int size);

int main() {
    double * array = new double[3];
    array[0] = 2;
    array[1] = 1.5;
    array[2] = 1.75;
    std::cout << arrayMin(array, 3);
}