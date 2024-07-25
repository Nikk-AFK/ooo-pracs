#include <iostream>

int median_array(int array[], int n) {
    std::sort(array, array+n);
    for (int i = 0; i < n; i++) {
    std::cout << "Array element " << i << " is: " << array[i] << std::endl;
    }
}