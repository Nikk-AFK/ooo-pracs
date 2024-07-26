#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int array[3] = {1, 5, 4};
    std::cout << array_sum(array, 3) << std::endl;
}