#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    int array[3] = {1, 5, 4};
    std::cout << array_mean(array, 3) << std::endl;
}