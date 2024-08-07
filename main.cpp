#include <iostream>
#include "workshop.h"

int main () {
    double * ptr = new double;
    * ptr = 20;
    changeValue(ptr);
    std::cout << * ptr << std::endl;
    double * array = new double[3];
    array[0] = 3.5;
    array[1] = 6.75;
    array[2] = 5.35;
    printArray(array, 3);
    std::cout << arrayMax(array, 3) << std::endl;
    double * new_arr = dynamicArray(5, 3.74);
    std::cout << "Max of new array: " << arrayMax(new_arr, 5) << std::endl;
    delete[] new_arr;
}