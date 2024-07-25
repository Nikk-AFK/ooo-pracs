#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int array[7] = {1, 4, 6, 5, 2, 7, 8};
    std::cout << "The array median is: " << median_array(array, 7) << std::endl;
}